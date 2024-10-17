/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sort_extras.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:20:02 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/17 12:59:36 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	cond_sort3(t_stack *head, int min, int next_min, t_stack **stack_a)
{
	if (head->index == min && head->next->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (head->next->index == min)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}
