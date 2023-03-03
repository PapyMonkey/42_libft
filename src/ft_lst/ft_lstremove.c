/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 05:24:14 by aguiri            #+#    #+#             */
/*   Updated: 2023/02/25 17:36:05 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove(t_list **lst, t_list *elem_to_rm, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp_next;
	t_list	*tmp_before;

	if (!lst || !elem_to_rm)
		return ;
	tmp = *lst;
	tmp_before = NULL;
	tmp_next = tmp->next;
	while (tmp && tmp != elem_to_rm)
	{
		tmp_before = tmp;
		tmp = tmp_next;
		if (tmp)
			tmp_next = tmp->next;
	}
	if (!tmp)
		return ;
	if (!tmp_before)
		*lst = tmp_next;
	else
		tmp_before->next = tmp_next;
	ft_lstdelone(tmp, del);
}
