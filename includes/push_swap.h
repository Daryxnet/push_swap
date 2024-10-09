/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:07:23 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/09 10:36:17 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../Libft/includes/libft.h"
# include "../Libft/includes/get_next_line.h"
# include "../Libft/includes/ft_printf.h"

// Definir la estructura para una pila (stack)
typedef struct s_stack
{
    int             value;    // El valor que contiene el nodo
    struct s_stack  *next;    // Puntero al siguiente nodo en la pila
}   t_stack;

// Declaraciones de funciones

// Operaciones básicas de las pilas
void    sa(t_stack **stack);  // Intercambia los dos primeros elementos de la pila
void    pb(t_stack **a, t_stack **b);  // Mueve el primer elemento de `a` a `b`
void    ra(t_stack **stack);  // Rota la pila

// Funciones auxiliares
t_stack *stack_new(int value);    // Crea un nuevo nodo de pila
void    stack_push(t_stack **stack, int value);  // Añade un valor a la pila
int     stack_pop(t_stack **stack);  // Elimina y devuelve el primer elemento de la pila

#endif

