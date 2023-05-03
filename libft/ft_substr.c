/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:39:31 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:39:31 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i || len == 0)
		return (ft_strdup(""));
	if (len > i)
		len = i;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((size_t)i < len && s[start + i] != '\0')
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	// char	const s[20] = "o";
// 	// unsigned int	start;
// 	// size_t	len;

// 	// start = 15;
// 	// len = 5;
// 	char	*dst;

// 	dst = ft_substr("tripouille", 0, 42000);
// 	printf("setntence = %s\n", dst);
// 	printf("length = %zu", ft_strlen(dst));
// 	free(dst);
// }
