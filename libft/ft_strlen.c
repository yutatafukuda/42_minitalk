/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:22:26 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/11 18:04:14 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "abcdefghi";
// 	ft_strlen(str);
// 	printf("%zu\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// }
