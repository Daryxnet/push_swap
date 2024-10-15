/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:09:02 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/09 16:34:33 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_stacks(t_stack *stack_a, t_stack *stack_b) {
    printf("Stack A: ");
    while (stack_a) {
        printf("%d ", stack_a->value);
        stack_a = stack_a->next;
    }
    printf("\nStack B: ");
    while (stack_b) {
        printf("%d ", stack_b->value);
        stack_b = stack_b->next;
    }
    printf("\n");
}

int main() {
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;

    // Inicializar stacks A y B
    ft_lstadd_back(&stack_a, ft_lstnew(2));
    ft_lstadd_back(&stack_a, ft_lstnew(1));
    ft_lstadd_back(&stack_a, ft_lstnew(3));
    ft_lstadd_back(&stack_a, ft_lstnew(6));
    ft_lstadd_back(&stack_a, ft_lstnew(5));
    ft_lstadd_back(&stack_a, ft_lstnew(8));

    printf("Init a and b:\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar sa
    sa(&stack_a);
    printf("Exec sa:\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar pb pb pb
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    printf("Exec pb pb pb:\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar ra rb (equiv. to rr)
    ra(&stack_a);
    rb(&stack_b);
    printf("Exec ra rb (equiv. to rr):\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar rra rrb (equiv. to rrr)
    rra(&stack_a);
    rrb(&stack_b);
    printf("Exec rra rrb (equiv. to rrr):\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar sa
    sa(&stack_a);
    printf("Exec sa:\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Ejecutar pa pa pa
    pa(&stack_a, &stack_b);
    pa(&stack_a, &stack_b);
    pa(&stack_a, &stack_b);
    printf("Exec pa pa pa:\n");
    print_stacks(stack_a, stack_b);
    printf("----------------------------------------------------------------------------------------------------------\n");

    // Liberar memoria
    while (stack_a) {
        t_stack *temp = stack_a;
        stack_a = stack_a->next;
        free(temp);
    }
    while (stack_b) {
        t_stack *temp = stack_b;
        stack_b = stack_b->next;
        free(temp);
    }

    return 0;
}
/*
// Función para imprimir los valores de una pila (para verificar el contenido)
void	print_stack(t_stack *stack)
{
	t_stack *current = stack;
	while (current)
	{
		ft_printf("%d ", current->value);
		current = current->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;
	int i = 1;

	// Crear el stack_a desde los argumentos
	while (i < argc)
	{
		int value = atoi(argv[i]);  // Convertir argumento a entero
		t_stack *new_node = ft_lstnew(value);
		ft_lstadd_back(&stack_a, new_node);
		i++;
	}

	// Imprimir el stack inicial
	ft_printf("Stack A: ");
	print_stack(stack_a);

	// Aplicar algunas operaciones
	sa(&stack_a);  // Swap los dos primeros elementos de stack_a
	ft_printf("Después de sa: ");
	print_stack(stack_a);

	sb(&stack_b);  // Swap no tendrá efecto porque stack_b está vacío
	ft_printf("Stack B (sin cambios): ");
	print_stack(stack_b);

	push(&stack_b, &stack_a); // Mueve el primer elemento de stack_a a stack_b
	ft_printf("Stack A después de pb: ");
	print_stack(stack_a);
	ft_printf("Stack B después de pb: ");
	print_stack(stack_b);

	// Limpiar memoria (opcional, depende de tu implementación de free)
	// Aquí podrías liberar la memoria de tus stacks si lo deseas

	return 0;
}*/
