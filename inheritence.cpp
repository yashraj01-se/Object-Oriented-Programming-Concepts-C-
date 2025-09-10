#include<iostream>
using namespace std;

class vehicle{
public:
    int tyres;
    string name;

    void display(){
        cout<<"Number of tyres: "<<tyres<<endl;
        cout<<"Name of the vehicle: "<<name<<endl;
    }
};

class car:public vehicle{
      
};

class bike:public vehicle{

};

int main(){
    bike b;
    b.name="GTR";
    b.tyres=2;
    b.display();

    cout<<"\n"<<endl;
    
    car c;
    c.name="Audi";
    c.tyres=4;
    c.display();

    return 0;
}