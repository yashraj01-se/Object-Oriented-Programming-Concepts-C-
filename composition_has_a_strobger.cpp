#include<iostream>
using namespace std;

class Engine{
public: 
      void start(){
        cout<<"Engine starts"<<endl;
      }
};

class car{
public:
    Engine engine;   //Car is creating its engine...

    void carstart(){
        engine.start();
        cout<<"Car started"<<endl;
    }
};

int main(){
    car c;
    c.carstart();
}