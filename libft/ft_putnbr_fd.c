/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:34:02 by yufukuda          #+#    #+#             */
/*   Updated: 2022/12/07 17:34:44 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + '0', fd);
}

// int	main(void)
// {
// 	int n;

// 	n = 12345;
// 	ft_putnbr_fd(n);
// 	printf("n = %d", ft_putnbr_fd(n));
// 	return (0);
// 	// int n;
// 	// int fd;

// 	// if (n < 0)
// 	// {
// 	// 	write(fd, '-', 1);
// 	// 	n *= -1;
// 	// }
// 	// if (n > 0)
// 	// {
// 	// 	ft_putchar_fd(n / 10, fd);
// 	// 	ft_putchar(n % 10 + '0', fd);
// 	// }

// 	// int n;

// 	// n = -12345;
// 	// if (n < 0)
// 	// {
// 	// 	write(1, "-", 1);
// 	// 	n *= -1;
// 	// }
// 	// if (n >= 10)
// 	// {
// 	// 	ft_putnbr_fd(n / 10);
// 	// }
// 	// // ft_putchar_fd(n % 10 + '0', fd);
// 	// write(1, &n, 1);
// }
