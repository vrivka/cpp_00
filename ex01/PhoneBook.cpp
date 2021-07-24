#include "PhoneBook.hpp"

void PhoneBook::setContactData() {
	this->ContactData[this->index].setID(this->IDcount);
	this->ContactData[this->index].setAll();
	if (this->index == 7)
		this->index = 0;
	else
		this->index++;
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
	std::cout << std::setw(10) << "<ID>" << '|';
	std::cout << std::setw(10)<< "First Name" << '|';
	std::cout << std::setw(10)<< "Last Name" << '|';
	std::cout << std::setw(10)<< "Nick Name" << std::endl;
	for (int i = 0; i < 8; i++) {
		if (this->ContactData[i].getID() != 0){
			printID(this->ContactData[i].getID());
			std::cout << "|";
			printData(this->ContactData[i].getFirstName());
			std::cout << "|";
			printData(this->ContactData[i].getLastName());
			std::cout << "|";
			printData(this->ContactData[i].getNickName());
			std::cout << std::endl;
		}
	}
}

void PhoneBook::printfullContactData() {
	size_t id;
	std::string str;

	std::cout << "Please input ID from the list for more information: ";
	std::cin >> str;

	id = std::atoi(str.c_str());
	if (!id) {
		std::cout << "Contact with ID: <" << id << "> not found" << std::endl;
		this->printfullContactData();
		return ;
	}
	for (int i = 0; i < 8 ; i++) {
		if (this->ContactData[i].getID() == id) {
			std::cout << "First Name:\t\t" << this->ContactData[i].getFirstName() << std::endl;
			std::cout << "Last Name:\t\t" << this->ContactData[i].getLastName() << std::endl;
			std::cout << "Nick Name:\t\t" << this->ContactData[i].getNickName() << std::endl;
			std::cout << "Phone Number:\t" << this->ContactData[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret:\t" << this->ContactData[i].getDarkestSecret() << std::endl;
			return ;
		}
	}
	std::cout << "Contact with ID: <" << id << "> not found" << std::endl;
	this->printfullContactData();
}

PhoneBook::PhoneBook() {
	this->IDcount = 1;
	this->index = 0;
}
