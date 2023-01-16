/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:04 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 16:21:00 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args_nb(int i_stack_a)
{
	if (i_stack_a == 1)
		return (1);
	if (i_stack_a == 2)
		return (2);
	return (0);
}

int	check_args_content(char **stack_a)
{
	int	i;
	int	j;

	i = 1;
	while (stack_a[i])
	{
		j = 0;
		while (stack_a[i][j])
		{
			if (stack_a[i][j] < '0' || stack_a[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args_duplicate(char **stack_a)
{
	int	i;
	int	j;

	i = 1;
	while (stack_a[i])
	{
		j = i + 1;
		while (stack_a[j])
		{
			if (ft_strcmp(stack_a[i], stack_a[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args_sorted(int i_stack_a, char **stack_a)
{
	int	i;

	i = 1;
	while (i < i_stack_a - 1)
	{
		if (ft_atoi(stack_a[i]) > ft_atoi(stack_a[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	check_args(int i_stack_a, char **stack_a)
{
	if (check_args_nb(i_stack_a) == 1)
		return (1);
	if (check_args_nb(i_stack_a) == 2)
		return (write(1, "Error\n", 6), 1);
	if (check_args_content(stack_a) == 1)
		return (write(1, "Error\n", 6), 1);
	if (check_args_duplicate(stack_a) == 1)
		return (write(1, "Error\n", 6), 1);
	if (check_args_sorted(i_stack_a, stack_a) == 1)
		return (1);
	else
		return (0);
}
