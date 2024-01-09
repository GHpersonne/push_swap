NAME = push_swap
LIBFT = Libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP
SRC_DIR = srcs
OBJ_DIR = .obj
INCLUDES_DIR = includes

SRC_FILES = push_swap.c \
			add_to_stack_a.c \
			check_errors.c \
			ft_error.c \
			free_stack.c \
			ft_push.c \
			ft_swap.c \
			ft_rotate.c \
			ft_reverse_rotate.c \
			ft_is_sort.c \
			ft_min_max.c \
			ft_sort.c

INC_FILES = push_swap.h \

OBJ_FILES = $(SRC_FILES:.c=.o)

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))
HEADERS = $(addprefix $(INCLUDES_DIR)/, $(INC_FILES))

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make bonus -C ./Libft

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p .obj
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

re: fclean all

fclean: clean
	rm -f $(NAME) $(LIBFT)

clean:
	rm -rf $(OBJ_DIR)
	make clean -C ./Libft

.PHONY: all clean fclean re $(LIBFT)