/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:09:38 by dagarmil          #+#    #+#             */
/*   Updated: 2024/09/23 11:09:41 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Crea un nuevo nodo con un valor
t_stack *stack_new(int value)
{
    t_stack *new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->value = value;
    new->next = NULL;
    return (new);
}

// Añade un valor al principio de la pila
void stack_push(t_stack **stack, int value)
{
    t_stack *new = stack_new(value);
    if (new)
    {
        new->next = *stack;
        *stack = new;
    }
}

// Quita y devuelve el primer elemento de la pila
int stack_pop(t_stack **stack)
{
    int     value;
    t_stack *temp;

    if (!*stack)
        return (-1);  // Si la pila está vacía, retorna -1
    temp = *stack;
    value = temp->value;
    *stack = temp->next;
    free(temp);
    return (value);
}
