NAME		=	scavtrap

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror

HEADER		=	ClapTrap.hpp\
				ScavTrap.hpp\
				FragTrap.hpp

SRCS		=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re