#include<iostream>
#include<string.h>

using namespace std;
 
 class HighSchool
 {
     public:
         int id;
         char name[20];
         int roll;
         int number;
         int age;
         char institut_name[50];
         char address[50];
   
         void GetData();
         void SetData();
 };
 void HighSchool::GetData()
 {
 	cout<<" Student detail"<<endl;
     cout<<"Enter Student  id: ";
     cin>>id;
     cout<<"Enter Student  name: ";
     cin>>name;
     cout<<"Enter  Student number: ";
     cin>>roll;
     cout<<"Enter Student age: ";
     cin>>age;
     cout<<"Enter Student institut_name: ";
     cin>>institut_name;
     cout<<"Enter Student address: ";
     cin>>address;
     cout<<"Enter Student number : ";
     cin>>number;
 }
 void HighSchool::SetData()
 {
     cout<<endl<<id<<endl<<name<<endl<<roll<<endl<<age<<endl<<institut_name<<endl<<address<<endl<<number<<endl;
 }
 class clg{
 	public:
         int id;
         char name[20];
         int roll;
         int number;
         int age;
         char institut_name[50];
         char address[50];
   
 	
 	     void GetData();
         void SetData();
 	};
 	void clg::GetData()
 {
 	cout<<" clg Student detail"<<endl;
     cout<<"Enter Student  id: ";
     cin>>id;
     cout<<"Enter Student  name: ";
     cin>>name;
     cout<<"Enter  Student number: ";
     cin>>roll;
     cout<<"Enter Student age: ";
     cin>>age;
     cout<<"Enter Student institut_name: ";
     cin>>institut_name;
     cout<<"Enter Student address: ";
     cin>>address;
     cout<<"Enter Student number : ";
     cin>>number;
 }
 void clg::SetData()
 {
     cout<<endl<<id<<endl<<name<<endl<<roll<<endl<<age<<endl<<institut_name<<endl<<address<<endl<<number<<endl;
 }

 
 int main()
 {
     HighSchool h;
     clg c;
     cout<<"Enter the High School  information:"<<endl;

         h.GetData();
         h.SetData();
         c.GetData();
         c.SetData();
}
