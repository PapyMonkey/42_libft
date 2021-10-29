/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papy <aguiri@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:56:53 by papy              #+#    #+#             */
/*   Updated: 2021/10/29 01:57:10 by papy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/**
 * @brief : Write a given string on a choosen file descriptor. 
 *
 * @param s : String to write. 
 * @param fd : File descriptor on which you want your output.
 */

void	ft_putstr_fd(char *s, int fd)
{
	while (s)
	{
		write(fd, s, 1);
		s++;
	}
}
