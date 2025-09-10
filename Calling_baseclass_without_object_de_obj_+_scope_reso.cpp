#include<iostream>
using namespace std;

class vehicle{
public:
      static void display(){
        cout<<"Base method called with static"<<endl;
      }
      void dispaly_without_static(){
        cout<<"Base Method called Without static"<<endl;
      }
};

class car:public vehicle{
public:
      void display(){
        cout<<"Dereived method called"<<endl;
      }
};

int main(){
    car c;
    c.vehicle::display();    // Derieved class object+ scope resolution to get base class method without base class object..
    c.vehicle::dispaly_without_static(); 
}