#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form( "DefaultRobotomyRequestForm", "testFile", 0, 72, 45 ) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) : Form( "RobotomyRequestForm", target, 0, 72, 45 ) {
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& toCopy ) : Form(toCopy) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& value ) {
	if (this == &value)
		return *this;
	this->setIsSigned(value.getIsSigned());
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if ( this->getIsSigned() == 0 )
		throw std::runtime_error(this->getName() + " form is not signed yet");
	else if ( executor.getGrade() > this->getExecGrade() )
		throw GradeTooLowException("Bureaucrat has not requirement amount of grade to execute the Form");
	else {
		std::cout << "Brrrr---bzzz--ukjewjwjjjja \"";
		std::cout << this->getTarget() << "\" has been robotomized successfully 50% of the time" << std::endl;
	}
}
