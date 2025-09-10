#include<iostream>
using namespace std;

class vehicle{
public:
    void  display(int cc, string name){
        cout<<"Features and name of supercar: "<<name<<" "<<cc<<endl;
    }
};

class car:public vehicle{};
class supercar:public car{};

int main(){
    supercar sc;
    sc.display(4500,"GTR");

    return 0;
}