/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:25:15 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/30 18:01:46 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (dst > src)
		while (len--)
			dst_tmp[len] = src_tmp[len];
	else
	{
		i = 0;
		while (i < len)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dst);
}
