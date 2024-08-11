#include<iostream>
using namespace std;
template<class T>
T addition(T x,T y){
    T sum;
    sum= x+y;
    return sum;
}
int main(){
    int a=34,b=54,sumi;
    float c=45.5,d=4.4,sumf;
    sumi=addition(a,b);
    sumf=addition(c,d);
    cout<<"the Sum is integers numbers is "<<sumi<<endl;
    cout<<"the Sum is float numbers is "<<sumf<<endl;
    return 0;

}