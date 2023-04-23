/*2.WAP with a mother class animal. Inside it define a name and age variables, and set_value() function. 
Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and 
giving some extra information (e.g. place of origin).*/

#include<iostream>
#include<string>
using namespace std;

class Animal{
	public:
	string  name;
	int age;
	
	void set_value(){
		cout << " Enter Animal Name:  ";
		cin >> name;
		
		cout << " Enter Animal_age : ";
		cin >> age;
	}	
};

class Zebra: public Animal{
	
	public:
	void get_value(){
		     cout  << " Animal Name is " << name <<endl;
			cout  << " Animal Age is  " << age <<endl <<endl;
	}	
};

class Dolphin: public Animal{
	
	public:
		void get_value(){
			cout  << " Animal Name is " << name <<endl;
			cout << " Animal Age is  " << age <<endl;
		}
};

int main(){
	
	Zebra Z;
	Dolphin D;
	Z.set_value();
	Z.get_value();
	D.set_value();
	D.get_value();
	return 0;
}
