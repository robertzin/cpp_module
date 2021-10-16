#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm( const std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& toCopy );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& value );
		
		virtual void execute( Bureaucrat const & executor ) const;
};

#endif