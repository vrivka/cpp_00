#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

class Contact {
private:
	size_t ID;
	std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;
public:
	void setID(size_t);
	void setFirstName();
	void setLastName();
	void setNickName();
	void setPhoneNumber();
	void setDarkestSecret();
	void setAll();
	size_t getID();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	Contact();
	~Contact();
};


#endif
