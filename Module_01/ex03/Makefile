NAME		=	violence

C			=	clang++

HEADER		=	HumanA.hpp\
				HumanB.hpp\
				Weapon.hpp\

C_FLAGS		= 	-Wall -Wextra -Werror

SRCS		=	main.cpp\
				HumanA.cpp\
				HumanB.cpp\
				Weapon.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

%.o:		%.cpp
			$(C) $(C_FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER) $(SRCS)
			$(C) $(OBJS) -o $@

all: 		$(NAME)

clean: 		
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re