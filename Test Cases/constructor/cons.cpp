#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    string name;
    int salaray;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salaray = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salaray is " << this->salaray << "Dollers" << endl;
    }
    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};
int main()
{

    Employee tan("Tanmoy constructor", 344, 324432);
    // T.name ="Tanmoy";
    // T.salaray =100;
    tan.printDetails();
    tan.getSecretPassword();
    // cout<<T.secretPassword;
    return 0;
}