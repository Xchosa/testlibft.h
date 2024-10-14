cc = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAG = rcs

NAME = libft.a
SRC_DIR = .
INC_DIR = .
CUR_DIR = $(shell pwd)

MY_SOURCES = \
	ft_isascii.c  \
	ft_memset.c    \
	ft_strlcat.c   \
	ft_toupper.c   \
	ft_isdigit.c   \
	ft_putchar_fd.c \
	ft_strlcpy.c    \
	ft_bzero.c      \
	ft_isprint.c    \
	ft_putendl_fd.c \
	ft_strlen.c     \
	ft_calloc.c     \
	ft_itoa.c       \
	ft_putnbr_fd.c  \
	ft_strmapi.c    \
	ft_isalnum.c    \
	ft_memchr.c     \
	ft_putstr_fd.c  \
	ft_strncmp.c    \
	ft_isalpha.c    \
	ft_memcpy.c     \
	ft_strchr.c     \
	ft_strrchr.c    \
	ft_memmove.c    \
	ft_striteri.c   \
	ft_tolower.c
			 \
			main.

My_OBJECTS = $(MY_SOURCES:.c=.o)
HEADDER 

all: $(NAME)

$(Name): $(MY_OBJECTS)
		ar rcs $(NAME) $(MY_OBJECTS)

clean: 
	rm -f $(MY_OBJECTS)

fclean: clean 
	rm -f $(NAME)

re: fclean all 
		
