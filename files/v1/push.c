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
	int		i;
	int		i2;
	char	*tmp;

	i = 0;
	i2 = 0;
	tmp = (char*)malloc(sizeof(char) * 12);
	while (stack_b[i])
		i++;
	while (stack_a[i2])
		i2++;
	if (i == 0)
		return ;
	i2--;
	while (i2 >= 0)
	{
		stack_a[i2 + 1] = stack_a[i2];
		i2--;
	}
	stack_a[0] = stack_b[0];
	i2 = 0;
	while (stack_b[i2 + 1])
	{
		stack_b[i2] = stack_b[i2 + 1];
		i2++;
	}
	stack_b[i2] = NULL;
}

void	pb(char **stack_a, char **stack_b)
{
	int		i;
	int		i2;
	char	*tmp;

	i = 0;
	i2 = 0;
	tmp = (char*)malloc(sizeof(char) * 12);
	while (stack_a[i])
		i++;
	while (stack_b[i2])
		i2++;
	if (i == 0)
		return ;
	i2--;
	while (i2 >= 0)
	{
		stack_b[i2 + 1] = stack_b[i2];
		i2--;
	}
	stack_b[0] = stack_a[0];
	i2 = 0;
	while (stack_a[i2 + 1])
	{
		stack_a[i2] = stack_a[i2 + 1];
		i2++;
	}
	stack_a[i2] = NULL;
}
 