/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:16 by yufukuda          #+#    #+#             */
/*   Updated: 2023/04/26 20:52:32 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t	g_flag;

void	bit_to_char(volatile sig_atomic_t	g_flag)
{
	static int	bit_count;
	static int	number;
	static int	power;
	int			bit;

	if (g_flag == SIGUSR1)
		bit = 1;
	else
		bit = 0;
	if (bit_count == 0)
		power = 1;
	bit_count++;
	if (bit_count <= 8)
	{
		number += power * bit;
		power *= 2;
	}
	if (bit_count == 8)
	{
		ft_putchar_fd(number, 1);
		bit_count = 0;
		number = 0;
		power = 1;
	}
}

void	sigusr1and2_handler(int signal)
{
	g_flag = signal;
}

int	main(void)
{
	struct sigaction	sa;
	pid_t				pid;

	ft_bzero(&sa, sizeof(struct sigaction));
	sa.sa_handler = sigusr1and2_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		pause();
		bit_to_char(g_flag);
	}
	return (0);
}
