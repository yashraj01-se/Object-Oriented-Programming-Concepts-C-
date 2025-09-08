#include<iostream>
using namespace std;

class student{
public:
    int age;
    student(int age){
        this->age=age;
    }
    void display(){
        cout<<"Student age: "<<age<<endl;
    }
};

int main(){
    student s1=24;  // implicit conversion of argument to an object...
    s1.display();
}