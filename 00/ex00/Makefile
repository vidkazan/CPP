NAME=	megaphone

CC	=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@ echo clean already!

fclean: clean
	rm -f $(NAME)

re: fclean all
