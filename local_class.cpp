#include<iostream>
using namespace std;

void fun(){
    class Base{
        public:
             void show(){
                cout<<"I am a local class inside a function"<<endl;
        }
    };
    Base b;
    b.show();
};

int main(){
    fun();
    return 0;
}