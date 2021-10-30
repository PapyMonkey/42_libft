/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:48:59 by papy              #+#    #+#             */
/*   Updated: 2021/10/29 16:04:24 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \brief	Write a given character on a choosen file descriptor. 
 *
 * \param	c		Character to write. 
 * \param	fd		File descriptor on which you want your output.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}