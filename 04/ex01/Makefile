NAME = 0401

SRCS =	main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

HDRS = Dog.hpp Cat.hpp Animal.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -O3 -Wall -Wextra -Werror -std=c++98

COMP = c++

%.o: %.cpp		$(HDRS)
				@$(COMP) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(COMP) $(FLAGS) $(OBJS) -o $@

clean:
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all


.PHONY:			all clean fclean re
