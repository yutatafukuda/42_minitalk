/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:27:33 by yufukuda          #+#    #+#             */
/*   Updated: 2022/11/25 20:24:40 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*point;
	const char	*pointer;

	point = (char *)dst;
	pointer = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		point[i] = pointer[i];
		i++;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	size_t	n;
// 	char	*dst = "12345";
// 	char	*src = NULL;

// 	n = 7;
// 	ft_memcpy(dst, src, n);
// 	printf("%s\n", dst);
// 	char	*buf1 = "12345";
// 	char	*buf2 = NULL;
// 	printf("%s\n", memcpy(buf1, buf2, n));
// }
