NAME		=	diamondtrap

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

HEADER		=	ClapTrap.hpp\
				ScavTrap.hpp\
				FragTrap.hpp\
				DiamondTrap.hpp

SRCS		=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp\
				DiamondTrap.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re