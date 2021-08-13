#include "PhoneBook.hpp"

void helloMenu() {
	std::cout << "\x1b[30;47m  ___  _                     ___            _    \x1b[0m\n";
	std::cout << "\x1b[30;47m | _ \\| |_   ___  _ _   ___ | _ ) ___  ___ | |__ \x1b[0m\n";
	std::cout << "\x1b[30;47m |  _/| ' \\ / _ \\| ' \\ / -_)| _ \\/ _ \\/ _ \\| / / \x1b[0m\n";
	std::cout << "\x1b[30;47m |_|  |_||_|\\___/|_||_|\\___||___/\\___/\\___/|_\\_\\ \x1b[0m\n";
	std::cout << "\x1b[47m \x1b[0m Allowed commands:\t\t\t\t\x1b[47m \x1b[0m\n";
	std::cout << "\x1b[47m \x1b[0m \x1b[33mADD\x1b[0m\t to add new contact data\t\t\x1b[47m \x1b[0m\n";
	std::cout << "\x1b[47m \x1b[0m \x1b[33mSEARCH\x1b[0m to display short contact info\t\t\x1b[47m \x1b[0m\n";
	std::cout << "\x1b[47m \x1b[0m \x1b[33mEXIT\x1b[0m\t to exit\t\t\t\t\x1b[47m \x1b[0m\n";
	std::cout << "\x1b[47m\t\t\t\t\t\t \x1b[0m\n";
}

void prompt(std::string &cmd) {
	std::cout << "PhnBk> ";
	std::getline(std::cin, cmd, '\n');
	if (std::cin.eof())
		exit(0);
}

int main() {
	PhoneBook phoneBook;
	std::string cmd;

	helloMenu();
	while (true) {
		prompt(cmd);
		if (cmd == "ADD" || cmd == "add")
			phoneBook.setContactData();
		else if (cmd == "SEARCH" || cmd == "search") {
			phoneBook.printshortContactData();
		}
		else if (cmd == "EXIT" || cmd == "exit")
			exit(1);
	}
}
