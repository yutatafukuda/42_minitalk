/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:30:22 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:33:16 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*q;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	p = ft_lstnew(f(lst -> content));
	if (p == NULL)
		return (NULL);
	q = p;
	lst = lst -> next;
	while (lst)
	{
		p = ft_lstnew(f(lst -> content));
		if (p == NULL)
		{
			del(p);
			free(q);
			return (NULL);
		}
		ft_lstadd_back(&q, p);
		lst = lst -> next;
	}
	return (q);
}
