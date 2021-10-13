#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdio>

class Contacts
{
	public:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		void search_contact( void );
		void show_contact( void );
		void add_contact( int i );
};

# endif