#include<iostream>
using namespace std;

class base{
public:
    virtual void display(){
        cout<<"display's Base version called with virtual"<<endl;
      }
    
      void show(){
        cout<<"show's Base version called without virtaul"<<endl;
      }
};

class dereived:public base{
public:
     void display(){
        cout<<"display's Dereived version called with virtual"<<endl;
     }
     void show(){
        cout<<"show's Base version called without virtaul"<<endl;
     }
};

int main(){
    base *b=new dereived();
    b->display();//output:=display's Dereived version called with virtual;
    b->show();//output:=show's Base version called without virtaul
}