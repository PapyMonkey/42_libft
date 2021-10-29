/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papy <aguiri@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:56:53 by papy              #+#    #+#             */
/*   Updated: 2021/10/29 11:10:52 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/**
 * @brief : Apply the 'f' function to each character of the string passed in
 * 		argument to create a new string a new string (with malloc(3))
 * 		resulting from the successive applications of 'f'.
 *
 * @param s : String to iterate on. 
 * @param f : Function to apply on each character.
 *
 * @return : The character string resulting from the successive applications
 * 		of f. Returns NULL if the allocation fails.
 */

char	*ft_striteri(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	len;
	char	*out;

	i = 0;
	len = ft_strlen(s);
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	out[len] = '\0';
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}
