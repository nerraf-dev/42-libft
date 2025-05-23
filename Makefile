# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 19:05:57 by sfarren           #+#    #+#              #
#    Updated: 2025/04/27 17:30:39 by sfarren          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = src
PRINTF_DIR = src/ft_printf
GNL_DIR = src/gnl

# Compiler and Flags
UNAME_S := $(shell uname -s)
CC := $(shell command -v clang 2>/dev/null || command -v gcc 2>/dev/null || command -v cc 2>/dev/null)

CFLAGS = -Wall -Wextra -Werror -g

SRC_FILES = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c \
	ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c \
	ft_strncmp.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c \
	ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_strchr.c ft_memcpy.c ft_memmove.c \
	ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c ft_putendl_fd.c ft_strtrim.c \
	ft_split.c ft_strmapi.c ft_striteri.c \
	ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c \
	ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c

PRINTF_FILES = ft_printchr.c ft_printf.c ft_printptr.c ft_printstr.c \
				ft_printnbr_base.c ft_printf_fd.c \

GNL_FILES = get_next_line.c get_next_line_utils.c

SRC = $(foreach file, $(SRC_FILES), $(SRC_DIR)/$(file)) \
	  $(foreach file, $(PRINTF_FILES), $(PRINTF_DIR)/$(file)) \
	  $(foreach file, $(GNL_FILES), $(GNL_DIR)/$(file))

OBJS = $(SRC:.c=.o)

HEADERS = libft.h

.PHONY: all
all: $(NAME)

# the ar rcs command creates or updates an index in the archive
# r: replace the specified files in the archive
# c: create the archive if it does not exist
# s: write an index for the archive (instead of using ranlib)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# %.o: %.c is a pattern rule that says how to build .o files from .c files
# $< is the first prerequisite, which is the .c file
# $@ is the target, which is the .o file
%.o: %.c $(HEADERS)
	$(CC) $(CCFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)
	rm -f $(NAME) test_libft test_libft.o

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all


test: $(NAME) test_libft.o
	$(CC) $(CFLAGS) -o test_libft test_libft.o -L. -lft

test_libft.o: test_libft.c
	$(CC) $(CFLAGS) -c test_libft.c -o test_libft.o
