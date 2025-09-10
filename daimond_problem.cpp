#include<iostream>
using namespace std;

class A{
public:
      void display(){
        cout<<"class A"<<endl;
      } 
};

class B:public A{};
class C:public A{};

class D:public B, public C{};

int main(){
    D d;
    // d.display();  // ❌ Ambiguity: Two copies of A in D (through B and C)
    d.B::display();   // Scope resolution operator solution...
    d.C::display();

    // But using the Scope resolution operator only remove the ambiguity.It does
    // not solve the daimond problem, As still the dereived class D cantains two copies of display method from class A throgh class B and C.

}