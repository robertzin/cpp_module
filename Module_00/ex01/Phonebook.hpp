#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class PhoneBook
{
	public:
		PhoneBook( void );
		Contacts contact[8];
		~PhoneBook( void );
};

#endif