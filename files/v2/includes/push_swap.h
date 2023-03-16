/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 16:20:52 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_data {
	int				data;
	int				index;
	struct s_data	*next;
}				t_data;

/* ---------- ERRORS --------- */
int		check_args(int i_stack_a, char **stack_a);

/* -------- LISTS-ADD -------- */
void	add_node(t_data **stack, int element);
void	add_node_first(t_data **stack, int element);
void	create_stack(t_data **stack_a, int argc, char **argv);

/* -------- LISTS-REM -------- */
void	remove_node(t_data **stack);
void	clear_list(t_data *stack_a, t_data *stack_b);

/* ------- LISTS-UTILS ------- */
size_t	ft_nodelen(t_data *stack);
void	create_index(t_data **stack_a);

/* ----------- PUSH ---------- */
void	pa(t_data **stack_a, t_data **stack_b);
void	pb(t_data **stack_a, t_data **stack_b);

/* ---------- ROTATE --------- */
void	ra(t_data **stack_a);
void	rb(t_data **stack_b);
void	rr(t_data **stack_a, t_data **stack_b);

/* ----------- SWAP ---------- */
void	sa(t_data *stack_a);
void	sb(t_data *stack_b);
void	ss(t_data *stack_a, t_data *stack_b);

/* --------- R-ROTATE -------- */
void	rra(t_data **stack_a);
void	rrb(t_data **stack_b);

/* --------- SORT-LA --------- */
void	large_stack_sort(t_data **stack_a, t_data **stack_b, int median);

/* --------- SORT-LI --------- */
void	little_stack_sort(t_data **stack_b);

/* ---------- UTILS ---------- */
void	ft_print_func(char *str);
int		ft_strcmp(const char *s1, const char *s2);
long	ft_atoi(const char *str);

#endif
