#include<iostream>

using namespace std;

class Dma{
         int *ptr;
   public:
   Dma(int i){
ptr = new int(i);
}
void print(){
       cout<<"value stored"<<*ptr<<endl;
       cout<<"address stored"<<*ptr<<endl;
       
       }
       
  };
  int main(){

    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
    Dma d1(n);
    d1.print();
    Dma d2(n);
    d2.print();
    return 0;
    }
