/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:48 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/01 16:45:57 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp1;
	t_list	*tmp2;

	i = 0;
	tmp1 = lst;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp2->next;
		i++;
	}
	return (i);
}
