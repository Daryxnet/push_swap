#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
    int             value;
    struct s_stack  *next;
}   t_stack;

// Operaciones
void    sa(t_stack **stack);
void    sb(t_stack **stack);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **stack);
void    rb(t_stack **stack);

// Utilidades de la pila
t_stack *stack_new(int value);
void    stack_push(t_stack **stack, int value);
int     stack_pop(t_stack **stack);
int     stack_size(t_stack *stack);

#endif

