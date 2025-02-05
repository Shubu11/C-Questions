#include<iostream>

using namespace std;

int main(){

int *ptr = new int;
int *ptr2= new int;
*ptr = 56;


cout<<"value stored"<<*ptr<<endl;
cout<<"address stored"<<*ptr<<endl;
cin>>*ptr2;
cout<<"value stored"<<*ptr<<endl;
cout<<"address stored"<<*ptr<<endl;
delete ptr;

}
