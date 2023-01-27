/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:04 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:08:46 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little_stack_sort(t_node **stack_a)
{
	int a;
	int b;
	int c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;

	if (a > b && b > c)
	{
		sa(*stack_a);
		rra(stack_a);
	}
	if (a > b && b < c && a > c)
		double_rra(*stack_a);
	if (a < b && b > c)
		rra(stack_a);
	if (a < b && b < c)
	{
		rra(stack_a);
		sa(*stack_a);
	}
	if (a > b && b < c)
		sa(*stack_a);
}

int	push_swap(int i_stack_a, char **c_stack_a)
{
	t_node *stack_a;
	t_node *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_args(i_stack_a, c_stack_a))
		return (1);
	i_stack_a = sanitize_stack(i_stack_a, c_stack_a);
	while (i_stack_a >= 0)
	{
		add_node(&stack_a, ft_atoi(c_stack_a[i_stack_a]));
		i_stack_a--;
	}

	printf("stack_a before: ");
	print_list(stack_a);
	printf("\n");

	ra(&stack_a);

	//little_stack_sort(&stack_a);

	printf("stack_a after: ");
	print_list(stack_a);
	printf("\n");


	//sort_stack(i_stack_a, stack_a);

	clear_list(stack_a);
	clear_list(stack_b);
	return (0);

}