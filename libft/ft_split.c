/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:24:45 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/17 17:24:05 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **p, size_t i)
{
	int	j;

	j = (int)i;
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
	return (NULL);
}

static size_t	ft_strlen_c(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**word(char const *s, char c, char **p, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*q;

	i = 0;
	j = 0;
	k = 0;
	while (k <= len)
	{
		j = ft_strlen_c(s + k, c);
		if (j > 0)
		{
			q = malloc(sizeof(char) * (j + 1));
			if (q == NULL)
				return (ft_free(p, i));
			ft_strlcpy(q, s + k, (j + 1));
			p[i] = q;
			i++;
		}
		k += j + 1;
	}
	p[i] = NULL;
	return (p);
}

static size_t	counts(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (*(s + 1) == c || *(s + 1) == '\0')
				count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	char	**p;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	j = counts(s, c);
	p = malloc(sizeof(char *) * (j + 1));
	if (p == NULL)
		return (NULL);
	if (word(s, c, p, len) == NULL)
		return (NULL);
	return (p);
}

// int	main(void)
// {
// 	char const s[24] = "hello,world,,42,tokyo,,";
// 	char c = ' ';
// 	size_t	i;
// 	size_t	j;
// 	char **q;
// 	q = ft_split(s, c);
// 	i = 0;
// 	j = 0;
// 	// system("leaks a.out");
// 	while (q[i] != NULL)
// 	{
// 		while (q[i][j])
// 		{
// 			printf("%c", q[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		j = 0;
// 		i++;
// 	}
// 	printf("%p\n", q[1]);
// 	while (q[i])
// 	{
// 		printf("%s\n", q[i]);
// 		i++;
// 	}
// }
// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q a.out");
// }