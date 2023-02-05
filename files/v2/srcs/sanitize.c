/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sanitize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:14:22 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:02:35 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int		sanitize_i_stack(int i_stack_a)
{
	return (i_stack_a - 2);
}

int		sanitize_stack(int i_stack_a, char **stack_a)
{
	sanitize_content_stack(stack_a);
	return (sanitize_i_stack(i_stack_a));
}
