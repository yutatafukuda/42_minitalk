/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:12:45 by yufukuda          #+#    #+#             */
/*   Updated: 2022/11/02 19:55:31 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	k = 0;
	if (dst == NULL && dstsize == 0)
		return (j);
	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + j);
	else if (dstsize > i && dstsize <= i + j)
	{
		while (dstsize > i + k++ + 1)
			dst[i + k - 1] = src[k - 1];
		dst[i + k - 1] = '\0';
		return (i + j);
	}
	else
	{
		while (src[k++] != '\0')
			dst[i + k - 1] = src[k - 1];
		dst[i + k - 1] = '\0';
		return (i + j);
	}
}

// int	main(void)
// {
// // 	char	dst1[20] = "abcde";
// 	char	src1[] = "123456";
// // 	size_t	n1;

// // 	n1 = 1;
// 	printf("%zu\n", ft_strlcat(NULL, src1, 0));
// // 	printf("%s\n", dst1);
// // 	char	dst2[20] = "abcde";
// 	char	src2[] = "123456";
// // 	size_t	n2;

// // 	n2= 1;
// 	printf("%lu\n", strlcat(NULL, src2, 0));
// // 	printf("%s\n", dst2);
// }
