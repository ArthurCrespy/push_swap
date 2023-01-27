/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@students.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:43:12 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/27 11:43:13 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little_stack_sort(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;

	if (a > b && b > c)
	{
		sa(*stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		double_rra(stack_a);
	else if (a < b && b > c)
		if (a < c)
			rra_sa(stack_a);
		else
			rra(stack_a);
	else if (a < b && b < c)
		rra_sa(stack_a);
	else if (a > b && b < c)
		sa(*stack_a);
}


