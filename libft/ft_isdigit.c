/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:39:23 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/10 17:14:42 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 40;
// 	ft_isdigit(c);
// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", ft_isdigit(c));
// }
