#include "Form.hpp"

char const *Form::GradeTooHighException::what() const throw() {
	return _msg.c_str();
}

char const *Form::GradeTooLowException::what() const throw() {
	return _msg.c_str();
}

Form::Form() : 
_name("noname"),
_isSigned(0),
_signGrade(100),
_execGrade(100) {

}

Form::~Form() {
}

Form::Form( const std::string name, bool isSigned, const int signGrade, const int execGrade ) :
	_name(name),
	_isSigned(isSigned),
	_signGrade(signGrade),
	_execGrade(execGrade) {
	if (signGrade < 1)
		throw GradeTooHighException("Form sign grade level should be in range [1 - 150]! Now it is gonna be too high :(");
	else if (signGrade > 150)
		throw GradeTooLowException("Form sign grade level should be in range [1 - 150]! Now it is gonna be too low :(");
	else if (execGrade < 1)
		throw GradeTooHighException("Form sign exec level should be in range [1 - 150]! Now it is gonna be too high :(");
	else if (execGrade > 150)
		throw GradeTooLowException("Form sign exec level should be in range [1 - 150]! Now it is gonna be too low :(");

}

Form::Form( const Form& toCopy ) :
	_name(toCopy._name),
	_isSigned(toCopy._isSigned),
	_signGrade(toCopy._signGrade),
	_execGrade(toCopy._execGrade) {
}

Form& Form::operator=( const Form& value ) {
	if (this == &value)
		return *this;
	this->_isSigned = value._isSigned;
	return *this;
}

const std::string& Form::getName() const {
	return this->_name;
}

bool Form::getIsSigned() const {
	return this->_isSigned;
}

const int& Form::getSignGrade() const {
	return this->_signGrade;
}

const int& Form::getExecGrade() const {
	return this->_execGrade;
}

void Form::beSigned( const Bureaucrat& value ) {
	if (this->_isSigned == 1) {
		throw std::runtime_error( "The form \"" + value.getName() + "\" is already signed!" );
	}
	else if (value.getGrade() <= this->_signGrade)
		this->_isSigned = 1;
	else
		throw GradeTooLowException( "Bureaucrat has a lack of grade to sign the form :(" );
}

std::ostream& operator<<( std::ostream& data, const Form& some) {
	data << "Form name: \"" << some.getName() << "\"" << std::endl;
	if ( some.getIsSigned() == 1 )
		data << "Form IS SIGNED" << std::endl;
	else
		data << "Form IS NOT SIGNED" << std::endl;
	data << "Form's sign grade: " << some.getSignGrade() << std::endl;
	data << "Form's exec grade: " << some.getExecGrade();
	return data;
}