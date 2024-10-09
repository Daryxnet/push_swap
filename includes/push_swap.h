/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:07:23 by dagarmil          #+#    #+#             */
/*   Updated: 2024/10/09 16:26:16 by dagarmil         ###   ########.fr       */
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

// Operaciones básicas de las stack
int	swap(t_stack **stack);
int	sa(t_stack **stack_a);
int	sb(t_stack **stack_b);

// Funciones auxiliares
t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *head);
void	ft_lstadd_back(t_stack **stack, t_stack *new);
int		ft_lstsize(t_stack *head);

#endif

