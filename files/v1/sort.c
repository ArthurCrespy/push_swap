/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:44 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 17:57:01 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stacks(char **stack_a, char **stack_b)
{
	printf("stack_a:\n");
	while (*stack_a)
	{
		printf("%s\n", *stack_a);
		stack_a++;
	}
	printf("stack_b:\n");
	while (*stack_b)
	{
		printf("%s\n", *stack_b);
		stack_b++;
	}
	printf("----\n");
}

void    free_stack(char **stack)
{
	free(stack[0]);
	free(*stack);
}

void little_stack_sort(int i_stack_a, char **stack_a, char **stack_b)
{
	(void)stack_b;
	if (i_stack_a == 2) {
		if (ft_atoi(stack_a[0]) > ft_atoi(stack_a[1]))
			sa(stack_a);
	}
	else if (i_stack_a == 3) {
		int a = ft_atoi(stack_a[0]), b = ft_atoi(stack_a[1]), c = ft_atoi(stack_a[2]);
		if (a > b) {
			sa(stack_a);
			if (b > c)
				sa(stack_a);
		} else {
			if (a > c)
				sa(stack_a);
			if (b > c)
				ra(stack_a);
		}
	}
}



void	sort_stack(int i_stack_a, char **stack_a)
{
	(void) i_stack_a;
	//int i = 0;
	char **stack_b;

	//stack_b = ft_calloc(sizeof(char *), i_stack_a);
	//*stack_b[0] = *ft_calloc(sizeof(char *), i_stack_a);

	stack_b = (char **) ft_calloc(5, sizeof(char *));
	stack_b[0] = (char *) ft_calloc(10, sizeof(char));
	//for(i = 0; i < i_stack_a; i++)
	//(stack_b)[i] = ((*stack_b) + (i * i_stack_a) );

	sanitize_stack(i_stack_a, stack_a);
	sanitize_stack(0, stack_b);
	print_stacks(stack_a, stack_b);
	ra(stack_a);
	print_stacks(stack_a, stack_b);

	//free(stack_a[1]);
	//free(stack_b[0]);

	free(stack_b);
	//free_stacks(stack_a ,stack_b);
}
