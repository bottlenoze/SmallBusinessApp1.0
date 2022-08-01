/*
 * Receipts.cpp
 *
 *  Created on: Aug 12, 2020
 *      Author: brandon
 */

#include "Receipt.h"
#include <iostream>


Receipt::Receipt(){
}
Receipt::~Receipt(){
}


std::string Receipt::timeStamp(){
    // current date/time based on current system
    time_t now = time(0);
    // convert now to string form
    char* dt = ctime(&now);
    return dt;
}

std::string Receipt::getDateTime(){
    return dateTime;
}
unsigned int Receipt::getTransactionNumber(){
    return transactionNumber;
}
std::string Receipt::getType(){
    return type;
}
double Receipt::getAmount(){
    return amount;
}
double Receipt::getBalanceAfterTransaction(){
    return balanceAfterTransaction;
}


void Receipt::setDateTime(std::string s){
    dateTime = s;
}
void Receipt::setTransactionNumber(unsigned int i){
    transactionNumber = i;
}
void Receipt::setType(std::string s){
    type = s;
}
void Receipt::setAmount(double d){
    amount = d;
}
void Receipt::setBalanceAfterTransaction(double d){
    balanceAfterTransaction = d;
}