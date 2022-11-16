SRCS = ft_memset.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putendl_fd.c \
	ft_strrchr.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_putstr_fd.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_split.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_isdigit.c \
	ft_strdup.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strlcpy.c \

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

NAME = libft.a


all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs libft.a $(OBJS)

clean : 
	rm -f *.o


