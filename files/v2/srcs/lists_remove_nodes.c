/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_remove_nodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:06:56 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 16:06:56 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	remove_node(t_data **stack)
{
	t_data	*tmp;

	if (*stack == NULL)
		return ;
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return ;
	}
	tmp = *stack;
	*stack = tmp->next;
	free(tmp);
}

void	clear_list(t_data *stack_a, t_data *stack_b)
{
	t_data	*tmp;

	while (stack_a)
	{
		tmp = stack_a->next;
		free(stack_a);
		stack_a = tmp;
	}
	while (stack_b)
	{
		tmp = stack_b->next;
		free(stack_b);
		stack_b = tmp;
	}
}
