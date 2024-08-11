#include<iostream>
using namespace std;

class Swap{
private:
float a,b;
public:

void getinput(){
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    cout<<"before swapping-"<<endl;
    cout<<"x="<<a<<"\t y="<<b<<endl;
   
}
void display() const{
    cout<<"after swapping-"<<endl<<"x="<<a<<"\t y="<<b;
}

friend void swapnum(Swap &);


};
void swapnum(Swap &s){
    float temp;
    temp=s.a;
    s.a=s.b;
    s.b=temp;


}

int main(){
    Swap s;
    s.getinput();
    swapnum(s);
    s.display();
    return 0;



}