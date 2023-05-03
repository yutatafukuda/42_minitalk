/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:24:21 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/14 17:05:17 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*inttochar1(long int num, size_t count)
{
	char	number;
	size_t	j;
	char	*q;

	j = count;
	num *= -1;
	q = malloc(sizeof(char) * (j + 1 + 1));
	if (q == NULL)
		return (NULL);
	q[0] = '-';
	while (count > 0)
	{
		number = (num % 10) + '0';
		num /= 10;
		q[count] = number;
		count--;
	}
	q[j + 1] = '\0';
	return (q);
}

static char	*inttochar2(long int num, size_t count)
{
	char	number;
	size_t	j;
	char	*q;

	j = count;
	q = malloc(sizeof(char) * (j + 1));
	if (q == NULL)
		return (NULL);
	while (count > 0)
	{
		number = (num % 10) + '0';
		num /= 10;
		q[count - 1] = number;
		count--;
	}
	q[j] = '\0';
	return (q);
}

static size_t	counting(int long num)
{
	size_t	count;

	count = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		i;
	char		*p;
	long int	num;

	i = 0;
	num = (long int)n;
	if (num == 0)
	{
		p = malloc(sizeof(char) * (2));
		if (p == NULL)
			return (NULL);
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	i = counting(num);
	if (num < 0)
		p = inttochar1(num, i);
	else
		p = inttochar2(num, i);
	return (p);
}

// int	main(void)
// {
// 	int	n;
// 	char *a;
// 	n = -1234;
// 	// printf("最初　n = %d\n", n);

// 	a = ft_itoa(n);
// 	printf("count = %zu\n", counting(n));
// 	printf("%s\n", a);
// }