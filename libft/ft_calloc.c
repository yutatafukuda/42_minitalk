/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:00:56 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/08 02:09:31 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0)
	{
		p = (void *)malloc(1);
		ft_bzero(p, 1);
		return (p);
	}
	if (SIZE_MAX / size < count)
		return (NULL);
	p = (void *)malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}

// int	main(void)
// {
// 	size_t	count;
// 	size_t	size;

// 	count = 6;
// 	size = 3;
// 	printf("%p\n", ft_calloc(count, size));
// 	free(&ft_calloc);
// 	printf("%p\n", ft_calloc(count, size));
// 	printf("%p\n", calloc(count, size));
// 	printf("%c", &)
// }
