NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I .
SRC = ft_strlen.c ft_tolower.c ft_strchr.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
	ft_strlcat.c ft_strnstr.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c \

OBJECTS = $(SRC:%.c=%.o)


# Main Rule
all:$(NAME) 

# Creates library and includes object files inside
$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Compiles source files and creates object files
%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

# Clears object files
clean :
	rm -f $(OBJECTS)

# Clears program file
fclean : clean
	rm -f $(NAME)

# Recompile
re : fclean all

#Declaring targets as "fake"
.PHONY: all clean fclean re
