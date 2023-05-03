/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:52:33 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 17:15:11 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*point;
	size_t			i;

	point = (unsigned char *)buf;
	i = 0;
	while (n > 0)
	{
		point[i] = ch;
		i++;
		n--;
	}
	return (buf);
}

// int	main(void)
// {
// 	char	str[] = "abcdefghijkl";
// 	int		ch;
// 	size_t	n;

// 	ch = '6';
// 	n = 7;
// 	ft_memset(str, ch, n);
// 	printf("%s\n", str);
// 	char	string[] = "abcdefghijkl";
// 	printf("%s\n", memset(string, ch, n));
// }
