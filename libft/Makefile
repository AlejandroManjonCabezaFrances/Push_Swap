LIB = ar rcs
NAME = libft.a
cc = gcc
CFLAGS = -Wall -Wextra -Werror -I ./include -I ./ft_printf/include -I ./gnl/include 
RM = rm -f 

LIBFT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c ft_memcpy.c ft_memmove.c\
ft_bzero.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_strjoin.c ft_strmapi.c ft_striteri.c ft_putnbr_fd.c ft_substr.c ft_strtrim.c\
ft_itoa.c ft_split.c
FT_PRINTF = ft_hexad_len.c ft_itoa_unsg.c ft_itoa.c ft_print_hexad_x.c ft_print_pointer.c ft_printf.c ft_putchar.c ft_putstr.c ft_putstr_free.c
GNL =  get_next_line.c get_next_line_utils_bonus.c get_next_line_utils.c get_next_line_bonus.c

SRC1_DIR	=	./libft/src/
SRC2_DIR	=	./ft_printf/src/
SRC3_DIR	=	./gnl/src/

SRC1	=	$(addprefix $(SRC1_DIR), $(LIBFT))
SRC2	=	$(addprefix $(SRC2_DIR), $(FT_PRINTF))
SRC3	=	$(addprefix $(SRC3_DIR), $(GNL))

OBJ_DIR	=	./obj/
OBJ_FILES	=	$(LIBFT:.c=.o) $(FT_PRINTF:.c=.o) $(GNL:.c=.o)
OBJ	=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC1_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(OBJ_DIR)%.o:$(SRC2_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(OBJ_DIR)%.o:$(SRC3_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@


$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
fclean: clean
	$(RM) $(NAME)
	@rm -rf $(OBJ_DIR)
re:		fclean all

.PHONY:	all clean fclean re