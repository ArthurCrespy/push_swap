/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_manage_nodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:59:08 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 15:59:08 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_data	*create_node(int element)
{
	t_data	*new;

	new = (t_data *)malloc(sizeof(t_data));
	if (!new)
		return (NULL);
	new->data = element;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	add_node(t_data **stack, int element)
{
	t_data	*new;
	t_data	*tmp;

	new = create_node(element);
	if (*stack == NULL)
		*stack = new;
	else
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void	add_node_first(t_data **stack, int element)
{
	t_data	*new;

	new = create_node(element);
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

void	create_stack(t_data **stack_a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		add_node(stack_a, ft_atoi(argv[i]));
		i++;
	}
	create_index(stack_a);
}
