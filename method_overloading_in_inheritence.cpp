#include<iostream>
using namespace  std;

class Base{
public:
     void display(int a){
        cout<<"dispaly Base: "<<a<<endl;
     }
};

class dereived:public Base{
public:
    using Base::display;   // scope resolution operator used to solve the problem of hiddeness....
      void display(double b){
        cout<<"display dereived: "<<b<<endl;
      }
};

int main(){
    dereived d;
    d.display(5.33);
    d.display(5); //Error as base member function are hidden. 
}
