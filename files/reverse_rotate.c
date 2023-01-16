/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:02:11 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:09:56 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(char **stack_a)
{
	int		i;
	char	*tmp;

	i = 0;
	while (stack_a[i])
		i++;
	tmp = stack_a[0];
	while (i > 0)
	{
		stack_a[i - 1] = stack_a[i];
		i--;
	}
	stack_a[i] = tmp;
}

void	rrb(char **stack_b)
{
	int		i;
	char	*tmp;

	i = 0;
	while (stack_b[i])
		i++;
	tmp = stack_b[0];
	while (i > 0)
	{
		stack_b[i - 1] = stack_b[i];
		i--;
	}
	stack_b[i] = tmp;
}

void	rrr(char **stack_a, char **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
