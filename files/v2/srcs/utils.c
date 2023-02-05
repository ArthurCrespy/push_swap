/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:18:00 by acrespy           #+#    #+#             */
/*   Updated: 2023/01/16 20:08:20 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rra_sa(t_node **stack_a)
{
	rra(stack_a);
	sa(*stack_a);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0x00)
		i++;
	return (i);
}

size_t	ft_nodelen(t_node *stack)
{
	size_t		i;
	t_node	*temp;

	i = 1;
	temp = stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	clear_list(t_node *stack_a)
{
	t_node	*tmp;

	while (stack_a != NULL)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
}

void	add_node(t_node **stack_a, int element)
{
	t_node	*ptr;

	ptr = malloc(sizeof(struct Node));
	if (!ptr)
		clear_list(*stack_a);
	ptr->data = element;
	ptr->next = *stack_a;
	*stack_a = ptr;
}

void	print_list(t_node *stack)
{
	while (stack != NULL)
	{
		printf("%d ", stack->data);
		stack = stack->next;
	}
	printf("\n");

}

void	print_func(char *str)
{
	static int	i = 0;

	if (i != 0)
		write(1, "\n", 1);
	else if (i == 0)
		i++;
	write(1, str, ft_strlen(str));

}

int	ft_isspace(const char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	if ((size != 0 && nmemb != 0) && ((nmemb * size) / size != nmemb))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	while (i < nmemb * size)
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}

long	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += (str[i++] - '0');
	}
	return (result *= sign);
}