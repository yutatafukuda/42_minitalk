/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:02:23 by yufukuda          #+#    #+#             */
/*   Updated: 2023/04/29 14:03:38 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include "./libft/libft.h"

void	chartobit(int pid, char *message);
void	sigusr1and2_handler(int signal);
void	bit_to_char(volatile sig_atomic_t	g_flag);

#endif