# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 19:05:57 by sfarren           #+#    #+#              #
#    Updated: 2024/05/31 16:59:11 by sfarren          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CCFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c \
	ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c \
	ft_strncmp.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c \
	ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_strchr.c ft_memcpy.c ft_memmove.c \
	ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c ft_putendl_fd.c ft_strtrim.c \
	ft_split.c ft_strmapi.c ft_striteri.c

OBJS = $(SRC:.c=.o)

BONUS_SRC = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
			ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c \
			ft_lstnew_bonus.c

BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
