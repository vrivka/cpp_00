#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount() {
	return (Account::_totalAmount);
}

int Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (Account::_totalNbWithdrawals);
}

int Account::checkAmount() const {
	return (this->_amount);
}

void Account::_displayTimestamp() {
	std::cout << "[19920104_091532]";
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout
	<< " accounts:" << Account::getNbAccounts()
	<< ";total:" << Account::getTotalAmount()
	<< ";deposits:" << Account::getNbDeposits()
	<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout
	<< ";amount:" << this->checkAmount()
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";withdrawal:";
	if (this->_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	else {
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout
		<< withdrawal
		<< ";amount:" << this->checkAmount()
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";created" << std::endl;
}

Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";created" << std::endl;
}

Account::~Account() {
	Account::_displayTimestamp();
	std::cout
	<< " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
