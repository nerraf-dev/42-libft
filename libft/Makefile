# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 19:05:57 by sfarren           #+#    #+#              #
#    Updated: 2024/05/30 19:08:58 by sfarren          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CCFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I.

SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c \
	ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c \
	ft_strncmp.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c \
	ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_strchr.c ft_memcpy.c ft_memmove.c \
	ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c ft_putendl_fd.c ft_strtrim.c \
	ft_split.c ft_strmapi.c ft_striteri.c

OBJS = $(SRC:.c=.o)

BONUS_SRC = ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c \
			ft_lstnew.c

BONUS_OBJS := $(BONUS_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re test clean_test
