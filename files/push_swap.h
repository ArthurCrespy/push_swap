/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 14:18:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Arthur on 13/01/2023.
//

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>

int push_swap(int argc, char **argv);

int check_args(int i_stack_a, char **stack_a);

int	ft_strlen(const char *str);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_atoi(const char *str);
#endif
