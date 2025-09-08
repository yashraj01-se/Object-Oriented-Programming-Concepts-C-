#include <iostream>
using namespace std;

class parent
{
public:
    virtual void hello() { cout << "parent virtual hello" << endl; }
    inline void greet() { cout << "parent inline greetings" << endl; }
};

class child : public parent
{
public:
    void hello() { cout << "child virtual hello" << endl; }
    void greet() { cout << "child inline greet" << endl; }
};

int main(){
    parent *p=new child();
    p->hello();
    p->greet();

    parent p1;
    p1.greet();

    delete p;
}