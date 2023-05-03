/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:37:32 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/11 17:43:12 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*p;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, (int)*s1) != NULL)
		s1++;
	len = ft_strlen(s1);
	while (*s1 && s1[len - 1] && ft_strchr(set, (int)s1[len - 1]) != NULL)
		len--;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, (const void *)s1, len);
	p[len] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char const	s1[100] = " \n\t\r    hello \n\t\r world     \r\t\n\t \r\n";
// 	char const	s2[100] = "hello \n\t\r world";
// 	printf("%s\n", ft_strtrim(s1, s2));
// 	return (0);
// }
