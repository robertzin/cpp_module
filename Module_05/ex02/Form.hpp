#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form {
	
	private:
		const std::string _name;
		const std::string _target;
		bool _isSigned;
		const int _signGrade; // [0 - 150]
		const int _execGrade; // [0 - 150]

	public:
		Form();
		virtual ~Form();
		Form( const std::string, const std::string, bool, const int, const int );
		Form( const Form& toCopy );
		Form& operator=( const Form& value );

		const std::string& getName() const;
		const std::string& getTarget() const;
		bool getIsSigned() const;
		void setIsSigned( bool );
		const int& getSignGrade() const;
		const int& getExecGrade() const;
		void beSigned( const Bureaucrat& value );
		virtual void execute( Bureaucrat const & executor ) const = 0;

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