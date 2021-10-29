/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:16:31 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/29 16:43:13 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \brief	Converts an upper-case letter to the corresponding lower-case
 * 			letter.
 *
 * \param	c	Ascii value of the letter to convert.
 *
 * \returns		If the argument is an upper-case letter, returns the
 * 				corresponding lower-case. Otherwise, the argument is returned
 * 				unchanged.
 */

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
		return (c + 32);
	else
		return (c);
}
