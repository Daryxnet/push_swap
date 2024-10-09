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


/*int main(int argc, char **argv)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
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
}*/

// Función para imprimir los valores de una pila (para verificar el contenido)
void	print_stack(t_stack *stack, char *stack_name)
{
	ft_printf("Valores en la %s: ", stack_name);
	while (stack)
	{
		ft_printf("%d ", stack->value);
		stack = stack->next;
	}
	ft_printf("\n");
}

int	main(void)
{
	t_stack	*stack_a = NULL;
	t_stack	*stack_b = NULL;
	t_stack	*new_node;

	// Agregamos algunos valores a la pila A
	new_node = ft_lstnew(10);
	ft_lstadd_back(&stack_a, new_node);  // stack_a -> [10]
	new_node = ft_lstnew(20);
	ft_lstadd_back(&stack_a, new_node);  // stack_a -> [10] -> [20]
	new_node = ft_lstnew(30);
	ft_lstadd_back(&stack_a, new_node);  // stack_a -> [10] -> [20] -> [30]

	// Agregamos algunos valores a la pila B
	new_node = ft_lstnew(40);
	ft_lstadd_back(&stack_b, new_node);  // stack_b -> [40]
	new_node = ft_lstnew(50);
	ft_lstadd_back(&stack_b, new_node);  // stack_b -> [40] -> [50]
	new_node = ft_lstnew(60);
	ft_lstadd_back(&stack_b, new_node);  // stack_b -> [40] -> [50] -> [60]

	// Mostramos las pilas antes de realizar los swaps
	print_stack(stack_a, "pila A");  // Debería mostrar: 10 20 30
	print_stack(stack_b, "pila B");  // Debería mostrar: 40 50 60

	// Aplicamos sa (swap en la pila A)
	sa(&stack_a);
	print_stack(stack_a, "pila A después de sa");  // Debería mostrar: 20 10 30

	// Aplicamos sb (swap en la pila B)
	sb(&stack_b);
	print_stack(stack_b, "pila B después de sb");  // Debería mostrar: 50 40 60

	// Aplicamos swap directamente en la pila A nuevamente
	swap(&stack_a);
	print_stack(stack_a, "pila A después de otro swap");  // Debería mostrar: 10 20 30 (restaurado)

	return (0);
}

