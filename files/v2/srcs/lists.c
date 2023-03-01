/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:04 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 16:21:00 by acrespy          ###   ########.fr       */
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

void	clear_list(t_data *stack_a)
{
	t_data	*tmp;

	while (stack_a != NULL)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
}

t_data  *create_node(int element)
{
	t_data *new;

	new = (t_data*)malloc(sizeof(t_data));
	if (!new)
		return (NULL);
	new->data = element;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	add_node(t_data **stack, int element)
{
	t_data *new;
	t_data *tmp;

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

void    add_node_first(t_data **stack, int element)
{
	t_data *new;

	new = create_node(element);
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

void    remove_node(t_data **stack)
{
	t_data *tmp;

	if (*stack == NULL)
		return ;
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return ;
	}
	tmp = *stack;
	*stack = tmp->next;
	free(tmp);
}



void    create_stack(t_data **stack_a, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		add_node(stack_a, ft_atoi(argv[i]));
		i++;
	}
}

void	print_list(t_data *stack_a, t_data *stack_b)
{
	printf("\n");
	printf("data:     index:    | data:     index:    \n");
	printf("--------- --------- | --------- --------- \n");
	while (stack_a != NULL || stack_b != NULL)
	{
		if (stack_a != NULL)
		{
			printf("%d         %d         |", stack_a->data, stack_a->index);
			stack_a = stack_a->next;
		}
		else
			printf("                    |");
		if (stack_b != NULL)
		{
			printf(" %d           %d\n", stack_b->data, stack_b->index);
			stack_b = stack_b->next;
		}
		else
			printf("\n");
	}
	printf("--------- --------- | --------- --------- \n");
	printf("stack_a: %zu          | stack_b: %zu        \n", ft_nodelen(stack_a), ft_nodelen(stack_b));

}