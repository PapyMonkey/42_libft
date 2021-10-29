/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papy <aguiri@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:56:53 by papy              #+#    #+#             */
/*   Updated: 2021/10/29 14:53:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief : Apply the f function to each character of the string passed as an 
 * 	argument and passing its index as first argument.
 * 	Each character is passed by address to f to be modified if 
 * 	necessary.
 *
 * @param s : String to iterate on. 
 * @param f : Function to apply on each character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
