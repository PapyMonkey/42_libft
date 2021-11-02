/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 05:02:45 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/02 20:28:06 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include "ft_lst.h"

// ****************************************************************************
// Functions

/**
 * \brief 		Converts the initial portion of the string pointed to by str to an 
 * 				int representation.
 * 
 * \param str 	String to be converted.
 * \return		Int representation of the initial portion of the string. 
 */
int		ft_atoi(const char *str);

/**
 * \brief   	Writes n zeroed bytes to the string s.
 *          	If n is zero, does nothing. 
 * 
 * \param s 	String to write on. 
 * \param n 	Number of zero to write.
 */
void	ft_bzero(void *s, size_t n);

/**
 * \brief 		Contiguously allocates enough space for count objects that are size
 * 				bytes of memory each and returns a pointer to the allocated memory.
 * 				The allocated memory is filled with bytes of value zero.
 * 
 * \param count	Number of elements.
 * \param size 	Size of the elements.
 * \return 		If successful, return a pointer to the allocated memory.
 * 				Otherwise, return NULL. 
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * \brief   	Tests for any character for which isalpha() or isdigit() is true.
 * 
 * \param c 	Character to be tested. 
 * \return  	1 if True, 0 if False.
 */
int		ft_isalnum(int c);

/**
 * \brief 		Tests for any character for which isupper() or islower() is true.
 * 
 * \param c 	Character to be tested. 
 * \return  	1 if True, 0 if False.
 */
int		ft_isalpha(int c);

/**
 * \brief   	Tests for an ASCII character, which is any character between 0 and
 *          	127 inclusive.
 * 
 * \param c 	Character to be tested. 
 * \return  	1 if True, 0 if False.
 */
int		ft_isascii(int c);

/**
 * \brief   	Tests for a decimal digit character.
 * 
 * \param c 	Character to be tested. 
 * \return  	1 if True, 0 if False.
 */
int		ft_isdigit(int c);

/**
 * \brief   	Tests for any printing character, including space (‘ ’).
 * 
 * \param c 	Character to be tested. 
 * \return  	1 if True, 0 if False.
 */
int		ft_isprint(int c);

/**
 * \brief		Allocate (with malloc()) and returns a string of characters
 * 				representing the integer received as argument.
 * 				Negative numbers must be handled.
 *
 * \param n		Integer to be converted.
 * \return		String that represent the integer, NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * \brief 		Locates the first occurrence of c (converted to an unsigned
 * 				char) in string s. 
 * 
 * \param s		String to search in. 
 * \param c		Charactered wanted. 
 * \param n		Number of iterations to be done. 
 * \return		Pointer to the byte located, or NULL if no such byte exists
 * 				within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n);

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
int		ft_memcmp(const void *s1, const void *s2, size_t n);

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
 * \brief		Copies len bytes from string src to string dst.  The two strings
 * 				may overlap; the copy is always done in a non-destructive
 * 				manner. 
 * 
 * \param dst 	Destination string.
 * \param src	Source string. 
 * \param len	Number of bytes to be copied. 
 * \return		Original value of dst. 
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

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
 * \brief		Allocate (with malloc()) and returns an array of strings
 * 				obtained by separating s with the character c, used as
 * 				delimiter. The array must be terminated by NULL.
 *
 * \param s		Input string to be splitted.
 * \param c		Delimiting character.
 *
 * \return		2D string containing the splitted string. 
 */
char	**ft_split(char const *s, char c);

/**
 * \brief		Locates the first occurrence of c (converted to a char) in the
 * 				string pointed to by s.  The terminating null character is
 * 				considered to be part of the string; therefore if c is ‘\0’,
 * 				the functions locate the terminating ‘\0’.
 * 
 * \param s 	String to search in.
 * \param c		Character to be found. 
 * \return		Pointer to the located character, or NULL if the character
 * 				does not appear in the string.
 */
char	*ft_strchr(const char *s, int c);

/**
 * \brief	    Allocate (with malloc()) sufficient memory for a copy of the
 * 				string, does the copy, and returns a pointer to it.
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
 * \brief		Allocate (with malloc()) and return a new string who
 * 				concatenate s1 and s2. 
 * 
 * \param s1	Prefix string. 
 * \param s2	Suffix string. 
 * \return		New string, NULL if the allocation fails. 
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * \brief		Appends string src to the end of dst. It will append at most
 * 				dstsize - strlen(dst) - 1 characters. It will then
 * 				NUL-terminate the string, unless dstsize is 0 or the original
 * 				dst string was longer than dstsize (in practice this should not
 * 				happen as it means that either dstsize is incorrect or that dst
 * 				is not a proper string). 
 * 
 * \param dst		Destination string.
 * \param src		Source string, to be appened at the end of dst.
 * \param dstsize	Size of the destination buffer.
 * \return		Total length of the string the function tried to create. 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * \brief		Copies up to dstsize - 1 characters from the string src to dst,
 * 				NUL-terminating the result if dstsize is not 0.
 * 
 * \param dst		Destination string.
 * \param src		Source string, to be appened at the end of dst.
 * \param dstsize	Size of the destination buffer.
 * \return		Total length of the string the function tried to create. 
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

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
 * \brief		Locates the first occurrence of the null-terminated string
 * 				needle in the string haystack, where not more than len
 * 				characters are searched. 
 * 
 * \param haystack	String to search in.
 * \param needle	String to be found. 
 * \param len		Number of bytes to be scanned in haystack. 
 * \return			If needle is an empty string, haystack is returned; if
 * 					needle occurs nowhere in haystack, NULL is returned;
 * 					otherwise a pointer to the first character of the first
 * 					occurrence of needle is returned. 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * \brief		Locates the last occurrence of c (converted to a char) in the
 * 				string pointed to by s.  The terminating null character is
 * 				considered to be part of the string; therefore if c is ‘\0’,
 * 				the functions locate the terminating ‘\0’.
 * 
 * \param s 	String to search in.
 * \param c		Character to be found. 
 * \return		Pointer to the located character, or NULL if the character
 * 				does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * \brief 		Allocate (with malloc()) and returns a copy of the string s1,
 * 				without the characters specified in specified in set at the
 * 				beginning and end of the string.
 * 
 * \param s1	String to be trimmed. 
 * \param set	Character reference set to be trimmed. 
 * \return		Trimmed string. NULL if the allocation fails. 
 */
char	*ft_strtrim(const char *s1, const char *set);

/**
 * \brief 		Allocate (with malloc()) and returns a string of string from
 * 				the string s. This new string starts at index start and
 * 				has the maximum size len.
 * 
 * \param s		String to be copied. 
 * \param start	Index of the new string in s. 
 * \param len	Maximum length of the new string. 
 * \return		New allocated string. Returns NULL if allocation fails. 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * \brief	    Converts an upper-case letter to the corresponding lower-case
 * 			    letter.
 *
 * \param c     Decimal Ascii value of the letter to be converted.
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
 * \returns		If the argument is a lower-case letter, returns the
 * 				corresponding upper-case. Otherwise, the argument is returned
 * 				unchanged.
 */
int		ft_toupper(int c);

#endif