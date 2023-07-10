NAME = libft.a

SRCS_MAND	=	ft_atoi.c		\
				ft_bzero.c		\
				ft_calloc.c		\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c		\
				ft_strchr.c		\
				ft_strdup.c		\
				ft_strjoin.c	\
				ft_strlcat.c	\
				ft_strlcpy.c	\
		  		ft_strlen.c		\
		  		ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_substr.c		\
		  		ft_tolower.c	\
		  		ft_toupper.c	\

OBJS_MAND	= ${SRCS_MAND:.c=.o}

CC		= cc

CFLAGS 	= -Wall -Werror -Wextra

RM		= rm -rf

AR		= ar rcs

all	:	$(NAME)
		@echo Compiling mandatory part of "libft.a": $@ ...

$(NAME)	:	$(OBJS_MAND)
		@echo Compiling library file: $@ ...
		$(AR) $(NAME) $(OBJS_MAND)

%.o:	%.c
		@echo Compiling files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ 

clean	:	
		@echo Cleaning object files: $@ ...
		$(RM) ${OBJS_MAND}


fclean	:	clean
		@echo Cleaning object files and libft.a:
		$(RM) $(NAME)

re	:	fclean all
		@echo Cleaning object files and libft.a and remake everything: