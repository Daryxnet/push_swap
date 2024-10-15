/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:07:23 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/15 12:40:27 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../Libft/includes/libft.h"
# include "../Libft/includes/get_next_line.h"
# include "../Libft/includes/ft_printf.h"

typedef struct	s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

// Declaraciones de funciones
void    print_stacks(t_stack *stack_a, t_stack *stacck_b);
void	ft_check_args(int argc, char **argv);
void	index_stack(t_stack **stack);
int		is_in_order(t_stack **stack);
void	ft_free(char **str);
void	free_stack(t_stack **stack);
void	sort_small_stack(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
int		get_distance(t_stack **stack, int index);

// Operaciones básicas de las stack
int	swap(t_stack **stack);
int	sa(t_stack **stack_a);
int	sb(t_stack **stack_b);
int	ss(t_stack **stack_a, t_stack **stack_b);
int	push(t_stack **stack_to, t_stack **stack_from);
int	pa(t_stack **stack_a, t_stack **stack_b);
int	pb(t_stack **stack_a, t_stack **stack_b);
int	rotate(t_stack **stack);
int	ra(t_stack **stack_a);
int	rb(t_stack **stack_b);
int	rr(t_stack **stack_a, t_stack **stack_b);
int	reverseRotate(t_stack **stack);
int	rra(t_stack **stack_a);
int	rrb(t_stack **stack_b);
int	rrr(t_stack **stack_a, t_stack **stack_b);

// Funciones auxiliares
t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *head);
void	ft_lstadd_back(t_stack **stack, t_stack *new);
int		ft_lstsize(t_stack *head);

#endif

