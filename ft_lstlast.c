/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:49:04 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/01 16:56:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		lst_len;
	int		i;

	tmp1 = lst;
	lst_len = ft_lstsize(tmp1);
	i = 1;
	while (i < lst_len)
	{
		tmp2 = tmp1;
		tmp1 = tmp2->next;
		i++;
	}
	return (tmp1);
}