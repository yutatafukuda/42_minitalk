/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:40:33 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/14 14:40:33 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'C';
// 	printf("%c\n", ft_tolower(c));
// 	printf("%c\n", tolower(c));
// }
