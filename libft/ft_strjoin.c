/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:07:54 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/10 17:04:01 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, i);
	ft_memcpy(p + i, s2, j);
	p[i + j] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	s1[20] = "abcde";
// 	char	s2[20] = "123";
// 	system("leaks a.out");
// 	printf("%s\n", ft_strjoin(s1, s2));
// }