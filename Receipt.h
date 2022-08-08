/*
 * Receipts.h
 *
 *  Created on: Aug 12, 2020
 *      Author: Bottlenoze
 */

#ifndef RECEIPT_H_
#define RECEIPT_H_

#include <iostream>

class Receipt {

private:
    std::string dateTime;//time and date of transaction
    unsigned int transactionNumber = 0;;//a chronological count of transactions and is six digits (XXXXXX) for now at least
    std::string type;//Deposit or Withdrawal
    double amount = 0;;//amount of transaction(should get when the transaction is made)
    double balanceAfterTransaction = 0;


public:
    Receipt();
    virtual ~Receipt();

    std::string timeStamp();//should return a formatted date and time for right now
    std::string getDateTime();//should return a formatted date and time
    unsigned int getTransactionNumber();//returns transaction number
    std::string getType();//returns type(either "withdrawal" or "deposit")
    double getAmount();//returns the amount of transactions
    double getBalanceAfterTransaction();//Might not need this function

    void setDateTime(std::string s);//should return a formatted date and time
    void setTransactionNumber(unsigned int i);//returns transaction number
    void setType(std::string s);//returns type(either "withdrawal" or "deposit")
    void setAmount(double d);//returns the amount of transactions
    void setBalanceAfterTransaction(double d);//Might not need this function

};

#endif /* RECEIPT_H_ */
