NAME		=	materia

C			=	clang++

C_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

HEADER		=	AMateria.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp\
				ICharacter.hpp\
				Character.hpp\
				Ice.hpp\
				Cure.hpp

SRCS		=	main.cpp\
				AMateria.cpp\
				Character.cpp\
				MateriaSource.cpp\
				Ice.cpp\
				Cure.cpp

RM			= rm -f

$(NAME):	$(HEADER) $(SRCS)
			$(C) $(C_FLAGS) $(SRCS) -o $@

all: 		$(NAME)

fclean: 	
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re