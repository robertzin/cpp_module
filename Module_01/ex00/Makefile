NAME		= zombie

C			= clang++

C_FLAGS		= -Wall -Wextra -Werror

HEADER		= 	Zombie.hpp

SRCS		=	Zombie.cpp\
				newZombie.cpp\
				randomChump.cpp\
				main.cpp\

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