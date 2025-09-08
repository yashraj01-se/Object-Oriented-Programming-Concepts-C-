#include<iostream>
using namespace std;

class student{
public:
    int age;
    student(int age){
        this->age=age;
    }
    void addage(int a , int b){
       cout<<"Age after 20 years: "<<age+a+b<<endl;
    }

    void addage(int a , int b ,int c){
        cout<<"Age after 30 years: "<<age+a+b+c<<endl;
    }
};

int main(){
    student s1(30);
    s1.addage(5,5);
    s1.addage(10,10,10);

    return 0;
}