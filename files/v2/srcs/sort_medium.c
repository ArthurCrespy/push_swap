/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:35:36 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/16 11:35:36 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	go_to_a_index(t_data **stack_a, int index)
{
	int		i;
	t_data	*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index == index)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i <= (int)ft_nodelen(*stack_a) / 2)
		while (i--)
			ra(stack_a);
	if (i > (int)ft_nodelen(*stack_a) / 2)
		while (i++ < (int)ft_nodelen(*stack_a))
			rra(stack_a);
}

void	medium_stack_sort(t_data **stack_a, t_data **stack_b)
{
	create_index(stack_a);
	go_to_a_index(stack_a, ft_biggest_index(*stack_a));
	pb(stack_a, stack_b);
	go_to_a_index(stack_a, ft_lowest_index(*stack_a));
	pb(stack_a, stack_b);
	create_index(stack_a);
	if (!check_list_sorted(*stack_a))
		little_stack_sort(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
	free(*stack_b);
}
