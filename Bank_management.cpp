                                    //  BANK MANAGEMENT SYSTEM

#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Bank{
    string name,add,y;
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdrwal_money();
        void Display_account();
};
void Bank :: open_account(){
    cout<<"enter your full name: "<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"enter your address: "<<endl;
    getline(cin,add);
    cout<<"What type of account you want to open saving(s) or current(c): "<<endl;
    cin>>y;
    cout<<"Enter amount for deposit: "<<endl;
    cin>>balance;
    cout<<"Your account has been created\n";
}

void Bank :: deposit_money(){
    int a;
    cout<<"How much you deposit :: "<<endl;
    cin>>a;
    balance+=a;
    cout<<"Your total amount is :: "<<balance;
}

void Bank :: Display_account(){
    cout<<"your full name :: "<<name<<endl;
    cout<<"Address is :: "<<add<<endl;
    cout<<"Type of Account that you open :: "<< y<<endl;
    cout<<"Amount you deposit :: \t"<<balance;

}

void Bank :: withdrwal_money(){
    int amt;
    cout<<"\tWITHDRW"<<endl;
    cout<<"\nEnter amount to withdraw :: "<<endl;
    cin>>amt;
    balance-=amt;
    cout<<"After withdraw the total balance is :: "<<balance<<endl;
}

int main(){
    int ch,x;
    //string x;
    Bank Obj;
    do
    {
        cout<<"1)  Open Account"<<endl;
        cout<<"2)  Deposit money"<<endl;
        cout<<"3)  Withdraw money"<<endl;
        cout<<"4)  Display account"<<endl;
        cout<<"5)  Exit"<<endl;
        cout<<"Select any number to continue: \n";
        cin>>ch;
        switch(ch){
            case 1: "1) open account \n";
            Obj.open_account();
            break;

            case 2: "2) deposit money \n";
            Obj.deposit_money();
            break;

            case 3: "3) Withdraw money \n";
            Obj.withdrwal_money();
            break;

            case 4: "4) Display Account \n";
            Obj.Display_account();
            break;

            case 5: 
                if(ch==5){
                    exit(1);
                }

        default:
            cout<<"This is not exist, try again\n";
        }
        cout<<"\n do you want to select next option then press :: y \n";
        cout<<"if you want to exit then press :: N \n";
        //getline(cin,x);
        x=getch();
        if(x=='n' || x=='N')
            exit(0);
    }while(x=='y'||x=='Y');
    getch();
    return 0;
}