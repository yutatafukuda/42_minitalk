/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:28:40 by yufukuda          #+#    #+#             */
/*   Updated: 2022/10/28 16:35:01 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	s1[20] = "dbcdef";
// 	char	s2[20] = "zbc";
// 	size_t	n;

// 	n = 3;
// 	printf("%c\n", 200);
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// }
