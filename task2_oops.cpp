#include<iostream>
using namespace std;
class account{
private:
	double balance;
	int accountnum;
public:
	string name;

account(double bal,int acc,string nam)
{
	balance=bal;
	accountnum=acc;
	name=nam;
}
//a deposit means adding money to your account.
void deposit(double amount){
	if(amount>0)
	{
		balance=balance+amount;
		cout<<"deposited"<<endl;
	}
	else
	{
		cout<<"not deposited"<<endl;
	}
}
void withdraw(double amount)
{
	if(amount<=balance && amount>0)
	{
		balance-=amount;
		cout<<"withdraw"<<endl;
	}
	else
{
		cout<<"not withdraw"<<endl;
	}
}
void checkbal()
{
	cout<<balance<<endl;
}
int getaccountnumber(){
	return accountnum;
}
};
int main()
{
	account p1(2000,6421,"pooji");
	cout<<"name"<<p1.name<<endl;
	cout<<"accnum"<<p1.getaccountnumber()<<endl;
//	p1.deposit(200);
	p1.checkbal();
//	p1.withdraw(700);
	p1.checkbal();
	return 0;
}
