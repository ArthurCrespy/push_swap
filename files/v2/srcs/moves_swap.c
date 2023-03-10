/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:09:36 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:09:38 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_data *stack_a)
{
	int	tmp;

	if (!stack_a || !stack_a->next)
		return ;
	tmp = stack_a->data;
	stack_a->data = stack_a->next->data;
	stack_a->next->data = tmp;
	ft_print_func("sa");
}

void	sb(t_data *stack_b)
{
	int	tmp;

	if (!stack_b || !stack_b->next)
		return ;
	tmp = stack_b->data;
	stack_b->data = stack_b->next->data;
	stack_b->next->data = tmp;
	ft_print_func("sb");
}

void	ss(t_data *stack_a, t_data *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_print_func("ss");
}
