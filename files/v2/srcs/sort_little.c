/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:19:40 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 16:04:31 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra_sa(t_data **stack_a)
{
	rra(stack_a);
	sa(*stack_a);
}

void	little_stack_sort(t_data **stack_a)
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
		ra(stack_a);
	else if (a < b && b > c)
	{
		if (a < c)
			rra_sa(stack_a);
		else
			rra(stack_a);
	}
	else if (a < b && b < c)
		rra_sa(stack_a);
	else if (a > b && b < c)
		sa(*stack_a);
}
