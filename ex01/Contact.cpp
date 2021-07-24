#include "Contact.hpp"

void Contact::setID(size_t id) {
	this->ID = id;
}

void Contact::setFirstName() {
	std::cout << "Please input first name: \n";
	std::getline(std::cin, this->FirstName, '\n');
}

void  Contact::setLastName() {
	std::cout << "Please input last name: \n";
	std::getline(std::cin, this->LastName, '\n');
}

void  Contact::setNickName() {
	std::cout << "Please input nick name: \n";
	std::getline(std::cin, this->NickName, '\n');
}

void  Contact::setPhoneNumber() {
	std::cout << "Please input phone number: \n";
	std::getline(std::cin, this->PhoneNumber, '\n');
}

void  Contact::setDarkestSecret() {
	std::cout << "Please input darkest secret: \n";
	std::getline(std::cin, this->DarkestSecret, '\n');
}

void Contact::setAll(){
	this->setFirstName();
	this->setLastName();
	this->setNickName();
	this->setPhoneNumber();
	this->setDarkestSecret();
}

size_t Contact::getID() {
	return (this->ID);
}

std::string  Contact::getFirstName() {
	return (this->FirstName);
}

std::string  Contact::getLastName() {
	return (this->LastName);
}

std::string  Contact::getNickName() {
	return (this->NickName);
}

std::string  Contact::getPhoneNumber() {
	return (this->PhoneNumber);
}

std::string  Contact::getDarkestSecret() {
	return (this->DarkestSecret);
}

Contact::Contact() {
	this->ID = 0;
	this->FirstName.clear();
	this->LastName.clear();
	this->NickName.clear();
	this->PhoneNumber.clear();
	this->DarkestSecret.clear();
}

Contact::~Contact() {
	this->FirstName.clear();
	this->LastName.clear();
	this->NickName.clear();
	this->PhoneNumber.clear();
	this->DarkestSecret.clear();
}
