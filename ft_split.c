/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:54:37 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/29 13:17:20 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/**
 * \fn			int ft_char_is_separator(char c, char *charset)
 * \brief		Check if a character is a separator. 
 *
 * \param	c	Character to evaluate.
 * \param	charset	List of separators.
 *
 * \return		1 if the character IS a separator,
 * 			0 otherwise.
 */

int	ft_char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

/**
 * \fn		int ft_count_words(char *str, char *charset)
 * \brief	Count the numbers of words in the string based on the
 * 		given separators.
 *
 * \param 	str		String containing the words.
 * \param	charset		List of separators.
 *
 * Returns  	Number of words counted. 
 */

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i + 1], charset)
			&& !ft_char_is_separator(str[i], charset))
			words++;
		i++;
	}
	return (words);
}

/**
 * \fn		void ft_write_words(char *dest, char *src, char *charset)
 * \brief	Write a word in a destination string.
 *
 * \param	dest		Destination string.
 * \param 	src		String containing the words.
 * \param	charset		List of separators.
 */

void	ft_write_words(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!ft_char_is_separator(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * \fn		void ft_write_tab(char **str_split, char *str, char *charset)
 * \brief	Write the different words in a destination 2D array.
 *
 * \param	str_split	Destination 2D array.
 * \param 	str		String containing the words.
 * \param	charset		List of separators.
 */

void	ft_write_tab(char **str_split, char *str, char *charset)
{
	int	i;
	int	j;
	int	n_word;

	i = 0;
	n_word = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!ft_char_is_separator(str[i + j], charset))
				j++;
			str_split[n_word] = malloc(sizeof(char) * (j + 1));
			ft_write_words(str_split[n_word], str + i, charset);
			i += j;
			n_word++;
		}
	}
}

/**
 * \fn		char **ft_split(char *str, char *charset)
 * \brief	General function that use all of the above to properly split
 * 		a string. Returns the splitted string as a 2D array.
 *
 * \param	str		Input string to split.
 * \param 	charset		List of separators.
 *
 * Returns	2D string containing the splitted str. 
 */

char	**ft_split(char *str, char *charset)
{
	char	**str_splitted;
	int		n_words;

	n_words = ft_count_words(str, charset);
	str_splitted = malloc(sizeof(char *) * (n_words + 1));
	str_splitted[n_words] = 0;
	ft_write_tab(str_splitted, str, charset);
	return (str_splitted);
}
