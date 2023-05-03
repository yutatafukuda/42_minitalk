/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:13:19 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/10 17:49:08 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 120;
// 	ft_isalnum(c);
// 	printf("%d\n", ft_isalnum(c));
// 	printf("%d\n", isalnum(c));
// }
