#include "PhoneBook.hpp"

void PhoneBook::setContactData() {
	this->ContactData[this->Index].setID(this->IDcount);
	this->ContactData[this->Index].setAll();
	if (this->Index == 7)
		this->Index = 0;
	else
		this->Index++;
	this->IDcount++;
}

static void printData(std::string const &str) {
	if (str.size() > 10)
		std::cout << str.substr(0, 9) <<  ".";
	else
		std::cout << std::setw(10) << str;
}

static void printID(size_t id) {
	std::ostringstream oss;
	oss << id;
	std::string str = oss.str();
	printData(str);
}

void PhoneBook::printshortContactData() {
	int n = 0;

	for (int i = 0; i < 8; i++)
		if (this->ContactData[i].getID() == 0)
			n++;
	if (n == 8) {
		std::cout << "Phone book is empty\n";
		return ;
	}
	std::cout << "/----------|----------|----------|----------\\\n";
	std::cout << "|\x1b[32m";
	std::cout << std::setw(10) << "<ID>" << "\x1b[0m|";
	std::cout << std::setw(10)<< "First Name" << '|';
	std::cout << std::setw(10)<< "Last Name" << '|';
	std::cout << std::setw(10)<< "Nick Name" << '|' << std::endl;
	for (int i = 0; i < 8; i++) {
		if (this->ContactData[i].getID() != 0) {
			std::cout << "|";
			printID(this->ContactData[i].getID());
			std::cout << "|";
			printData(this->ContactData[i].getFirstName());
			std::cout << "|";
			printData(this->ContactData[i].getLastName());
			std::cout << "|";
			printData(this->ContactData[i].getNickName());
			std::cout << "|";
			std::cout << std::endl;
		}
	}
	std::cout << "\\----------|----------|----------|----------/\n";
	this->printfullContactData();
}

static int check_it_nums(char const *str)
{
	for (size_t i = 0; i < strlen(str); i++) {
		if (!isdigit(str[i]))
			return 1;
	}
	if (!(*str))
		return 1;
	return 0;
}

void PhoneBook::printfullContactData() {
	size_t id;
	std::string str;

	std::cout << "Please input \x1b[32mID\x1b[0m from the list for more information: ";
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		exit(0);
	if (check_it_nums(str.c_str())) {
		std::cout << "Incorrect \x1b[32mID\x1b[0m\n";
		return ;
	}
	id = std::atoi(str.c_str());
	if (!id) {
		std::cout << "Contact with \x1b[32mID\x1b[0m: <" << id << "> not found" << std::endl;
		return ;
	}
	for (int i = 0; i < 8 ; i++) {
		if (this->ContactData[i].getID() == id) {
			std::cout << "First Name:\t" << this->ContactData[i].getFirstName() << std::endl;
			std::cout << "Last Name:\t" << this->ContactData[i].getLastName() << std::endl;
			std::cout << "Nick Name:\t" << this->ContactData[i].getNickName() << std::endl;
			std::cout << "Phone Number:\t" << this->ContactData[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret:\t" << this->ContactData[i].getDarkestSecret() << std::endl;
			return ;
		}
	}
	std::cout << "Contact with \x1b[32mID\x1b[0m: <" << id << "> not found" << std::endl;
}

PhoneBook::PhoneBook() {
	this->IDcount = 1;
	this->Index = 0;
}
