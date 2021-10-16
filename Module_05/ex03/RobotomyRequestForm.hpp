#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm( const std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& toCopy );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& value );
		
		virtual void execute( Bureaucrat const & executor ) const;
};

#endif