#include <iostream>
#include <iomanip>
#include <chrono>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "created" << std::endl;
}

Account::Account() {
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ';'
				<< "amount: 0" << ';'
				<< "created" << std::endl;
}

Account::~Account() {
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << " index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "closed" << std::endl;
}

void Account::_displayTimestamp( void ) {
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t current_time = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&current_time);
	std::cout << std::setfill('0') << '[' << utc_tm.tm_year + 1900
		<< std::setw(2) << utc_tm.tm_mon << std::setw(2) << utc_tm.tm_mday << '_'
		<< std::setw(2) << utc_tm.tm_hour << std::setw(2) << utc_tm.tm_min
		<< std::setw(2) << utc_tm.tm_sec << ']';
}

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ';'
			<< "total:" << _totalAmount << ';'
			<< "deposits:" << _totalNbDeposits << ';'
			<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ';'
			<< "amount:" << this->_amount << ';'
			<< "deposits:" << this->_nbDeposits << ';'
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;	
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ';'
			<< "p_amount:" << this->_amount << ';'
			<< "deposit:" << deposit << ';';
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ';'
			<< "p_amount:" << this->_amount << ';';
	if (this->_amount - withdrawal < 0) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ';';
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const {
	return (this->_amount > 0);
}

