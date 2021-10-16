NAME		=	convert

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp\

RM			= rm -f

$(NAME):	$(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re