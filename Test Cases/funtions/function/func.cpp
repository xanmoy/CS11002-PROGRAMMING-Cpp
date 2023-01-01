#include<iostream>
using namespace std;
//f(x)=x^2 +2
int add(int a, int b){
    int c;
    c = a+ b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Second first number"<<endl;
    cin>>b;

    cout<<"function returned "<<add(a,b);



    return 0;
}