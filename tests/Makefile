CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L../libft -lft
NAME = tests
SRCS = tests.c $(wildcard test_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS) $(NAME)

re: clean all

.PHONY: all clean re