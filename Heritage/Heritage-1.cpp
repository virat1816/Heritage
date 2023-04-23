/*1.WAP with a mother class and an inherited daugther class.Both of them should have a method void display() 
that prints a message (different for mother and daugther). 
 In the main define a daughter and call the display() method on it.*/
 
 #include<iostream>

 using namespace std;
 
 class Mother{
 	public:
 		
 		void Display(){
 			cout <<endl << " Hello I am Daugther's Mother...." <<endl;
		 }	
 };
 
 class Daughter:public Mother{
 	 public:
 	 	void Display(){
 	 		cout <<endl << " Hello I am Mother's Daughter....";
		  }	
 };
 
 int main(){
 	
	 Mother M;
	 M.Display();
	 Daughter D;
	 D.Display();
 	
 	return 0;
 }
