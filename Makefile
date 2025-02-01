
NAME = push_swap

SRCS =	ft_controls.c main.c controls1.c \
		utils/listfnc.c \
		ops/op0.c \
		ops/op1.c \
		ops/op2.c \
		ops/op3.c \
		utils/minisort.c \
		utils/ft_sort.c \

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror


all: $(LIBFT) $(NAME)


$(LIBFT):
	make -C $(LIBFT_DIR)


$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
