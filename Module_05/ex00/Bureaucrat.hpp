#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

	protected:
		std::string const _name;
		int	_grade;

	public:
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& toCopy );
		Bureaucrat& operator=( const Bureaucrat& value );
		
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		
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

std::ostream& operator<<( std::ostream& data, const Bureaucrat& some);

#endif