NAME = push_swap
cc = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -I /libft/ft_printf/include -I /libft/gnl/include -I /libft/Libft/include
RM = rm -f
SRC = ft_push_swap.c ft_operations1.c ft_operations2.c ft_operations3.c ft_sort2_3.c ft_sort10.c ft_sort100.c ft_sort500.c ft_utils.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_parse.c

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

SRC_DIR = ./src/
OBJ_DIR = ./obj/

OBJ_FILES = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
all: $(OBJ_DIR) $(NAME)

$(LIBFT): $(LIBFT_DIR)
	@make -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJ)
	make clean -C libft
	rm -rf $(OBJ_DIR)
fclean: clean
	$(RM) $(NAME)
	make fclean -C libft
	rm -rf $(OBJ_DIR)
re:		fclean all

.PHONY:	all clean fclean re