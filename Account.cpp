/*
 * Account.cpp
 *
 *  Created on: Jul 11, 2020
 *      Author: brandon
 */

#include "Account.h"

Account::Account() {
    setAccountBalance(0);
}
Account::~Account() {
}
double Account::getAccountBalance() {
    return this->accountBalance;
}
void Account::setAccountBalance(double x) {
    this->accountBalance = x;
}
void Account::depositAccount(double x) {
    this->accountBalance += x;
}
void Account::withdrawAccount(double x) {
    this->accountBalance -= x;
}