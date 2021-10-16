#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form {
	
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade; // [0 - 150]
		const int _execGrade; // [0 - 150]

	public:
		Form();
		~Form();
		Form( const std::string name, bool isSigned, const int signGrade, const int execGrade );
		Form( const Form& toCopy );
		Form& operator=( const Form& value );

		const std::string& getName() const;
		bool getIsSigned() const;
		const int& getSignGrade() const;
		const int& getExecGrade() const;
		void beSigned( const Bureaucrat& value );

		class GradeTooHighException : public std::exception {
			protected:
				std::string _msg;
			public:
				GradeTooHighException( std::string const &msg ) throw() : _msg(msg) {}
				~GradeTooHighException() throw() {}
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			protected:
				std::string _msg;
			public:
				GradeTooLowException( std::string const &msg ) throw() : _msg(msg) {}
				~GradeTooLowException() throw() {}
				const char* what() const throw();
		};	

};

std::ostream& operator<<( std::ostream& data, const Form& some);

#endif