#include<iostream>
using namespace std;

class student{
private:
     int age;
public:
    virtual void display(){
        cout<<"Base class called";
    }  
};

class studentdata:public student{
public:
    void display(){
        cout<<"Derieved class called";
    }
};

int main(){
    student* s1;
    studentdata s2;
    s1=&s2;//Base class pointer pointing to derieved object.
    s1->display();  //Since virtual keyword is used it is runtime binding.
}