NAME = cub3D

OBJ_DIR = obj

SRC = ./cub.c \
	  ./libft/ft_strlen.c \
	  ./libft/ft_putstr_fd.c \
	  ./libft/ft_strncmp.c \
	  ./libft/ft_putnbr_fd.c \
	  ./libft/ft_strchr.c \
	  ./libft/ft_strrchr.c \
	  ./libft/ft_strtrim.c \
	  ./libft/ft_split.c \
	  ./libft/ft_strdup.c \
	  ./libft/ft_putchar_fd.c \
	  ./libft/ft_substr.c \
	  ./get_next_line/get_next_line.c \
	  ./get_next_line/get_next_line_utils.c \
	  ./modules/ft_perror.c \
	  ./modules/clean_vars.c \
	  ./modules/ptrptr_free.c \
	  ./general_init/struct_memset.c \
	  ./general_init/argv_reading.c \
	  ./general_init/data_saving.c \
	  ./general_init/data_classification.c \

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

CFLAGS = -Wall -Wextra -Werror -g

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)/$(dir $<)
	cc $(CFLAGS) -c $< -o $@

$(NAME):$(OBJ)
		cc $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
