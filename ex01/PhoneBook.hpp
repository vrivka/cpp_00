#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	Contact ContactData[8];
	size_t Index;
	size_t IDcount;
public:
	void setContactData();
	void printfullContactData();
	void printshortContactData();
	PhoneBook();
};


#endif
