/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:29:50 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:43:12 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = tmp;
	}
}
