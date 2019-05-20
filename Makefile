NAME = libft.a

SRC = ./src/*.c
OBJ = ./*.o
HEAD = ./incl
TEST = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(TEST) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
