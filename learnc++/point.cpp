#include<iostream>
#include<cmath>
 using namespace std;
 class Point{
    private:
    int x,y;
    
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
 void display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
    }

friend void distance(Point p3, Point p4);
 };
 void distance(Point p3, Point p4){
    float distance;
    distance=sqrt(pow(p4.x - p3.x,2)+pow(p4.y-p3.y,2));
    cout<<"distance:"<<distance<<endl;


 }

 int main(){
     Point p(1,1);
     p.display();
     Point q(0,0);
     q.display();
     distance(p,q);
     return 0;





 }