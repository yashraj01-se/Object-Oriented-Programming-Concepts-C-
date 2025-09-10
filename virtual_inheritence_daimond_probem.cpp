#include<iostream>
using namespace std;

class A{
public:
     void display(){
        cout<<"Class a";
     }
};

class B:virtual public A{};
class C:virtual public A{};

class D:public B, public C{};

int main(){
    D d;
    d.display();  // No Ambiguity Now... Daimond Problem Solved..
    //D has only one single copy of display from class A.
    return 0;
}
