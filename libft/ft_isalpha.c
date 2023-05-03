/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:33:32 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/14 18:12:08 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

// return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));

// int	main(void)
// {
// 	int	c;

// 	c = 65;
// 	ft_isalpha(c);
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(c));
// }
