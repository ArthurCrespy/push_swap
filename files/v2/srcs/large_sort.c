/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:53:39 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/01 12:53:39 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_b_sort(t_data **stack_a, t_data **stack_b)
{

}

void	large_stack_sort(t_data **stack_a, t_data **stack_b, int size)
{
	(void)stack_b;
	int		i;
	int		median;
	int		start;
	int		stop;
	t_data *tmp;

	i = 0;
	median = size / 2;
	start = median - (10 * median / 100);
	stop = median + (10 * median / 100);
	tmp = *stack_a;
	while (i != start)
	{
		tmp = tmp->next;
		i++;
	}
	while (i != stop)
	{
		pb(stack_a, stack_b);
		i++;
	}
	while (ft_nodelen(*stack_a) > 10)
		large_stack_sort(stack_a, stack_b, ft_nodelen(*stack_a));
}