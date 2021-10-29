/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papy <aguiri@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:56:53 by papy              #+#    #+#             */
/*   Updated: 2021/10/29 11:30:20 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/**
 * @brief : Return the length of a given integer. 
 *
 * @param n : Integer to count.
 *
 * @return : Length of the integer.
 */

int	ft_intlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n > 10)
		n = n / 10;
	return (i);
}

/**
 * @brief : Alloue (with malloc(3)) and returns a string of characters
 * 		representing the integer received as argument.
 * 		Negative numbers must be handled.
 *
 * @param n : Integer to convert.
 *
 * @return : String that represent the integer, NULL if the allocation fails.
 */

char	*ft_itoa(int n)
{
	int	i;
	int	len;
	char	*out;

	i = 0;
	len = ft_intlen(n);
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	out[len] = '\0';
	while (i < len)
	{
		out[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	return (out);
}
