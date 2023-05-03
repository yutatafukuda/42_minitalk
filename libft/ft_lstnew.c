/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:36:14 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:30:52 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p -> content = content;
	p -> next = NULL;
	return (p);
}
