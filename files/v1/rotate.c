/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:02:16 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:09:24 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(char **stack_a) //Shift up all elements of stack a by 1. The first element becomes the last one.
{
	(void)stack_a;
}

void	rb(char **stack_b)
{
	int		i;
	char	*tmp;

	i = 0;
	while (stack_b[i])
		i++;
	tmp = stack_b[i - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = tmp;
}

void	rr(char **stack_a, char **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
