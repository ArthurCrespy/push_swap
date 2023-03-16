/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:53:39 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 16:03:41 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lowest_index(t_data *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index < i)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

int	ft_biggest_index(t_data *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index > i)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

void	go_to_b_index(t_data **stack_b, int index)
{
	int		i;
	t_data	*tmp;

	i = 0;
	tmp = *stack_b;
	while (tmp)
	{
		if (tmp->index == index)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i <= (int)ft_nodelen(*stack_b) / 2)
		while (i--)
			rb(stack_b);
	if (i > (int)ft_nodelen(*stack_b) / 2)
		while (i++ < (int)ft_nodelen(*stack_b))
			rrb(stack_b);
}

void	ft_push_sort(t_data **stack_a, t_data **stack_b)
{
	int	i;

	create_index(stack_a);
	create_index(stack_b);
	i = ft_biggest_index(*stack_b);
	while (*stack_b)
	{
		go_to_b_index(stack_b, i);
		if ((*stack_b)->index == i)
		{
			pa(stack_a, stack_b);
			i--;
		}
		create_index(stack_a);
	}
}

void	large_stack_sort(t_data **stack_a, t_data **stack_b, int median)
{
	int	i;
	int	start;
	int	stop;
	int	amount;

	i = 0;
	start = median - ((10 * ft_nodelen(*stack_a) / 100) / 2);
	stop = median + ((10 * ft_nodelen(*stack_a) / 100) / 2);
	amount = (stop - start) + 1;
	create_index(stack_a);
	create_index(stack_b);
	while (i < amount)
	{
		if ((*stack_a)->index >= start && (*stack_a)->index <= stop)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	if ((int)ft_nodelen(*stack_a) >= amount)
		large_stack_sort(stack_a, stack_b, ft_nodelen(*stack_a) / 2);
	else
		ft_push_sort(stack_a, stack_b);
}
