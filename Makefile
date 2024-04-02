CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBS = -Llibft -lft
LDFLAGS =
SOURCES = printf.c
NAME = libftprintf.a
OBJECTS = $(SOURCES:.c=.o)

all: libft $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

libft:
	@$(MAKE) -C libft

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJECTS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all