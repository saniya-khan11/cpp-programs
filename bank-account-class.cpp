/*
10. Create a class named BankAccount to manage customer bank accounts. The  
class should have the following properties and functions:  
Properties:  
1. accountNumber: An integer to store the account number.  
2. accountHolderName: A string to store the account holder's name.  
3. balance: A double to store the current balance in the account.  
Functions:  
1. Constructor: To initialize the account with the account number, account  
holder name, and initial balance.  
2. deposit(): A method to deposit money into the account. This should add the  
amount to the balance.  
3. withdraw(): A method to withdraw money from the account. This should  
subtract the amount from the balance, but only if sufficient balance exists. If  
the balance is insufficient, print a message indicating that the withdrawal is  
not possible.  
4. displayAccountInfo(): A method to display the account number, account  
holder name, and current balance.  
*/
#include<iostream>
using namespace std;
class BankAccount{
private: 
    int accountNumber;
    string accountHolderName;
    double balance;
public :
    void deposit(double amount){
        balance += amount;
        cout<<"The account has been credited with "<<amount<<endl;
        cout<<"Your current balance becomes "<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount <= balance){ 
        balance-=amount;
        cout<<"The account has been debited with "<<amount<<endl;
        cout<<"Your current balance becomes "<<balance<<endl;
        }
        else
        cout<<"Your current balance is "<<balance<<" , withdrawal is not possible!"<<endl;
    }
    void displayAccountInfo(){
        cout<<endl<<"               ACCOUNT INFORMATION"<<endl;
        cout<<"Account number - "<<accountNumber<<endl;
        cout<<"Account Holder Name - "<<accountHolderName<<endl;
        cout<<"Current Balance is - "<<balance<<endl;
    }
    //creating constructor
    BankAccount(int accNum,string name,double initialBalance){
        accountNumber=accNum;
        accountHolderName=name;
        balance=initialBalance;
    }
};
int main(){
     int choice;
     int num;
     string name;
     double initialBalance;
     cout<<"Enter your Bank details :-"<<endl;
     cout<<"Enter your accout number : ";
     cin>>num;
     cin.ignore(); // Clear input buffer
     cout<<"Enter your name : ";
    getline(cin, name);
     cout<<"Enter your Initial Balance : ";
     cin>>initialBalance;
     BankAccount yourAcc(num,name,initialBalance);
     //creating a menu to display what type of methods user want to perform
     
     double amount;//double variable amount to store the amount user wants to deposit or withdraw.
     while(true){
    cout<<endl<<"Click :-"<<endl<<"1. To Display account information"<<endl<<"2. To Deposit Money"<<endl<<"3. To Withdraw money"<<endl<<"4. Exit"<<endl<<"Enter your choice : ";
    cin>>choice;
     switch(choice)
     {
        case 1:
            yourAcc.displayAccountInfo();
            break;
        case 2:
            cout<<"Enter the amount you want to deposit : ";
            cin>>amount;
            yourAcc.deposit(amount);
            break;
        case 3:
            cout<<"Enter the amount you want to withdraw : ";
            cin>>amount;
            yourAcc.withdraw(amount);
            break;
        case 4:
            cout << "Exiting. Thank you for using our services!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;

     } 

     }
return 0;
}