/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:09:20 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:09:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	t_node	*tmp;
	t_node	*last_node;

	tmp = *stack_a;
	while (tmp->next != NULL)
	{
		last_node = tmp;
		tmp = tmp->next;
	}
	last_node->next = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;
	print_func("rra");
	print_list(*stack_a);
}

void	rb(t_node **stack_b)
{
	t_node	*tmp;
	t_node	*last_node;

	tmp = *stack_b;
	while (tmp->next != NULL)
	{
		last_node = tmp;
		tmp = tmp->next;
	}
	last_node->next = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	print_func("rrb");
	print_list(*stack_b);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	print_func("rr");
}