#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream> 

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& toCopy );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& value );
		
		void drawTrees( int ) const;
		virtual void execute( Bureaucrat const & executor ) const;
};

#endif