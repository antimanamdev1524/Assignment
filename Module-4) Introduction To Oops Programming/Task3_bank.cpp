/* 3)	Define a class to represent a bank account. 
Include the following members: 
**2.1) Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
**2.2) Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance
 -To display name and balance */

#include<iostream>
using namespace std;

class Bank
 {
 	public:
 		char name[50], Acc_type[15];
 		int acc_num, balance, di, wi; 
 	    
 	    details()    //details function for customer bank details 
 	    {
 	         cout<<"Name of the depositor: ";
			  cin>>name;
			 cout<<"Account Number: ";
			  cin>>acc_num;
			 cout<<"Account type: ";
			  cin>>Acc_type;
			 cout<<"Current Balance: ";
			  cin>>balance;	
		}
		
 	    deposit()  //deposit function 
 	    {
 	       cout<<"\ndeposit amount: "<<endl;  //deposit amount by customer
		   cin>>di; 	
		}
		
		withdraw()  //withdraw function
		{
			cout<<"withdraw amout: "<<endl;  //withdrawl amount by customer
			cin>>wi;
		}
		
		check()  //function to check remaining balance
		{
			cout<<"\nTotal balance is: "<<(balance+di)-wi<<endl;
		}
 };
 
main()
 {
 	
 	Bank obj;  //obj is creaed to call class bank
 	obj.details();   
 	obj.deposit();
 	obj.withdraw();
 	obj.check();
 }

