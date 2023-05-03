/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:02:47 by yufukuda          #+#    #+#             */
/*   Updated: 2022/11/05 21:26:44 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack && !needle[0])
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// const char	haystack[20] = "regssssjhnh";
// 	// const char	needle[20] = "eg";
// 	size_t		len;

// 	len = 4;
// 	printf("自作%s\n", ft_strnstr("abcd", "abcd", 4));
// 	printf("本家%s\n", strnstr("abcd", "abcd", 4));
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	// if (!haystack && needle && !len)
// 	if (haystack == NULL && needle != 0 && len == 0)
// 		return (NULL);
// 	i = 0;
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && i + j < len)
// 			j++;
// 		if (needle[j] == '\0')
// 			return ((char *)&haystack[i]);
// 		i++;
// 	}
// 	return (NULL);
// }
