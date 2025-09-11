#include <iostream>
using namespace std;

class Base
{
private:
    int age;

public:
    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
};

int main(){
    Base b;
    b.setage(30);
    int age=b.getage();
    cout<<age;
}