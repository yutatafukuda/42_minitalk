/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:53:24 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 17:27:46 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*change1;
	char		*change2;
	size_t		i;

	change1 = (char *)dest;
	change2 = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (change1 > change2)
	{
		while (n-- > 0)
			change1[n] = change2[n];
	}
	else
	{
		while (n > 0)
		{
			change1[i] = change2[i];
			i++;
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "123456";
// 	size_t n;

// 	n = 4;
// 	printf("%s\n", ft_memmove(dest+2, dest, n));
// 	char	buf1[] = "123456";
// 	printf("%s\n", memmove(buf1+2, buf1, n));
// 	// printf("%s\n", ft_memmove(NULL, NULL, 10));
// 	// printf("%s\n", memmove(NULL, NULL, 10));
// }
