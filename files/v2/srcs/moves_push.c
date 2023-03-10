/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:08:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:10:20 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_data **stack_a, t_data **stack_b)
{
	if (!*stack_b)
		return ;
	if (*stack_a == NULL)
		add_node(stack_a, (*stack_b)->data);
	else
		add_node_first(stack_a, (*stack_b)->data);
	remove_node(stack_b);
	ft_print_func("pa");
}

void	pb(t_data **stack_a, t_data **stack_b)
{
	if (!*stack_a)
		return ;
	if (*stack_b == NULL)
		add_node(stack_b, (*stack_a)->data);
	else
		add_node_first(stack_b, (*stack_a)->data);
	remove_node(stack_a);
	ft_print_func("pb");
}
