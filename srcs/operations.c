/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:09:15 by dagarmil          #+#    #+#             */
/*   Updated: 2024/09/23 11:09:17 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Intercambia los dos primeros elementos de la pila
void sa(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if (!*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}

// Mueve el primer elemento de la pila `a` a la pila `b`
void pb(t_stack **a, t_stack **b)
{
    if (*a)
    {
        int value = stack_pop(a);  // Quita el primer elemento de la pila `a`
        stack_push(b, value);      // Lo añade a la pila `b`
    }
}

// Rota los elementos de la pila
void ra(t_stack **stack)
{
    t_stack *first;
    t_stack *last;

    if (!*stack || !(*stack)->next)
        return ;

    first = *stack;
    *stack = first->next;

    last = *stack;
    while (last->next)
        last = last->next;
    
    first->next = NULL;
    last->next = first;
}

