/*
 * Account.h
 *
 *  Created on: Jul 11, 2020
 *      Author: Bottlenoze
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {

private:
    double accountBalance;
public:
    Account();
    virtual ~Account();

    double getAccountBalance();
    void setAccountBalance(double x);
    void withdrawAccount(double x);
    void depositAccount(double x);
};

#endif /* ACCOUNT_H_ */
