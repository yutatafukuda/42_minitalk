/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:37:47 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 17:15:48 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char s[] = "abcde";
// 	ft_strmapi(s, ft_toupper);
// 	printf("%s\n", ft_strmapi(s, ft_toupper));
// }
