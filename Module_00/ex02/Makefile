NAME		= account

C			= clang++

C_FLAGS		= -Wall -Wextra -Werror

HEADER		= Account.hpp

SRCS		= 	Account.cpp\
				tests.cpp

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

.cpp.o:
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