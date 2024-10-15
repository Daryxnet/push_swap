/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extras.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:29:22 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/15 12:42:18 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	is_in_order(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

int	get_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

void	make_top(t_stack **stack, int distance)
{
	t_stack	*head;
	int		tmp;

	if (distance == 0)
		return ;
	head = *stack;
	tmp = ft_lstsize(head) - distance;
	if (distance <= (ft_lstsize(head) / 2))
	{
		while (distance-- > 0)
			ra(stack);
	}
	else
	{
		while (tmp-- > 0)
			rra(stack);
	}
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
}

void print_stacks(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *current_a = stack_a;
    t_stack *current_b = stack_b;

    printf("Stack A:\n");
    while (current_a)
    {
        printf("%d\n", current_a->value); // Asumiendo que el valor es un entero.
        current_a = current_a->next;
    }

    printf("Stack B:\n");
    while (current_b)
    {
        printf("%d\n", current_b->value); // Asumiendo que el valor es un entero.
        current_b = current_b->next;
    }
}
