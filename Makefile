NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

CC = cc

RM = rm -f

SRC = ft_printf.c print_address.c print_diu.c printf_utils.c \
	print_cs%.c print_hex.c

OBG = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBG)
	ar rcs $(NAME) $(OBG)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SECONDARY: $(OBG)
