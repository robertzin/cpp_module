#include "Bureaucrat.hpp"

char const *Bureaucrat::GradeTooHighException::what() const throw() {
	return _msg.c_str();
}

char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return _msg.c_str();
}

Bureaucrat::Bureaucrat() : _name("noname"), _grade(150) {
}

Bureaucrat::~Bureaucrat( void ) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException("Bureaucrat level should be in range [1 - 150]! Now it is gonna be too high :(");
	else if (grade > 150)
		throw GradeTooLowException("Bureaucrat level should be in range [1 - 150]! Now it is gonna be too low :(");
	this->_grade = grade;	
}

Bureaucrat::Bureaucrat( const Bureaucrat& toCopy ) : _name(toCopy._name), _grade(toCopy._grade) {
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& value ) {
	if (this == &value)
		return *this;
	this->_grade = value._grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incGrade() {
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException("Can`t increment grade! Now it is gonna be too high :("));
	this->_grade-=1;
}

void Bureaucrat::decGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException("Can`t decrement grade! Now it is gonna be too low :(");
	this->_grade+=1;
}

void Bureaucrat::signForm( Form& value ) const {
	try	{
		value.beSigned(*this);
		std::cout << this->_name << " successfully signed the form \"" << value.getName() << "\"" << std::endl;
	}
	catch(const std::exception& e)	{
		std::cout << this->_name << " can not sign the form \"" << value.getName() << "\" because of lack of grade to sign it :("  << '\n';
	}
}

void Bureaucrat::executeForm( Form const & form ) {
	try	{
		form.execute(*this);
		std::cout << this->_name << " successfully executed the form \"" << form.getName() << "\"" << std::endl;
	}
	catch(const std::exception& e)	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<( std::ostream& data, const Bureaucrat& some) {
	data << some.getName() << " bureaucrat grade: " << some.getGrade();
	return data;
}