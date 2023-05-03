/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:55:07 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/10 16:11:30 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i + 1 < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		i++;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

// int	main(void)
// {
// 	const char	*s1 = "libft-tester-tokyo";
// 	const char	*s2 = "";
// 	size_t n;

// 	n = 0;
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d\n", memcmp(s1, s2, n));
// }
