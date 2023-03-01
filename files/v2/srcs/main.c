/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:17:56 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:11:34 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    free_stacks(t_data **stack_a, t_data **stack_b)
{
	t_data *tmp;

	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
	while (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		free(tmp);
	}
}

int		main(int argc, char **argv)
{
	t_data *stack_a = NULL;
	t_data *stack_b = NULL;

	if (check_args(argc, argv))
		return (1);
	create_stack(&stack_a, argc, argv);
	if (ft_nodelen(stack_a) == 3)
		little_stack_sort(&stack_a);
	else if (ft_nodelen(stack_a) == 5)
		medium_stack_sort(&stack_a, &stack_b);
	else
		large_stack_sort(&stack_a, &stack_b, ft_nodelen(stack_a));
	write(1, "\n", 1);
	//free_stacks(&stack_a, &stack_b);
	return (0);
}