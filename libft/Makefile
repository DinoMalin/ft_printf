NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -c -I
HEADER_FILE = libft.h

SRC = ft_isalpha ft_isdigit ft_isalnum ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_isascii
SRCBONUS = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize ft_lstlast

SRCS = $(addsuffix .c,$(SRC))
OBJ = $(addsuffix .o,$(SRC))

SRCSBONUS = $(addsuffix .c,$(SRCBONUS))
OBJBONUS = $(addsuffix .o,$(SRCBONUS))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OPTION) $(SRCS)
	ar -r $(NAME) $(OBJ) $(HEADER_FILE)

bonus: $(OBJ) $(OBJBONUS)
		ar -r $(NAME) $(OBJ) $(OBJBONUS) $(HEADER_FILE)

clean:
	rm -f $(OBJ) $(OBJBONUS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus