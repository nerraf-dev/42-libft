NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I.

SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c  ft_strnstr.c ft_toupper.c ft_strchr.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c

#  ft_strtrim.c ft_itoa.c ft_putendl_fd.c  ft_split.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRC:.c=.o)

# BONUS: Add bonus files to the list of source files
# BONUS_SRC = 

# BONUS_OBJS is a variable containing all bonus .o filenames.
# This works the same way as the OBJS variable.
# BONUS_OBJS := $(BONUS_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to compile bonus source files into object files
# The bonus rule is used to compile the bonus source files into object files
# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re test clean_test