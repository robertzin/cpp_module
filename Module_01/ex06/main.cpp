#include "Karen.hpp"

int	main( int argc, char **argv ) {
	std::string command;
	if (argc < 2) {
		std::cout << "Karen needs a command :(" << std::endl;
		return 1;
	}
	else if (argc > 2) {
		std::cout << "Karen can handle only one command :(" << std::endl;
		return 1;
	}
	command = argv[1];
	if (!command.compare("DEBUG") || !command.compare("INFO") || !command.compare("WARNING") || !command.compare("ERROR")) {
		Karen robot;
		robot.complain(command);
	}

	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 0;
}