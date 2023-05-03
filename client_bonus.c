/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:33:02 by yufukuda          #+#    #+#             */
/*   Updated: 2023/04/29 17:30:30 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	chartobit(int pid, char *message)
{
	int	i;
	int	error_check;

	i = 0;
	error_check = 0;
	while ((unsigned char)*message != '\0')
	{
		i = 0;
		while (i < 8)
		{
			if (((unsigned char)*message >> i) & 1)
				error_check = kill(pid, SIGUSR1);
			else
				error_check = kill(pid, SIGUSR2);
			if (error_check == -1)
				exit(1);
			usleep(100);
			i++;
		}
		message++;
	}
	ft_putchar_fd('\n', 1);
}

int	main(int argc, char *argv[])
{
	int		pid;
	char	*message;

	if (argc != 3)
	{
		ft_putstr_fd("The number of argc is not correct!\nTry again!!\n", 1);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	chartobit(pid, message);
	return (0);
}
