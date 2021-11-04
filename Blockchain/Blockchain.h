//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#ifndef BLOCKCHAIN_BLOCKCHAIN_H
#define BLOCKCHAIN_BLOCKCHAIN_H
#include "Block.h"
#include "vector"
#include "Structt.h"

class Blockchain {
private:

public:
    Blockchain();
    vector<Block> chain;
    void addBlock(TransactionData data);
    Block *getLatestBlock();
    Block createFirstBlock();
    bool isBlockChainValid();
    void printBlockChain();
};


#endif //BLOCKCHAIN_BLOCKCHAIN_H
