/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:16:43 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/30 16:21:29 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	n_count;

	n_count = 1;
	if (n == 0)
		return (0);
	while (n_count < n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n_count++;
	}
	return (*s1 - *s2);
}
