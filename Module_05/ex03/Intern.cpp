#include "Intern.hpp"

char const *Intern::CreateFormException::what() const throw() {
	return _msg.c_str();
}

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern( const Intern& toCopy ) {
	*this = toCopy;
}

Intern& Intern::operator=( const Intern& value ) {
	if (this == &value)
		return *this;
	*this = value;
	return *this;
}

Form* Intern::makeForm( std::string name, std::string target ) const {
	Form* ret_form = NULL;

	std::string const known[3] = {
		"robotomy request",
		"presidential pardon form",
		"shrubbery creation form",
	};

	for (int i = 0; i < 3; i++) {
		if (name == known[i]) {
			std::cout << "Intern creates " << name << " form" << std::endl;
			switch (i) {
				case 0: 
					ret_form = new ShrubberyCreationForm( target );
					break;
				case 1: 
					ret_form = new PresidentialPardonForm( target );
					break;
				case 2: 
					ret_form = new RobotomyRequestForm( target );
					break;
			}
			return ret_form;
		}
	}
	throw Intern::CreateFormException("Could not create \"" + name + "\"");
	return ret_form;
}