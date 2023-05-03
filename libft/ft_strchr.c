/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:49:07 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/14 14:49:07 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		p = (char *)s;
		return (p);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			p = (char *)s;
			return (p);
		}
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	int			c;

// 	str = "libft-test-tokyo";
// 	c = 'l' + 256;
// 	printf("自作%s\n", ft_strchr(str, c));
// 	printf("本家%s\n", strchr(str, c));
// 	printf("%d\n", 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2);
// 	printf("%c\n", 'l' + 256);
// 	printf("%c\n", 'l');
// 	printf("%d\n", 'l' + 256);
// 	printf("%d\n", (char)('l' + 256));
// }
// (108 + 256) % 256 
// (char)108