NAME	=	contacts

CC	=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	main.cpp contact.cpp phoneBook.cpp

all: $(NAME)

$(NAME): $(SRC)
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@ echo clean already!

fclean: clean
	rm -f $(NAME)

re: fclean all
