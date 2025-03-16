# Define Program name
NAME = libft.a

# Define Source files
SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \





		




# Define Object files
OBJS = $(SRCS:%.c=%.o)

# Define the Compiler
CC = cc

# Define the flags for compilation
CFLAGS = -Wall -Wextra -Werror

# Archiver command to create the static library libft (.a file)
AR = ar rcs 

# Define the default target/ The first rule in a Makefile is this default rule
# when you run 'make' it looks for 'all'
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove object files
clean:
	rm -f $(OBJS)

# Rule to remove object files and the program
fclean: clean
	rm -f $(NAME)

# 're' rule to rebuild the program
re: fclean all