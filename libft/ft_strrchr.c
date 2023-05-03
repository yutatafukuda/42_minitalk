/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:55:04 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 20:46:35 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// const char	str[100] = "abcdefghijkabc";
// 	int			c;

// 	c = 's';
// 	printf("自作%s\n", ft_strrchr(NULL, c));
// 	printf("本家%s\n", strrchr(NULL, c));
// }
