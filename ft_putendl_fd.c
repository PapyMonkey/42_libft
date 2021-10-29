/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:01:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/29 02:24:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/**
 * @brief : Write a given string on a choosen file descriptor followed 
 * 	by a line break.
 *
 * @param s : String to write. 
 * @param fd : File descriptor on which you want your output.
 */

void	ft_putendl_fd(char *s, int fd)
{
	while (s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, '\n', 1);
}
