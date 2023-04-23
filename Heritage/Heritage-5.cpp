//5.WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

#include<iostream>
#include<string>

using namespace std;

class A {
	public:
		int id,salary,exp;
		string name,role,comp_name,address,email,contact;
		
		void set_value(){
			cout << "Enter Emp_Id : ";
			cin >> id;
			
			cout << "Enter Emp_Name: ";
			cin >> name;
			
			cout << "Enetr Emp_Role: ";
			cin >> role;
		}
};

class B:public A{
	public:
			void set_value(){
			cout << "Enter Emp_Salary : ";
			cin >> salary;
			
			cout << "Enter Emp_Experience : ";
			cin >> exp;
		}
};

class C:public B{
	public:
		void set_value(){
			cout << "Enter Emp_Comp_Name : ";
			cin >> comp_name;
			
			cout << "Enter Emp_Address :";
			cin >>address;
		}
		
		void get_value(){
			cout <<endl << "........Employee Detail......";
			cout << "Emp_Id     : " <<id <<endl;
			cout << "Emp_Role   : " <<role <<endl;
			cout << "Emp_Salary : " <<salary <<endl;
		}
};

class D:public C{
		public:
		void set_value(){
			cout << "Enter Emp_Email : ";
			cin >> email;
			
			cout << "Enter Emp_Contact : ";
			cin >> contact;
		}
		
		void get_value(){
			cout << "Emp_Exp    : " <<exp <<endl;
			cout << "Emp_CompN  : " <<comp_name <<endl;
			cout << "Emp_Address: " <<address <<endl;
			cout << "Emp_Email  : " <<email <<endl;
			cout << "Emp_Contact: " <<contact <<endl;
		}
};

int main(){
	
	D d1;
	d1.set_value();
	d1.get_value();
	return 0;
}

