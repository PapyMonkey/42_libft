/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:16:31 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/29 16:37:32 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \brief	Converts a lower case letter to the corresponding upper-case
 * 			letter.
 *
 * \param	c	Ascii value of the letter to convert.
 *
 * \returns		If the argument is a lower-case letter, returns the
 * 				corresponding upper-case. Otherwise, the argument is returned
 * 				unchanged.
 */

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
		return (c - 32);
	else
		return (c);
}
