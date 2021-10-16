#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		virtual ~Intern();
		Intern( const Intern& toCopy );
		Intern& operator=( const Intern& value );
		
		Form* makeForm( std::string name, std::string target ) const;
		class CreateFormException : public std::exception {
			protected:
				std::string _msg;
			public:
				CreateFormException( std::string const &msg ) throw() : _msg(msg) {}
				~CreateFormException() throw() {}
				const char* what() const throw();
		};	
};

#endif