NAME		=	template

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

HEADERS		=	whatever.hpp

SRCS		=	main.cpp\

RM			= rm -f

$(NAME):	$(SRCS) $(HEADERS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re