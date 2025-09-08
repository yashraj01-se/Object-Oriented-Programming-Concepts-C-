#include <iostream>
using namespace std;

class parent
{
public:
    string hair;
    int age;
    parent(string hair, int age)
    {
        this->hair = hair;
        this->age = age;
    }

    virtual void properties()
    {
        cout << "Parent properties: " << hair << " " << age << endl;
    }
};

class child : public parent
{
public:
    child(string hair, int age) : parent(hair, age)
    {
        this->hair = hair;
        this->age = age;
    }

    void properties()
    {
        cout << "Child properties: " << hair << " " << age << endl;
        parent::properties(); //to access parent class properties also.
    }

    
};

int main(){
    parent* p;
    child c("black",10);
    p=&c;
    p->properties();
}