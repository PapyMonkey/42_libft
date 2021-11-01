/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 00:26:25 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/01 21:01:45 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if (!s)
		return (NULL);
	if ((unsigned int) ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((unsigned int) ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	out = ft_calloc(len + 1, sizeof(char));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s + start, len + 1);
	return (out);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	s_length;
	size_t	i;

	if (!s)
		return (NULL);
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	s_length = (size_t) ft_strlen(s);
	i = 0;
	while (i < len && i + (size_t) start < s_length)
	{
		out[i] = (char) s[i + (size_t) start];
		i++;
	}
	out[i] = '\0';
	return (out);

	ft_strlcp
}
*/