/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sanitize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:14:22 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/17 15:14:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sanitize_content_stack(char **stack_a)
{
	int	i;

	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
}

void    sanitize_i_stack(int i_stack_a)
{
	i_stack_a--;
}

void    sanitize_stack(int i_stack_a, char **stack_a)
{
	sanitize_content_stack(stack_a);
	sanitize_i_stack(i_stack_a);
}