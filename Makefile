NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = srcs/main.c srcs/operations.c srcs/stack_utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

