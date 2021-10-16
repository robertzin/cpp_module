#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	
	try {
		Bureaucrat* him = new Bureaucrat("John", 130);
		std::cout << *him << std::endl;
		
		std::cout << std::endl;
		Form* formulaNotBlank = new Form("name", 0, 55, 70);
		him->signForm(*formulaNotBlank);
		
		std::cout << std::endl;
		std::cout << *formulaNotBlank << std::endl;

	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}