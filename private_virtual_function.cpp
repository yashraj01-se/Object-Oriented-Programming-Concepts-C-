#include <iostream>
using namespace std;

class parent
{
private:
    virtual void show()
    {
        cout << "Private virtual function show(Base class)" << endl;
    }

public:
    void showall()
    {
        show();
    }
};

class child : public parent
{
public:
    void show() override
    {
        cout << "show function(dereived class)" << endl;
    }
};

int main(){
    parent* p=new child();
    p->showall();

    delete p;
}