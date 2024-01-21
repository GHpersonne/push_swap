BLUE = $(shell tput -Txterm setaf 4)
GREEN = $(shell tput -Txterm setaf 2)
RED = $(shell tput -Txterm setaf 1)
BOLD = $(shell tput bold)
ITALIC = $(shell tput sitm)
RESET = $(shell tput -Txterm sgr0)

NAME = push_swap
LIBFT = Libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
SRC_DIR = srcs
OBJ_DIR = .obj
INCLUDES_DIR = includes

SRC_FILES = push_swap.c \
			add_to_stack_a.c \
			check_errors.c \
			ft_error.c \
			free_stack.c \
			ft_swap.c \
			ft_push.c \
			ft_rotate.c \
			ft_reverse_rotate.c \
			ft_is_sort.c \
			ft_min_max.c \
			ft_sort.c \
			index.c \
			specific_sorting.c \
			moves_pa.c \
			moves_pb.c \
			cheapest_move.c \
			rotate_and_push.c

#SRC_FILES_BONUS = checker.c

INC_FILES = push_swap.h \

OBJ_FILES = $(SRC_FILES:.c=.o)

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))
HEADERS = $(addprefix $(INCLUDES_DIR)/, $(INC_FILES))
#SRCS_BONUS = $(addprefix $(SRC_DIR)/, $(SRC_FILES_BONUS))
#OBJS_BONUS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES_BONUS:.c=.o))

all: $(LIBFT) $(NAME) #checker

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)
	@echo "$(BOLD)$(GREEN)✅ Executable $(NAME) created successfully$(RESET)"

$(LIBFT):
	@make bonus -C ./Libft -s
	@echo "$(BOLD)$(GREEN)✅ Libft library created successfully$(RESET)"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p .obj
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@
	@echo "$(ITALIC)$(BLUE)Compiled $< successfully$(RESET)"

#bonus: $(OBJS_BONUS) $(HEADERS)
#	@$(CC) $(CFLAGS) -o checker $(OBJS_BONUS) $(LIBFT)
#	@echo "$(BOLD)$(GREEN)✅ Executable checker created successfully$(RESET)"

#$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADERS)
#	@mkdir -p .obj
#	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@
#	@echo "$(ITALIC)$(BLUE)Compiled $< successfully$(RESET)"

re: fclean all

fclean: clean
	@rm -f $(NAME) $(LIBFT) checker
	@echo "$(BOLD)$(RED)❌ Removed $(NAME) and libft.a$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@make clean -C ./Libft -s
	@echo "$(BOLD)$(RED)❌ Removed $(OBJ_DIR)$(RESET)"

.PHONY: all clean fclean re $(LIBFT) bonus