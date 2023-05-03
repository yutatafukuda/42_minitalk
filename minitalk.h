/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:33:51 by yufukuda          #+#    #+#             */
/*   Updated: 2023/04/26 20:52:38 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

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