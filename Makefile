NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRCS = ft_strncat.c \
       ft_strnstr.c \
       ft_isdigit.c \
       ft_putstr_fd.c \
       ft_strequ.c \
       ft_strlen.c \
       ft_memcmp.c \
       ft_putnbr.c \
       ft_strclr.c \
       ft_strsplit.c \
       ft_putnbr_fd.c \
       ft_strchr.c \
       ft_striteri.c \
       ft_bzero.c \
       ft_strjoin.c \
       ft_isascii.c \
       ft_memcpy.c \
       ft_strstr.c \
       ft_memalloc.c \
       ft_putendl.c \
       ft_memccpy.c \
       ft_strcat.c \
       ft_isprint.c \
       ft_putendl_fd.c \
       ft_strdel.c \
       ft_strnequ.c \
       ft_toupper.c \
       ft_putchar.c \
       ft_strrchr.c \
       ft_isalpha.c \
       ft_memchr.c \
       ft_strmap.c \
       ft_putchar_fd.c \
       ft_memset.c \
       ft_strncmp.c \
       ft_strcpy.c \
       ft_strmapi.c \
       ft_strtrim.c \
       ft_memdel.c \
       ft_memmove.c \
       ft_strnew.c \
       ft_putstr.c \
       ft_strlcat.c \
       ft_strdup.c \
       ft_atoi.c \
       ft_isalnum.c \
       ft_itoa.c \
       ft_striter.c \
       ft_strsub.c \
       ft_strncpy.c \
       ft_tolower.c \
       ft_strcmp.c \
       ft_lstnew.c \
       ft_lstdelone.c \
       ft_lstdel.c \
       ft_lstadd.c \
       ft_lstiter.c \
       ft_lstmap.c \
       ft_concat_params.c \
       ft_isspace.c \
	   ft_lenbeforec.c \
	   ft_ismaj.c \
	   ft_isminu.c \
	   ft_strspn.c \
	   ft_strcspn.c \
	   ft_swap.c \
	   ft_strcasecmp.c \
	   ft_strncasecmp.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OUT)
	$(CC) $(FLAGS) -I $(HEADER) -c $(SRCS)
	ar rc $(NAME) $(OBJ) $(OUT)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
