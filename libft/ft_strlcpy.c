/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:15:01 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 17:27:35 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	flag;

	i = ft_strlen(src);
	j = 0;
	if (src[0] == '\0' && dstsize == 0)
		return (0);
	if (i == 0 || (dst && src && dstsize == 1))
		dst[0] = '\0';
	while (src[j] != '\0' && dstsize > 1)
	{	
		dst[j] = src[j];
		dstsize--;
		j++;
		flag = 1;
	}
	if (flag == 1)
		dst[j] = '\0';
	return (i);
}

// int	main(void)
// {
// // 	char	dest1[10];
// // 	dest1[0] = 'g';
// // 	dest1[1] = 'A';
// // 	// char	src1[] = "";
// // // // 	// printf("%s\n", dest);
// // // // 	// printf("%zu\n", strlen(dest));
// // // // 	// size_t n1;

// // // // 	// n1 = 2;
// // 	printf("%zu\n", ft_strlcpy(dest1, "coucou", 0));
// // 	printf("%p\n", dest1);

// // // // 	// char	dst2[] = "";
// // // // 	// char	src2[] = "";

// // 	char	dest2[10];
// // 	dest2[0] = 'g';
// // 	dest2[1] = 'A';
// // 	printf("%lu\n", strlcpy(dest2, "coucou", 0));
// // 	printf("%p\n", dest2);
// 	char	*s1 = "";
// 	char	*s2 = "abcd";
// 	char	*x1 = "";
// 	char	*x2 = "abcd";
// 	printf("文字数 = %zu\n", ft_strlcpy(s1, s2, 0));
// 	printf("%s\n", s1);
// 	printf("%zu\n", s1);
// 	printf("文字数 = %zu\n", strlcpy(x1, x2, 0));
// 	printf("%s\n", x1);
// }