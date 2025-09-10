#include<iostream>
using namespace std;   

class Base{
public:
     int Basedata;
     Base(int b):Basedata(b){};
     virtual void display(){
        cout<<"Base data: "<<Basedata<<endl;
     }
};

class dereived:public Base{
public:
      int Dereiveddata;
      dereived(int b, int d):Base(b),Dereiveddata(d){};

      void display()override{
        cout<<"Base data: "<<Basedata<<" Dereived data: "<<Dereiveddata<<endl;
      }
};

int main(){
    dereived d(10,20);
    //object slicing: 
    Base b=d;
    b.display();
    //to avoid slicing use pointer:
    Base *b1=&d;
    b1->display();
}