//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#include "Block.h"

size_t Block::generateHash(){
// creating string of transaction data
    string toHashS = to_string(transaction_data.amount) + transaction_data.receiverKey + transaction_data.senderKey + to_string(transaction_data.timestamp);
// 2 hashes to combine
    hash<string> tDataHash; // hashes transaction data string
    hash<string> prevHash; // re-hashes previous hash (for combination)
// combine hashes and get size_t for block hash
    return tDataHash(toHashS) ^ (prevHash(to_string(prev_hash)) << 1);
}

//Constructor:
Block::Block(int index, TransactionData data, size_t prev_hash) {
    this->index = index;
    this->transaction_data = data;
    this->prev_hash = prev_hash;
    this->block_hash = generateHash();
}

size_t Block::getBlockHash()
{
    return block_hash;
}

bool Block::isHashValid() {
    return generateHash() == block_hash;
}

int Block::getIndex() const {
    return index;
}

void Block::setIndex(int index) {
    Block::index = index;
}

const TransactionData &Block::getTransactionData() const {
    return transaction_data;
}

void Block::setTransactionData(const TransactionData &transactionData) {
    transaction_data = transactionData;
}

void Block::setBlockHash(size_t blockHash) {
    block_hash = blockHash;
}

size_t Block::getPrevHash() const {
    return prev_hash;
}

void Block::setPrevHash(size_t prevHash) {
    prev_hash = prevHash;
}
