#include<iostream>
using namespace std;

class Electronics{
public: 
     void menu(){
        cout<<"Phone: "<<endl;
     }
};
class airpods{
public: 
      void connect(){
        cout<<"Airpods is connected"<<endl;
      }
};

class Baterry{
public:
      void batteryon(){
        cout<<"Battery is Ok:Phone is started"<<endl;
      }
};

class Phone:public Electronics{
public:
       Baterry b;       //Battery created when phone object was crested...
       airpods * Aip;   //Just a pointer pointing to airpod address passed to this class...
       Phone(airpods*a):Aip(a){};
    
       void phonestart(){
           b.batteryon();
           Aip->connect();
           cout<<"Your Phone is connected to Airpod 300"<<endl;
       }
};

int main(){
    airpods a;
    Phone *p=new Phone(&a);
    p->menu();
    p->phonestart();

    return 0;
}