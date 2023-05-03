/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:21:28 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/10 16:20:15 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*point;
	int		ch;
	int		i;

	point = (char *)s;
	ch = '\0';
	i = 0;
	while (n > 0)
	{
		point[i] = ch;
		i++;
		n--;
	}
}

// int	main(void)
// {
// 	char	s[] = "abcdefghijk";
// 	size_t	n;

// 	n = 5;
// 	ft_bzero(s, n);
// 	printf("自作%s\n", s);
// 	char	str[] = "abcdefghijk";
// 	printf("本家%s\n", bzero(str, n));
// }
