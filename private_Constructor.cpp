#include<iostream>
using namespace std;

class student{
private:
   int age;
   student(int age){
    this->age=age;
   }
public:
   static student createStudent(int a){
          return student(a);   //Returns a new object of the class Student //static to create object in a contolled way...
   }
   void display(){
    cout<<"Student age: "<<age<<endl;
   }
};

int main(){
    //student s1(56); // not allowed;
    student s1=student::createStudent(30);
    s1.display();
}