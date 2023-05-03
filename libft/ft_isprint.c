/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:15:56 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/16 15:12:16 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 126;
// 	ft_isprint(c);
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", isprint(c));
// }
