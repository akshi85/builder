#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		char name[20];
		int salary;
		int experience;
		char address[50];
		char  email[50];
		int contact;
		
	public:
	   
		void getterdata();
		void setterdata();	
};
void Employee::getterdata()
{
	cout<<"\nenter the employee id:";
	cin>>id;
	cout<<"\nenter the employee name:";
	cin>>name;
	cout<<"\nenter the employee salary:";
	cin>>salary;
	cout<<"\nenter the employee experience:";
	cin>>experience;
	cout<<"\nenter the employee address:";
	cin>>address;
	cout<<"\nenter the employee email:";
	cin>>email;
	cout<<"\nenter the employee contact:";
	cin>>contact;
}
void Employee::setterdata()
{
	cout<<endl<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<experience<<"\t"<<address<<"\t"<<email<<"\t"<<contact;
}
int main()
{
	Employee e1;
	cout<<"enter the employee information:"<<endl;

	{
		e1.getterdata();
		e1.setterdata();
	}
}
