#include<iostream>
using namespace std;

int main(){
    int arr[3]={1,3,6};

    cout<<arr[2];
int marks[6];
for (int i = 1; i < 6; i++)
{
    cout<<"Enter the marks of "<<i<<"th student is "<<endl;
     cin>>marks[i];
}
for (int i = 1; i < 6; i++)
{
    cout<<"Enter the marks of "<<i<<"th student is "<<marks[i]<<endl;
     
}



    return 0;
} 