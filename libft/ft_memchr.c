/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:11:25 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/28 16:07:46 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 1;
	p = (unsigned char *)s;
	while (i <= n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		i++;
		p++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char	s[30] = "libft-test-tokyo\0\0\0acdfg\0\0\0\0\0";
// 	char *s = NULL;
// 	int		c;
// 	size_t	n;

// 	c = '\0';
// 	n = 30;
// 	printf("本家%s\n", ft_memchr(s, c, n));
// 	printf("自作%s\n", memchr(s, c, n));
// }
