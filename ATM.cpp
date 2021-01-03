#include <stdio.h>
#include <bits/stdc++.h>
#include <string.h>
#include <vector>

using namespace std;

class Acc{


public:
    int balance;
    void SeeBalance(){
        cout<<"Your current balance is: "<<balance<<endl;
        return;
    }
    void Withdraw(int A){
        if(A > balance){
            cout<<"Not enough balance"<<endl;
        }
        else{
            balance -= A;
            cout<<"Your current balance is: "<<balance<<endl;
        }
        return;
    }
    void Deposit(int A){
        balance += A;
        cout<<"Your current balance is: "<<balance<<endl;
        return;
    }
};

int main(){
    int card;
    int pin = 1234,PIN;
    int step;
    int option;
    int Money;

    Acc Bank;
    Bank.balance = 0;

    while(1){
        cout<<"Insert Card. Enter 1 when finish. Enter 0 to exit"<<endl;
        cin>>card;
        if(card == 0) return 0;
        else {
            cout<<"Enter PIN(default PIN is '1234'): ";
            cin>>PIN;
            if(PIN == pin){
                while(1){
                    cout<<"To change PIN number, enter 1."<<endl;
                    cout<<"To select account, enter 2."<<endl;
                    cout<<"To exit, enter 0."<<endl;
                    cin>>step;
                    if(step == 0) return 0;
                    else if(step == 1){
                        cout<<"Enter your new PIN: ";
                        cin>>pin;
                    }
                    else if(step == 2){
                        Bank.SeeBalance();
                        cout << "Enter your options: (1 or 2 or 3)"<<endl;
                        cout << "1: See Balance"<<endl;
                        cout << "2: Withdraw"<<endl;
                        cout << "3: Deposit"<<endl;

                        cin >> option;

                        if(option == 1) Bank.SeeBalance();
                        else if(option == 2){
                            cout<<"Enter the amount you want to withdraw: ";
                            cin >> Money;
                            Bank.Withdraw(Money);
                            Bank.SeeBalance();
                        }
                        else if(option == 3){
                            cout<<"Enter the amount you want to deposit: ";
                            cin >> Money;
                            Bank.Deposit(Money);
                            Bank.SeeBalance();
                        }
                    }
                }
            }
            else{
                cout<<"Wrong PIN";
            }
        }
    }
}
