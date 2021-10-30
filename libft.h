/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 05:02:45 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/30 16:29:59 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * \brief   Writes n zeroed bytes to the string s.
 *          If n is zero, does nothing. 
 * 
 * \param s String to write on. 
 * \param n Number of zero to write.
 */
void	ft_bzero(void *s, size_t n);

/**
 * \brief 	Contiguously allocates enough space for count objects that are size
 * 			bytes of memory each and returns a pointer to the allocated memory.
 * 			The allocated memory is filled with bytes of value zero.
 * 
 * \param count	Number of elements.
 * \param size Size of the elements.
 * \return If successful, return a pointer to the allocated memory.
 * 					Otherwise, return NULL. 
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * \brief   Tests for any character for which isalpha() or isdigit() is true.
 * 
 * \param c Character to be tested. 
 * \return  1 if True, 0 if False.
 */
int		ft_isalnum(int c);

/**
 * \brief Tests for any character for which isupper() or islower() is true.
 * 
 * \param c Character to be tested. 
 * \return  1 if True, 0 if False.
 */
int		ft_isalpha(int c);

/**
 * \brief   Tests for an ASCII character, which is any character between 0 and
 *          127 inclusive.
 * 
 * \param c Character to be tested. 
 * \return  1 if True, 0 if False.
 */
int		ft_isascii(int c);

/**
 * \brief   Tests for a decimal digit character.
 * 
 * \param c Character to be tested. 
 * \return  1 if True, 0 if False.
 */
int		ft_isdigit(int c);

/**
 * \brief   Tests for any printing character, including space (‘ ’).
 * 
 * \param c Character to be tested. 
 * \return  1 if True, 0 if False.
 */
int		ft_isprint(int c);

/**
 * \brief       Computes the number of digits in an integer.
 * 
 * \param n     Input integer. 
 * \return      Length of n. 
 */
int		ft_intlen(int n);

/**
 * \brief		Compares byte string s1 against byte string s2. Both are
 * 				assumed to be n bytes long.
 *
 * \param s1	First string to be compared.
 * \param s2	Second string to be compared.
 * \param n     Length of both strings.
 *
 * \returns		0 if the two strings are identical, otherwise the difference
 * 				between the first two different bytes.
 */
int		memcmp(const void *s1, const void *s2, size_t n);

/**
 * \brief       Copies n bytes from memory area src to memory area dst.
 *              If dst and src overlap, behavior is undefined. 
 * 
 * \param dst   Destination string. 
 * \param src   Source string. 
 * \param n     Number of bytes. 
 * \return      Original value of dst. 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * \brief       Writes len bytes of value c (converted to an unsigned char)
 *              to the string b.
 * 
 * \param b     Destination string. 
 * \param c     Value to be written. 
 * \param len   Length. 
 * \return      First argument, b. 
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * \brief	    Write a given character on a choosen file descriptor. 
 *
 * \param c		Character to be written. 
 * \param fd	File descriptor on which you want your output.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * \brief       Write a given string on a choosen file descriptor followed
 * 			    by a line break.
 *
 * \param s     String to be written. 
 * \param fd	File descriptor on which you want your output.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * \brief   	Write a given number on a choosen file descriptor. 
 *
 * \param	n	Integer to be written.
 * \param	fd	File descriptor on which you want your output.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * \brief       Write a given string on a choosen file descriptor. 
 *
 * \param s     String to be written. 
 * \param fd    File descriptor on which you want your output.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * \brief	    Allocates sufficient memory for a copy of the string, does the
 * 			    copy, and returns a pointer to it.
 *
 * \param src	Source string to be copied.
 *
 * \returns	    Returns a pointer to the copied string.	
 * 			    If insufficient memory is available, NULL is returned.
 */
char	*ft_strdup(char *src);

/**
 * \brief		Apply the f function to each character of the string passed as
 * 				an argument and passing its index as first argument.
 * 				Each character is passed by address to f to be modified if 
 * 				necessary.
 *
 * \param s		String to iterate on. 
 * \param f		Function to apply on each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * \brief       Computes the length of the string. 
 * 
 * \param str   Input string. 
 * \return      Length of str. 
 */
int		ft_strlen(const char *str);

/**
 * \brief		Apply the 'f' function to each character of the string passed in
 * 				argument to create a new string a new string (with malloc())
 * 				resulting from the successive applications of 'f'.
 *
 * \param s		String to iterate on. 
 * \param f		Function to apply on each character.
 *
 * \return		The character string resulting from the successive applications
 * 				of f. Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * \brief       Compares not more than n characters. 
 * 
 * \param s1    First string to be compared. 
 * \param s2    Second string to be compared. 
 * \param n     Number of character to compare. 
 * \return      Integer greater than, equal to, or less than 0, according as the
 *              string s1 is greater than, equal to, or less than the string s2.
 *              The comparison is done using unsigned characters, so that ‘\200’
 *              is greater than ‘\0’. 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * \brief	    Converts an upper-case letter to the corresponding lower-case
 * 			    letter.
 *
 * \param c     Decimal Ascii value of the letter to be converted.
 *
 * \returns		If the argument is an upper-case letter, returns the
 * 				corresponding lower-case. Otherwise, the argument is returned
 * 				unchanged.
 */
int		ft_tolower(int c);

/**
 * \brief	    Converts a lower case letter to the corresponding upper-case
 * 			    letter.
 *
 * \param c     Decimal Ascii value of the letter to be converted.
 *
 * \returns		If the argument is a lower-case letter, returns the
 * 				corresponding upper-case. Otherwise, the argument is returned
 * 				unchanged.
 */
int		ft_toupper(int c);

#endif
