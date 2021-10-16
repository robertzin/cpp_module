#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int	main(void) {
	
	try {
		Bureaucrat him("John", 90);
		Intern me;
		Form *rrf;

		rrf = me.makeForm("robotomy request", "Bender");
		rrf = me.makeForm("aaa", "Bender");
		
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}