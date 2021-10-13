NAME		=	fixed

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror

HEADER		=	Fixed.hpp

SRCS		=	main.cpp\
				Fixed.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re