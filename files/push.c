/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:01:41 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:06:59 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(char **stack_a, char **stack_b)
{
	int	i;

	i = 0;
	while (stack_a[i])
		i++;
	stack_a[i] = stack_b[0];
	i = 0;
	while (stack_b[i])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
}

void	pb(char **stack_a, char **stack_b)
{
	int	i;

	i = 0;
	while (stack_b[i])
		i++;
	stack_b[i] = stack_a[0];
	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
}
