#include<iostream>
#include <string>

using namespace std;

   class Employee {
    public:
    string name;
    int salaray;
    void printDetails(){
        cout<<"The name of our first employee is "<< this->name << " and his salaray is "<<this->salaray<<"Dollers"<<endl;
    }

   };
int main(){

Employee T;
T.name ="Tanmoy";
T.salaray =100;
T.printDetails();
    return 0;
} 