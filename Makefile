NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP
SRCS = srcs
INCLUDES = includes

SRC_MANDATORY = $(SRCS)/push_swap.c \
				$(SRCS)/parser.c \
				$(SRCS)/

INC_MANDATORY = $(INCLUDES)/ \
				$(INCLUDES)/ \
				$(INCLUDES)/

OBJ_FILES = $(patsubst $(SRCS)/%.c, $(OBJ_DIR)/%.o, $(SRC_MANDATORY))
DEPS_FILES = $(OBJ_FILES:.o=.d)

all: $(NAME)

$(OBJ_DIR)/%.o : $(SRCS)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

-include $(DEPS_FILES)

$(NAME): $(OBJ_FILES)
	ar crs $(NAME) $(OBJ_FILES)

re: fclean $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

.PHONY: all clean fclean re