CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

NAME = libftprintf.a
SRCS = ft_printf.c \
		taille.c \
		ft_csdiu.c \
		ft_pxX.c

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf  $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
