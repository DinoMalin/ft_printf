NAME	=	libftprintf.a

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft

SRCS = src/ft_printf.c \
	src/utils_char.c \
	src/utils_hexa.c \
	src/utils_nbr.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putchar_fd.c \
	libft/ft_strlen.c \

OBJS = $(SRCS:.c=.o)

all: ${NAME}

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)	
re: fclean ${NAME}

.PHONY: all, clean, fclean, re, libft