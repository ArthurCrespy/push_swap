/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:09:03 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:09:09 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack_a)
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
}

void	rrb(t_node **stack_b)
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
}

void	rrr(t_node *stack_a, t_node *stack_b)
{
	rra(&stack_a);
	rrb(&stack_b);
	print_func("rrr");
}

void	double_rra(t_node **stack_a)
{
	rra(stack_a);
	rra(stack_a);
}
