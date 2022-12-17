#include <iostream>
using namespace std;
class BankAccout{
    private:
      string name, accountType;
     long int accountNo;
     double balance;

     public:
     void init(){
        cout<<"Enter depositor name: ";
        cin>>name;
        cout<<"Enter account no: ";
        cin>>accountNo;
        cout<<"Enter account type: ";
        cin>>accountType;
        cout<<"Enter account balance: ";
        cin>>balance;
     }
     void deposit(){
         double temp;
         cout<<"Enter the amount to deposit: ";
         cin>>temp;
         balance+=temp;
         cout<<"Your current balance is: "<<balance;
     }
     void withdraw(){
         double temp;
         cout<<"Your current balance is: "<<balance;
         cout<<"\nEnter the amount you want to withdraw: ";
         cin>>temp;
         if(temp>balance){
             cout<<"Not enough balance";
             exit(1);
         }
         balance-=temp;
         cout<<"Account balance is: "<<balance;
     }
     void accountDetails(){
         cout<<"\nDepositor  name: "<< name;
         cout<<"\nAccout balance: "<<balance;
     }     
};
int main(){
    int choice;
   BankAccout userAccount;
   userAccount.init();
   while(choice<4){
        cout<<"\nEnter 1 to deposit cash, 2 to withdraw, 3 to view account details, 4 to cancel: ";
   cin>>choice;
   switch (choice)
   {
   case 1:
       userAccount.deposit();
       break;
   
   case 2: userAccount.withdraw();
       break;
   
   case 3: userAccount.accountDetails();
       break;
   case 4: exit(1);
        break;
} cout<<"\n";

   }

}
