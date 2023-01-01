#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword()
    {
        cout<<"The secret password of employee is "<<this->secretPassword;
    }

private:
    int secretPassword;
};


// class Programmer : public Employee
// {
//     public:
//         int errors;
        
// };

int main()
{


    Employee har("Harry constructor", 344, 324432);
    // har.name = "harry";
    // har.salary = 100;
    har.printDetails();
    har.getSecretPassword();
    // cout<<har.secretPassword;
    // cout<<"The name of our first employee is "<< har.name << " and his salary is "<<har.salary<<" Dollars"<<endl;

    return 0;
}

