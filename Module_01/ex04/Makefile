NAME		=	replace

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror

SRCS		=	main.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

%.o:		%.cpp
			$(C) $(C_FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(SRCS)
			$(C) $(OBJS) -o $@

all: 		$(NAME)

clean: 		
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)
			$(RM) *.replace

re:			fclean all

.PHONY:		all clean fclean re