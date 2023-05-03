/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:09:23 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:31:44 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndptr;

	ndptr = *lst;
	if (lst == NULL || new == NULL)
		return ;
	ndptr = ft_lstlast(*lst);
	if (ndptr == NULL)
		*lst = new;
	else
		ndptr -> next = new;
}
