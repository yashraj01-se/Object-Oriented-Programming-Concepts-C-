#include <iostream>
using namespace std;

class studentclass
{
    int age;

public:
    studentclass(int age)
    {
        this->age = age;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }

    ~studentclass()
    {
        cout << "Studentclass destructor is called" << endl;
    }
};

int main()
{
    studentclass s1(25); // Object is created on stack.
    s1.display();        // no need to call the destructor, automatically called.

    studentclass *s2 = new studentclass(30); // Object created on heap.
    s2->display();
    delete s2; // same
    return 0;
}