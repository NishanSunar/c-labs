#include<iostream>
using namespace std;

class Complex{

 int a,b;
 public:
  Complex(){
    a=10;
    b=15;


 }
 void getdata(){
    cout<<"enter the real and imaginary part"<<endl;
    cin>>a>>b;
    
 }
 void print_number(){
cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
}




};
int main(){
    Complex c1;
    c1.print_number();
    return 0;
}
