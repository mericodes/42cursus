NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc

OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o \
ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o \
ft_strchr.o ft_strlen.o ft_strncmp.o ft_strrchr.o \
ft_tolower.o ft_toupper.o

%.o : %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)