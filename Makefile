# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 11:09:59 by dagarmil          #+#    #+#              #
#    Updated: 2024/10/15 12:11:48 by dagarmil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = srcs/main.c srcs/op_push.c srcs/op_reverse_r.c srcs/op_rotate.c \
       srcs/op_swap.c srcs/stack_utils.c srcs/ft_check_args.c \
	   srcs/ft_index.c srcs/ft_extras.c srcs/radix_sort.c \
	   srcs/sort_small_stack.c
LIBFT_DIR = Libft
LIBFT_LIB = Libft/Libftnew.a
LIBFT_H = Libft/includes/
PUSH_H = push_swap.a
OBJS = $(SRCS:.c=.o)
AR = ar rcs

all: $(NAME)

$(PUSH_H): $(LIBFT_DIR)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_LIB) .
	mv Libftnew.a push_swap.a

$(NAME): $(OBJS) $(PUSH_H) Makefile 
	$(AR) $(PUSH_H) $(OBJS)
	$(CC) $(CFLAGS) $(PUSH_H) -o $(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) push_swap.a

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

