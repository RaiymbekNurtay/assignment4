//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#ifndef BLOCKCHAIN_STRUCTT_H
#define BLOCKCHAIN_STRUCTT_H
#include "ctime"
using namespace std;
#include "string"

struct TransactionData{
public:
    TransactionData(int i, const char string[11], const char string1[11], time_t i1);
    TransactionData();
    double amount;
    string senderKey;
    string receiverKey;
    time_t timestamp;
};


#endif //BLOCKCHAIN_STRUCTT_H
