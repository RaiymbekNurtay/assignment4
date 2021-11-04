//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#include "Structt.h"

    TransactionData::TransactionData(int i, const char string[11], const char string1[11], time_t i1) {
        this->amount=amount;
        this->senderKey= senderKey;
        this->receiverKey= receiverKey;
        this->timestamp =  timestamp;
    }

    TransactionData::TransactionData() {};
