/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 05:24:14 by aguiri            #+#    #+#             */
/*   Updated: 2022/12/06 05:42:11 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove(t_list **lst, t_list *elem_to_rm, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp_next;
	t_list	*tmp_before;

	tmp = *lst;
	while (tmp != elem_to_rm)
	{
		tmp_next = tmp->next;
		tmp_before = tmp;
		tmp = tmp_next;
	}
	if (tmp_before == tmp)
		*lst = tmp->next;
	else
		tmp_before->next = tmp->next;
	ft_lstdelone(tmp, del);
}
