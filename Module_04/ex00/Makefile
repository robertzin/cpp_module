NAME		=	animal

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

HEADER		=	Animal.hpp\
				Cat.hpp\
				Dog.hpp\
				WrongCat.hpp\
				WrongAnimal.hpp

SRCS		=	main.cpp\
				Animal.cpp\
				Cat.cpp\
				Dog.cpp\
				WrongCat.cpp\
				WrongAnimal.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re