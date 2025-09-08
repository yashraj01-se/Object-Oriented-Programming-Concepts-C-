#include<iostream>
using namespace std;

class student{
public:
    int age;
    explicit student(int age){
        this->age=age;
    }
    void display(){
        cout<<"Student age: "<<age<<endl;
    }
};

int main(){
    // student s1=24;  // implicit conversion of argument to an object... not allowed this time...
    student s1(23);
    s1.display();
}