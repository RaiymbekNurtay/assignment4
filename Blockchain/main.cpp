#include <iostream>
#include <vector>
#include "Block.h"
#include "Blockchain.h"
#include "Structt.h"
using namespace std;



int main(){
    Blockchain RaisCoin;
    //Data for first added block

    //cout << "Is chain valid? " << RaisCoin.isBlockChainValid() << endl;
    TransactionData data1;
    time_t data1Time;
    data1.amount = 15;
    data1.receiverKey = "Arna";
    data1.senderKey = "Rais";
    data1.timestamp = time(&data1Time);
    RaisCoin.addBlock(data1);

    //cout << "Is chain valid? " << RaisCoin.isBlockChainValid() << endl;
    TransactionData data2;
    time_t data2Time;
    data2.amount = 10;
    data2.receiverKey = "Ronaldo";
    data2.senderKey = "Messi";
    data2.timestamp = time(&data2Time);
    RaisCoin.addBlock(data2);


    TransactionData data3;
    time_t data3Time;
    data3.amount = 25;
    data3.receiverKey = "Sanzhar";
    data3.senderKey = "Arman";
    data3.timestamp = time(&data3Time);
    RaisCoin.addBlock(data3);
    RaisCoin.printBlockChain();
    return 0;
}
