NAME = "libft.a"

SRC = *.c
OBJ = *.o

INCL = libft.h

TEST = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(TEST) $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)
	norminette

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
