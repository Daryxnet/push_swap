/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:09:02 by dagarmil          #+#    #+#             */
/*   Updated: 2024/09/24 12:21:46 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Función auxiliar para imprimir el estado de la pila (debugging)
void print_stack(t_stack *stack)
{
    while (stack)
    {
        ft_printf("%d\n", stack->value);
        stack = stack->next;
    }
}

int main(int argc, char **argv)
{
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;
    int i;

    if (argc < 2)
        return (1);  // Si no hay suficientes argumentos, salir

    // Insertar argumentos en la pila A
    i = 1;
    while (i < argc)
        stack_push(&stack_a, atoi(argv[i++]));

    // Aquí puedes hacer operaciones sobre las pilas
    ft_printf("Pila A inicial:\n");
    print_stack(stack_a);

    sa(&stack_a);  // Ejemplo: intercambiar los dos primeros elementos
    pb(&stack_a, &stack_b);  // Mover de A a B
    ra(&stack_a);  // Rotar pila A

    ft_printf("\nPila A después de las operaciones:\n");
    print_stack(stack_a);
    ft_printf("\nPila B:\n");
    print_stack(stack_b);

    return (0);
}

