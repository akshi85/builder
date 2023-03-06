#include <iostream>  
#include <string.h>  
using namespace std;  

class  state
{  
public:
char state_name[20];  
char state_district_name[50];
char state_city_name[50];    
  

  public:
  	static char india;
  
void setData()  
{  
cout << " \nEnter state name: " << endl;  
cin >> state_name; 
cout << " Enter the district_name : " << endl;  
cin  >> state_district_name;  
cout << " enter state_city_name: " << endl;  
cin >> state_city_name;    
}  

void getData ()  
{  
cout << " \n state name: " <<state_name; 
cout << " \ndistrict_name "<<state_district_name;  
cout << " \n state_city_name: " << state_city_name;
}  

};  
char state::india;
  
 int main ()  
{  
  
state s1;
  
s1.setData ();  
s1. getData();  
  
  
state s2;  
  
s2.setData();  
s2. getData();  
  
  
 cout << " state informtion: "<<endl;  
return 0;  
}   
