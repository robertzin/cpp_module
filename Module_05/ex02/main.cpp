#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main(void) {
	
	try {
		Bureaucrat him("John", 90);
		Form* ppf = new PresidentialPardonForm();
		Form* rqf = new RobotomyRequestForm();
		Form* scf = new ShrubberyCreationForm("Output_file");

		std::cout << him << std::endl;
		him.signForm(*ppf);
		std::cout << std::endl;
		him.signForm(*rqf);
		std::cout << std::endl;
		him.signForm(*scf);

		std::cout << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << std::endl;
		std::cout << *rqf << std::endl;
		std::cout << std::endl;
		std::cout << *scf << std::endl;
		std::cout << std::endl;
		him.executeForm(*ppf);
		std::cout << std::endl;
		him.executeForm(*rqf);
		std::cout << std::endl;
		him.executeForm(*scf);

		delete ppf;
		delete rqf;
		delete scf;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}



	return 0;
}