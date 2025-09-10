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
    Engine *engine;   //Car HAS-A engine
    car(Engine *e):engine(e){}; //Engine is passed not owned;

    void carstart(){
        engine->start();
        cout<<"Car started"<<endl;
    }
};

int main(){
    Engine e;  // Engine is created
    car* c=new car(&e);   //Passed to the car...
    c->carstart(); 
}