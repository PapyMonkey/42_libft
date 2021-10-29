/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:46:05 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/29 16:50:22 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \brief	Allocates sufficient memory for a copy of the string, does the
 * 			copy, and returns a pointer to it.
 *
 * \param	src	Source string to be copied.
 *
 * \returns	Returns a pointer to the copied string.	
 * 			If insufficient memory is available, NULL is returned and errno
 * 			is set to ENOMEM.
 */

char	*ft_strdup(char *src)
{	
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		*(cpy + i) = *(src + i);
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}
