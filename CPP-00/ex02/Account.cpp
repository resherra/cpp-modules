#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl; 
}

Account::Account(int initial_amount)
{
    _displayTimestamp();
    _amount = initial_amount;
    _accountIndex = _nbAccounts++;    
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;

    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
}

void    Account::_displayTimestamp()
{
    time_t timestamp;
    time(&timestamp);
    struct tm *times = localtime(&timestamp);
    std::cout << "[" << times->tm_year + 1900 << times->tm_mon + 1 << 
    times->tm_mday << "_" << times->tm_hour << times->tm_min << times->tm_sec << "] ";
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" <<  _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;    
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _totalNbDeposits++;
    _nbDeposits++;
    int old_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:"  << old_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;    
}

bool    Account::makeWithdrawal(int withdrawal)
{   
    _displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused" << std::endl;
        return 0;
    }
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    int old_amount = _amount;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "index:" << _accountIndex << ";p_amount:" << old_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return 1;
}

