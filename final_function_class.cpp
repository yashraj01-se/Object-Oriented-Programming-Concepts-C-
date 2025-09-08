#include <iostream>
using namespace std;

class student //final
{
public:
    virtual void display()// final
    {
        cout << "Base class" << endl;
    }
};
// class stdentdata:public student{

// } not allowed...

class studentdata:public student{
public:
     void display(){
        cout<<"Dereived class";
     }
};

int main(){
    student *s1=new student();
    studentdata *s2=new studentdata();

    s1->display();
    s2->display();

    return 0;
}

