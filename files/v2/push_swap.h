/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:07:08 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct Node {
	int			data;
	struct Node	*next;
}				t_node;

// push_swap.c
int			push_swap(int i_stack_a, char **stack_a);

// algorithms.c
void		little_stack_sort(t_node **stack_a);

// errors.c
int			check_args(int i_stack_a, char **stack_a);

// utils.c
void        rra_sa(t_node **stack_a);
size_t		ft_nodelen(t_node *stack);
void		clear_list(t_node *stack_a);
void		add_node(t_node **stack_a, int element);
void		print_list(t_node *stack);
void		print_func(char *str);
int			ft_strcmp(const char *s1, const char *s2);
long		ft_atoi(const char *str);
char		*ft_calloc(size_t nmemb, size_t size);

// sanitize.c
int			sanitize_stack(int i_stack_a, char **stack_a);

// swap.c
void		sa(t_node *stack_a);
void		sb(t_node *stack_b);
void		ss(t_node *stack_a, t_node *stack_b);

// push.c
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);

// rotate.c
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);

// reverse_rotate.c
void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		double_rra(t_node **stack_a);
void		rrr(t_node *stack_a, t_node *stack_b);

#endif
