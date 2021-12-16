NAME = 0303

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDRS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -O3 -Wall -Wextra -Werror -Wshadow -std=c++98

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
