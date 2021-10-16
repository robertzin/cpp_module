#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form( "DefaultShrubberyCreationForm", "testFile", 0, 145, 137 ) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : Form( "ShrubberyCreationForm", target, 0, 145, 137 ) {
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& toCopy ) : Form(toCopy) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& value ) {
	if (this == &value)
		return *this;
	this->setIsSigned(value.getIsSigned());
	return *this;
}

void ShrubberyCreationForm::drawTrees( int num ) const {
	std::ofstream output(this->getTarget());
	if (num == 0) {
		output << "          l/ |    |/" 			<< std::endl;
		output << "        l/ / l||/  /_/___/_" 	<< std::endl;
		output << "         l/   |/ l/" 			<< std::endl;
		output << "    _l__l_l   |  /_____/_" 		<< std::endl;
		output << "           l  | /          /" 	<< std::endl;
		output << "  __ _-----`  |{,-----------~"	<< std::endl;
		output << "            l }{" 				<< std::endl;
		output << "             }{{" 				<< std::endl;
		output << "             }}{" 				<< std::endl;
		output << "             {{}" 				<< std::endl;
		output << "       , -=-~{ .-^- _" 			<< std::endl;
		output << "             `}" 				<< std::endl;
		output << "              {" 				<< std::endl;
	}
	else if (num == 1) {
		output << "         v"			<< std::endl;
		output << "        >X<"			<< std::endl;
		output << "         A"			<< std::endl;
		output << "        d$b"			<< std::endl;
		output << "      .dl$$b."		<< std::endl;
		output << "    .d$i$$l$$b."		<< std::endl;
		output << "       d$$@b"		<< std::endl;
		output << "      dl$$$ib"		<< std::endl;
		output << "    .d$$$l$$$b"		<< std::endl;
		output << "  .d$$@$$$$l$$ib."	<< std::endl;
		output << "      d$$i$$b"		<< std::endl;
		output << "     dl$$$$@$b"		<< std::endl;
		output << "  .d$@$$l$$$$$@b."	<< std::endl;
		output << ".d$$$$i$$$l$$$$$$b."	<< std::endl;
		output << "        ###"			<< std::endl;
		output << "        ###"			<< std::endl;
		output << "        ###"			<< std::endl;

	}
	else if (num == 2) {
		output << "         * 						"<< std::endl;
		output << "        /|'\'         			"<< std::endl;         
		output << "       /*|O'\'					"<< std::endl;
		output << "      /*/|'\'*'\'				"<< std::endl;
		output << "     /X/O|*'\'X'\'				"<< std::endl;
		output << "    /*/X/|'\'X'\'*'\'			"<< std::endl;
		output << "   /O/*/X|*'\'O'\'X'\'    		"<< std::endl;     
		output << "  /*/O/X/|'\'X'\'O'\'*'\'		"<< std::endl;
		output << " /X/O/*/X|O'\'X'\'*'\'O'\'		"<< std::endl;
		output << "/O/X/*/O/|'\'X'\'*'\'O'\'X'\'	"<< std::endl;
		output << "        |X|      				"<< std::endl;
		output << "        |X|    					"<< std::endl;
}
output.close();
}


void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if ( this->getIsSigned() == 0 )
		throw std::runtime_error(this->getName() + " form is not signed yet");
	else if ( executor.getGrade() > this->getExecGrade() )
		throw GradeTooLowException("Bureaucrat has not requirement amount of grade to execute the Form");
	else {
		srand(time(NULL));
		this->drawTrees((rand() % (4 -1)));
	}
}
