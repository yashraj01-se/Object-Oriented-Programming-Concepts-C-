#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display()=0;
};

class Dereived: public Base{
    public:
        void display(){
            cout<<"Dereived class"<<endl;
        }
};

int main(){
         Base* b=new Dereived();
         b->display();    
}