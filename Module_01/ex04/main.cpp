#include <iostream>
#include <string>
#include <fstream>

void replace_words_in_line(std::string &line, std::string &to_find, std::string &to_change) {
	std::size_t	pos;

	pos = 0;
	while (pos < line.length()) {
		if ((pos = line.find(to_find, pos)) != std::string::npos ) {
			line.erase(pos, to_find.length());
			line.insert(pos, to_change);
			pos += to_change.length();
		}
	}
}

int	main(int argc, char **argv) {
	std::string output_filename;
	std::string to_find;
	std::string to_change;
	std::string	line;
	if (argc < 4) {
		std::cout << "Usage: [FILENAME] [WORD TO CHANGE] [WORD TO CHANGE TO] :(" << std::endl;
		return 1;
	}
	
	output_filename = argv[1];
	to_find = argv[2];
	to_change = argv[3];
	
	if (to_find.empty() || to_change.empty()) {
		std::cout << "Error: [WORD TO CHANGE] or [WORD TO CHANGE TO]";
		std::cout << " can not be empty :(" << std::endl;
		return 1;
	}
	
	output_filename += ".replace";
	std::ifstream input(argv[1]);
	if (input.is_open()) {
		std::ofstream output(output_filename);
		while (getline(input, line)) {
			replace_words_in_line(line, to_find, to_change);
			output << line << '\n';
		}
		input.close();
		output.close();
	}
	else
		std::cout << "Error: unable to open file \"" << argv[1] << '\"' << std::endl;
	return 0;
}