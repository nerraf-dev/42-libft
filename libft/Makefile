# Name of the output executable or library
NAME = libft.a
INC_DIR = .

# Compiler to use
CC = gcc

# Compiler flags
CCFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I$(INC_DIR)

# generate list of source files, select all files starting with ft_
SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c    ft_strlcat.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c  ft_strnstr.c ft_toupper.c ft_strchr.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c 

# ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Object files
# := tells make to append the result to the variable
# Whats on the right means : "for every .c file found in the
# SRC variable, give the corresponding .o filename".
# This will then append the result for each .c file to the OBJ variable.
# It simply replaces the .c from each file in the SRC variable by .o
OBJS = $(SRC:.c=.o)

# BONUS: Add bonus files to the list of source files
# BONUS_SRC = $(wildcard ft_lst*.c)

# BONUS_OBJS is a variable containing all bonus .o filenames.
# This works the same way as the OBJS variable.
# BONUS_OBJS := $(BONUS_SRC:%.c=%.o)

# Default target
all: $(NAME)

# Rule to build the library
# The library is built by archiving the object files into a .a file
# The ar command is used to create the library
# The r flag is used to insert the files into the library
# The c flag is used to create the library if it does not exist
# The s flag is used to write an index to the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile source files into object files
# The rule is used to compile the source files into object files
# The -I flag is used to specify the include directory
# The -c flag is used to compile the source files into object files
# The -o flag is used to specify the output file
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