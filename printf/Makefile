NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC =	ft_printf.c \
		ft_print_str.c \
		ft_print_i_d_u.c \
		ft_print_hexa.c \
		ft_print_hexaup.c \
		ft_print_ptr.c \
		ft_print_c.c \

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
