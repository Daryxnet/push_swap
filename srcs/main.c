#include "push_swap.h"
#include <stdio.h>  // Solo para pruebas, para imprimir la pila

// Función auxiliar para imprimir el estado de la pila (debugging)
void print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("%d\n", stack->value);
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
    printf("Pila A inicial:\n");
    print_stack(stack_a);

    sa(&stack_a);  // Ejemplo: intercambiar los dos primeros elementos
    pb(&stack_a, &stack_b);  // Mover de A a B
    ra(&stack_a);  // Rotar pila A

    printf("\nPila A después de las operaciones:\n");
    print_stack(stack_a);
    printf("\nPila B:\n");
    print_stack(stack_b);

    return (0);
}

