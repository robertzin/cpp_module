# include "Contacts.hpp"
# include "Phonebook.hpp"

char	ret_answer() {
	std::string str;

	while (1)
	{  				   	
		std::cout << std::endl << "*** Welcome to CRAPPY phonebook! ****" << std::endl;
		std::cout << "* Choose one of the commands below: *" << std::endl;
		std::cout << "to ADD press \'a\'" << std::endl;
		std::cout << "to SEARCH press \'s\'" << std::endl;
		std::cout << "to EXIT press \'e\'" << std::endl;
		std::cout << "Your choice: ";
		std::cin >> str;
		if (!str.compare("a") || !str.compare("s") || !str.compare("e") || str[0] == '\0')
			break;
	}
	return str[0];
}

int	case_s(PhoneBook *pbook) {
	int 	i;
	int		ret;
	int		flag;
	char	ch;

	i = 0;
	flag = 0;
	std::cout << std::setw(10) << "index";
	std::cout << " | ";
	std::cout << std::setw(10) << "first name";
	std::cout << " | ";
	std::cout << std::setw(10) << "last name";
	std::cout << " | ";
	std::cout << std::setw(10) << "nickname";
	std::cout << " | ";
	std::cout << std::setw(10) << "phone num";
	std::cout << " | ";
	std::cout << std::setw(10) << "secret" << std::endl;
	while (i < 8) {
		if (pbook->contact[i].first_name != "")
			pbook->contact[i].search_contact();
		i++;
	}
	while (1) {
		std::cout << std::endl << "Choose index of contact you want to print ('x' for abort): ";
		std::cin >> ch;
		if (ch == '\0' || ch == 'x' || ch == -100 || ch == 48)
			break ;
		ret = ch - '0';
		if ((ret - 1) >= 0 && (ret - 1) <= 7) {
			if (pbook->contact[ret - 1].first_name == "") {
				std::cout << "There are no element # " << (ret) << " in phonebook" << std::endl;
			}
			else {
				std::cout << std::endl << "Here is info about contact #" << ret << std::endl;
				pbook->contact[ret - 1].show_contact();
				break ;
			}
		}
		else
			std::cout << "Incorrect input." << std::endl;
	}
	return (0);
}

int	main()
{
	int			i;
	int			j;
	char 		ret;
	PhoneBook	pbook;

	i = 0;
	while (i < 9)
	{
		if (i == 8)
			i = 0;
		ret = ret_answer();
		if (ret == 'a') {
			pbook.contact[i].add_contact(i);
			i++;
		}
		else if (ret == 's') {
			j = case_s(&pbook);
		}
		else if (ret == 'e' || ret == '\0')
			break;
	}
	return (0);
}