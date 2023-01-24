/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:10:57 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

// push_swap.c
int			push_swap(int argc, char **argv);

// errors.c
int			check_args(int i_stack_a, char **stack_a);

// utils.c
int			ft_strcmp(const char *s1, const char *s2);
long		ft_atoi(const char *str);
char		*ft_calloc(size_t nmemb, size_t size);

// sort.c
void		sort_stack(int i_stack_a, char **stack_a);

// sanitize.c
void		sanitize_stack(int i_stack_a, char **stack_a);

// swap.c
void		sa(char **stack_a);
void		sb(char **stack_b);
void		ss(char **stack_a, char **stack_b);

// push.c
void		pa(char **stack_a, char **stack_b);
void		pb(char **stack_a, char **stack_b);

// rotate.c
void		ra(char **stack_a);
void		rb(char **stack_b);
void		rr(char **stack_a, char **stack_b);

// reverse_rotate.c
void		rra(char **stack_a);
void		rrb(char **stack_b);
void		rrr(char **stack_a, char **stack_b);

#endif
