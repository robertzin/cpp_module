NAME		=	form

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

HEADER		=	Bureaucrat.hpp\
				Form.hpp

SRCS		=	main.cpp\
				Bureaucrat.cpp\
				Form.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re