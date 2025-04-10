#include <iostream>

using namespace std;

enum TransactionType {
    DEPOSIT,
    WITHDRAWAL,
    TRANSFER
};

union TransactionData {
    float amount; //deposits and withdrawals
    struct { 
        float amount; //transfer amount
        float fee; //transfer fee
    } transfer;
};

struct Transaction {
    TransactionType type;
    TransactionData data;
};

void processTransaction(Transaction t){
    if(t.type == DEPOSIT || t.type == WITHDRAWAL){
        cout << "Amount for deposit and withdrawals: " << t.data.amount << endl;
    } else if(t.type == TRANSFER){
        cout << "Transfer amount is: " << t.data.transfer.amount << " and the fees are: " << t.data.transfer.fee << endl;
    }
}

int main(){
    Transaction t1, t2;

    t1.type = DEPOSIT;
    t1.data.amount = 500.0f;

    t2.type = TRANSFER;
    t2.data.transfer.amount = 300.0f;
    t2.data.transfer.fee = 5.0f;

    processTransaction(t1);
    processTransaction(t2);


    return 0;
}