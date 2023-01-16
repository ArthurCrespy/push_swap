/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:44 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 17:57:01 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(int i_stack_a, char **stack_a)
{
	(void)i_stack_a;
	sanitize_stack(stack_a);
	sa(stack_a);
	while (*stack_a)
	{
		printf("%s\n", *stack_a);
		stack_a++;
	}
}

void	sanitize_stack(char **stack_a)
{
	int	i;

	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
}
