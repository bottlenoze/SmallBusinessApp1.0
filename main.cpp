//============================================================================
// Name        : exampleCode.cpp
// Author      : Bottlenoze
// Version     :
// Copyright   :
// Description : Examples of code syntax for various statments, functions, etc
//============================================================================

//int parsing(and parsing in general)
//vectors/2d arrays etc
//pointers
//switch statements

#include <string>

#include <iostream>
#include <vector>
#include <fstream>
#include "Account.h"
#include "Receipt.h"




using namespace std;

int main() {

    //creat variables and objects
    Account account;
    int option = 0;

    int transactionNumber;
    vector<Receipt> receiptVector;

    //create fstream object and open account file to get balance and input balance into account object
    fstream ioFromAccountFile("account.txt", fstream::in);
    if(ioFromAccountFile.is_open()){
        double d;
        ioFromAccountFile >> d;
        account.setAccountBalance(d);
    }
    ioFromAccountFile.close();

    //create fstream object and open transactionNumber file to get transaction number and load into int transActionNumber
    fstream ioFromTransFile("transactionNumber.txt", fstream::in);
    if(ioFromTransFile.is_open()){
        int t;
        ioFromTransFile >> t;
        transactionNumber = t;
    }
    ioFromTransFile.close();



    string datetimeString;
    int transNum;
    string type;
    double amount;
    double amountAfterTransaction;
    int test;

    //read into an array then read that array into a vector :)


    fstream ioFromReceiptFile("receipts.txt", fstream::in);
    if(ioFromReceiptFile.is_open()){
        for(int i = 0; i < 2; i++){
            Receipt r;
            receiptVector.push_back(r);
        };
        for(int i = 0; i < 2; i++){
            getline(ioFromReceiptFile, datetimeString);
            ioFromReceiptFile >> transNum;
            ioFromReceiptFile >> type;
            ioFromReceiptFile >> amount;
            ioFromReceiptFile >> amountAfterTransaction;

//        			receiptVector[i].setDateTime(datetimeString);
//        			cout << receiptVector[i].getDateTime() << endl;
//
//        			receiptVector[i].setTransactionNumber(transNum);
//        			cout << receiptVector[i].getTransactionNumber() << endl;
//
//        			receiptVector[i].setType(type);
//        			cout << receiptVector[i].getType() << endl;
//
//        			receiptVector[i].setAmount(amount);
//        			cout << receiptVector[i].getAmount() << endl;
//
//        			receiptVector[i].setBalanceAfterTransaction(amountAfterTransaction);
//        			cout << receiptVector[i].getBalanceAfterTransaction() << endl;
        };
    }
    ioFromReceiptFile.close();





//       //vector to store data
//        int q = 12;
//        vector<int> vect{10, 20, 30};
//        vect.push_back(q);
//        cout << vect.back();
//        cout << vect[0] << vect[1] << "  " << vect.size();

    do{
        cout << "***Welcome to The Small Business Application***\n" << endl;
        cout << "There is 1 account with a balance what would you like to do?\n"
                "1. deposit\n"
                "2. withdraw\n"
                "3. check balance\n"
                "4. view receipts\n"
                "5. QUIT" << endl;
        cin >> option;

        double balance = 0;
        switch(option) {
            case 1  :
                cout << "A deposit? great choice! enter the amount to deposit into account" << endl;
                cin >> balance;
                cout << balance;
                account.depositAccount(balance);
                break; //optional
            case 2  :
                balance = 0;
                cout << "A withdrawal? bad choice! enter the amount to withdraw from account" << endl;
                cin >> balance;
                account.withdrawAccount(balance);
                break; //optional
            case 3  :
                cout << "Your balance is $" << account.getAccountBalance() << " dollars.\n" << endl;
                break; //optional
            case 4  :
                cout << "This option is still under construction" << endl;
                break; //optional
            case 5  :
                cout << "***Saving***" << endl;
                ioFromAccountFile.open("account.txt", fstream::out);
                if(ioFromAccountFile.is_open()){
                    ioFromAccountFile << account.getAccountBalance();
                    cout << "Successfully saved" << endl << "Final Balance: $" << account.getAccountBalance() << endl;
                }
                ioFromAccountFile.close();
                cout << "***program will now exit***";
                break; //optional

                // you can have any number of case statements.
            default : //Optional
                cout << endl << "***invalid choice***" << endl;
        }
    }
    while(option != 5);

    return 0;
}
