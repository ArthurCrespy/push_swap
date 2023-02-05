/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:08:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:10:20 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void pa(t_node **stack_a, t_node **stack_b)
{
	t_node *tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	print_func("pa");
}

void pb(t_node **stack_a, t_node **stack_b)
{
	t_node *tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	print_func("pb");
}
