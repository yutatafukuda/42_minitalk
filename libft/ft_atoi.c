/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:06:22 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:26:17 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	maxmin(int p)
{
	if (p == -1)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

static int	over(long int num, const char *str, int flag, int i)
{
	long int	ov_div;
	long int	ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (ov_div < num)
	{
		if (flag == 1)
			return (-1);
		else
			return (-2);
	}
	if (ov_div == num && ov_mod < str[i] - '0')
	{
		if (flag == 1)
			return (-1);
		else
			return (-2);
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			i;
	int			flag;
	int			p;

	num = 0;
	i = 0;
	flag = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		p = over(num, str, flag, i);
		if (p == -1 || p == -2)
			return (maxmin(p));
		num = 10 * num + str[i] - '0';
		i++;
	}
	return ((int)num * flag);
}

// int	main(void)
// {
// 	char	str[30] = "9223372036854775807";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
