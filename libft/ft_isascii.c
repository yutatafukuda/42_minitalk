/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:16:13 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/16 15:12:06 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 128;
// 	ft_isascii(c);
// 	printf("%d\n", ft_isascii(c));
// 	printf("%d\n", isascii(c));
// }
