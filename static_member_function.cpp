#include<iostream>
using namespace std;

class student{
private:
    static int age;
public:
    student(int age){
        student::age=age;
    }
    static void displayage(){
        cout<<"student age:"<<age<<endl;
    }
};

int student::age=0;

int main(){
    student s1(30);
    student::displayage();
    s1.displayage();
}