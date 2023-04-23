//3.WAP to read and print employee information using multiple inheritance

#include<iostream>
using namespace std;

class P1 {
public:

    float salary = 90000;
    float bonus = 10000;
};

class P2 : public P1 {
public:
    
    void Total_Salary() {
        cout << endl <<" Total Salary :"<< (salary + bonus) <<endl;
    }
};

int main()
{
    P2 p;
    
    cout << " Salary: " << p.salary <<endl;
    cout << " Bonus: " << p.bonus <<endl;
    
    p.Total_Salary();
    return 0;
}
