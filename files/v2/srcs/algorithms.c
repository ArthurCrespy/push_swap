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

#include "../includes/push_swap.h"

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

int find_median(t_node *stack_a, t_node *stack_b, int len)
{
	t_node *temp;
	int median;
	int i;
	int j;

	temp = stack_a;
	median = temp->data;
	i = 0;
	while (i < len / 2)
	{
		j = 0;
		temp = stack_a;
		while (j < len)
		{
			if (temp->data < median)
			{
				pb(&stack_a, &stack_b);
				len--;
			}
			else
			{
				ra(&stack_a);
				j++;
			}
		}
		median = stack_b->data;
		pb(&stack_b, &stack_a);
		len = len / 2;
		i++;
	}
	return (median);
}


void medium_stack_sort(t_node **stack_a, t_node **stack_b, int len)
{
	int median;
	int i;
	int count;

	if (len <= 1)
		return ;
	median = find_median(*stack_a, *stack_b ,len);
	count = 0;
	i = 0;
	while (count < len)
	{
		if ((*stack_a)->data < median)
		{
			pb(stack_a, stack_b);
			len--;
		}
		else
		{
			ra(stack_a);
			i++;
			count++;
		}
	}
	medium_stack_sort(stack_b, stack_a, len / 2);
	medium_stack_sort(stack_a, stack_b, i);
	while (i-- > len / 2)
		rr(stack_a, stack_b);
}




