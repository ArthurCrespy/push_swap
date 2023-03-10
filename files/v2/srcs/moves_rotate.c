/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:09:20 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/24 19:09:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_data **stack_a)
{
	t_data	*tmp;
	t_data	*tmp2;

	tmp = *stack_a;
	tmp2 = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
	*stack_a = tmp2->next;
	tmp2->next = NULL;
	ft_print_func("ra");
}

void	rb(t_data **stack_b)
{
	t_data	*tmp;
	t_data	*tmp2;

	tmp = *stack_b;
	tmp2 = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
	*stack_b = tmp2->next;
	tmp2->next = NULL;
	ft_print_func("rb");
}
