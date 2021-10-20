NAME		=	easyfind

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

HEADERS		=	easyfind.hpp

SRCS		=	main.cpp\

RM			= rm -f

$(NAME):	$(SRCS) $(HEADERS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re