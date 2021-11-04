//
// Created by Raiymbek Nurtay on 04.11.2021.
//

#include "Blockchain.h"
using namespace std;
#include "iostream"

Blockchain::Blockchain(){
    Block firstBlock = createFirstBlock();
    chain.push_back(firstBlock);
}

Block Blockchain::createFirstBlock()
{
    time_t current;
    // Setup Initial Transaction Data
    TransactionData dataFirstBlock(0, "FirstBlock", "FirstBlock", time(&current));
    Block firstBlock (0, dataFirstBlock, 0);
    return firstBlock;
}

void Blockchain::addBlock(TransactionData data)
{
int index = (int)chain.size();
size_t previousHash = getLatestBlock()->getBlockHash();
Block newBlock(index, data, previousHash);
chain.push_back(newBlock);
}

Block *Blockchain::getLatestBlock()
{
    return &chain.back();
}

bool Blockchain::isBlockChainValid(){
    vector<Block>::iterator it;
    int chainLength = (int)chain.size();
    for(it = chain.begin(); it != chain.end(); ++it){
        Block currentBlock = *it;
        if(!currentBlock.isHashValid()){
            return false;
        }
        if(chainLength > 1){
            Block previousBlock = *(it - 1);
            if(currentBlock.getPreviousHash !=previousBlock.getBlockHash()){
                return false;
            }
        }
    }
}

void Blockchain::printBlockChain(){
    vector<Block>::iterator it;
    int chainLength = (int)chain.size();
    for(it = chain.begin(); it != chain.end(); ++it){
        Block currentBlock = *it;
        cout << "Block index: " << currentBlock.getIndex() << " " << endl;
        cout << "Data amount: " << currentBlock.getTransactionData().amount << " " << endl;
        cout << "Data sender key: " << currentBlock.getTransactionData().senderKey << " " << endl;
        cout << "Data receiver key: " << currentBlock.getTransactionData().receiverKey << " " << endl;
        cout << "Data timpestamp: " << currentBlock.getTransactionData().timestamp << " " << endl;
        cout << "----------------------------------------------------------------"<< endl;


    }
}

