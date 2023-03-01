/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:04:23 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/01 12:04:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_data **stack_a)
{
	t_data	*tmp;
	t_data	*last_node;

	tmp = *stack_a;
	while (tmp->next != NULL)
	{
		last_node = tmp;
		tmp = tmp->next;
	}
	last_node->next = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;
	free(last_node);
	ft_print_func("rra");
}

void	rrb(t_data **stack_b)
{
	t_data	*tmp;
	t_data	*last_node;

	tmp = *stack_b;
	while (tmp->next != NULL)
	{
		last_node = tmp;
		tmp = tmp->next;
	}
	last_node->next = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_print_func("rrb");
}