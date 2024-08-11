#include<iostream>

using namespace std;

class Person{
    private:
    int a,b;
    public:
    Person(){
        a=0;
        b=0;
    }
    Person(int x,int y){
        a=x;
        b=y;
    }
    Person(int x){
        a=x;
        b=0;
    }
    void display(){
        cout<<a<<","<<b<<endl;
    }

};
int main(){
Person f;
f.display();
Person p(3,4);
p.display();
Person q(4);
q.display();
return 0;


}