# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files categorized by function type
STRING_FUNCS = ft_strlen.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c ft_striteri.c
NUM_FUNCS = ft_isdigit.c ft_atoi.c
CHAR_FUNCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c
MEMORY_FUNCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c ft_memcmp.c ft_calloc.c
FILE_FUNCS = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SOURCES = $(STRING_FUNCS) $(NUM_FUNCS) $(CHAR_FUNCS) $(MEMORY_FUNCS) $(FILE_FUNCS)

# Output library name
NAME = libft.a

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Include all header files in the current directory
HEADERS = $(wildcard *.h)

# Default target
all: $(NAME)

# Rule to create object files with header dependencies
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Phony targets
.PHONY: clean fclean re

# Clean target
clean:
	@$(RM) $(OBJECTS)

# Full clean target
fclean: clean
	@$(RM) $(NAME)

# Rebuild target
re: fclean all