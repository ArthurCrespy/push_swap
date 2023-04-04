/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:04 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 15:57:59 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_nodelen(t_data *stack)
{
	size_t	i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	check_list_duplicate(t_data *stack)
{
	t_data	*tmp;
	t_data	*tmp2;

	tmp = stack;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp->data == tmp2->data)
				return (write(1, "Error\n", 6), 1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	create_index(t_data **stack_a)
{
	t_data	*tmp;
	t_data	*tmp2;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		tmp2 = *stack_a;
		while (tmp2 != NULL)
		{
			if (tmp->data > tmp2->data)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		i = 0;
		tmp = tmp->next;
	}
}
