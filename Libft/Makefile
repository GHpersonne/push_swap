NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

SRC_MANDATORY = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJ_FILES = $(SRC_MANDATORY:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

DEPS_FILES = $(OBJ_FILES:.o=.d)
DEPS_FILES_BONUS = $(OBJ_BONUS:.o=.d)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS_FILES)

$(NAME): $(OBJ_FILES)
	ar crs $(NAME) $(OBJ_FILES)

re: fclean $(NAME)

bonus:
	$(MAKE) SRC_MANDATORY="$(SRC_MANDATORY) $(SRC_BONUS)"

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_FILES) $(OBJ_BONUS) $(DEPS_FILES) $(DEPS_FILES_BONUS)

.PHONY: all clean fclean re bonus