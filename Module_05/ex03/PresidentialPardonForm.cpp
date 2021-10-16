#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form( "DefaultPresidentialPardonForm", "testFile", 0, 25, 5 ) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) : Form( "PresidentialPardonForm", target, 0, 25, 5 ) {
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& toCopy ) : Form(toCopy) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& value ) {
	if (this == &value)
		return *this;
	this->setIsSigned(value.getIsSigned());
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if ( this->getIsSigned() == 0 )
		throw std::runtime_error(this->getName() + " form is not signed yet");
	else if ( executor.getGrade() > this->getExecGrade() )
		throw GradeTooLowException("Bureaucrat has not requirement amount of grade to execute the Form");
	else
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
