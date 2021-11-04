//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H
#include "ctime"
#include "string"
#include "Structt.h"

class Block {
    private:
        int index;
        TransactionData transaction_data;
        size_t block_hash;
        size_t prev_hash;
        size_t generateHash();
    public:
    //Constructor
        Block(int index, TransactionData data, size_t prev_hash);
        size_t getBlockHash();
        //get original hash
        size_t getHash();
        //get previous hash
        size_t getPreviousHash;
        bool isChainValid();

    int getIndex() const;

    void setIndex(int index);

    const TransactionData &getTransactionData() const;

    void setTransactionData(const TransactionData &transactionData);

    void setBlockHash(size_t blockHash);

    size_t getPrevHash() const;

    void setPrevHash(size_t prevHash);

    bool isHashValid();
};


#endif //BLOCKCHAIN_BLOCK_H
