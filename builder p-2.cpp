#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
	private:
		int id,staff_size,room_size;
		char hotelname[100],hoteladdress[100];
		
	public:
	 void setData(int id,char hotelname[],char hoteladdress[],int staff_size,int room_size) 
	 {
	 	this->id=id;
	 	strcpy(this->hotelname,hotelname);
	 	strcpy(this->hoteladdress,hoteladdress);
	 	this->staff_size=staff_size;
	 	this->room_size=room_size;
	 }
	 void getData()
	 {
	 	cout<<"id="<<id<<endl;
	 	cout<<"hotelname="<<hotelname<<endl;
	 	cout<<"hoteladdress="<<hoteladdress<<endl;
	 	cout<<"staff_size="<<staff_size<<endl;
	 	cout<<"room_size="<<room_size<<endl;
	 }	
};
int main()
{
	Hotel h1;
	h1.setData(1,"navjivan","sarthana",50,5);
	h1.getData();
}
	 
	 
	

