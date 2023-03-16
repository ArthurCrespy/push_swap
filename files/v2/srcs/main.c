/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:17:56 by acrespy           #+#    #+#             */
/*   Updated: 2023/03/10 16:01:56 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_args(argc, argv))
		return (1);
	create_stack(&stack_a, argc, argv);
	if (ft_nodelen(stack_a) == 3)
		little_stack_sort(&stack_a);
	else if (ft_nodelen(stack_a) == 5)
		medium_stack_sort(&stack_a, &stack_b);
	else
		large_stack_sort(&stack_a, &stack_b, ft_nodelen(stack_a) / 2);
	write(1, "\n", 1);
	clear_list(stack_a, stack_b);
	return (0);
}
