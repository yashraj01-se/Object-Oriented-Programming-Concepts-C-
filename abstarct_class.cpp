#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw()=0;

    void display(){
        cout<<"Shape id created"<<endl;
    }

};

class circle:public shape{
public:
   void draw()override{
    cout<<"Drawing Circle"<<endl;
   }
};

class square:public shape{
public:
   void draw()override{
    cout<<"Drawing square"<<endl;
   }
};

int main(){
    shape* s1=new circle();
    shape* s2=new square();

    s1->display();
    s1->draw();

    s2->display();
    s2->draw();

    return 0;
}