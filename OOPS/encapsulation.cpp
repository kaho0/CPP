#include<iostream>
#include<string>
using namespace std;
class car{
    string name;
    string colour;
    public:
    // car(string nameVal,string colourVal)
    // {
    //     cout<<"constructor is called,object is being created"<<endl;
    //     // this->name=name;
    //     name=nameVal;
    //     colour=colourVal;
    // }
    car()
    {
        cout<<"constructor without param"<<endl;
    }
    car(string name,string colour)
    {
        cout<<"constructor is called,object is being created"<<endl;
        this->name=name;
        this-> colour=colour;
    }
    void start()
    {
        cout<<"Car has started"<<endl;
    }
    void stop()
    {
        cout<<"Car has stopped"<<endl;
    }
    //getter
    string getname()
    {
        return name;
    }
};
int main()
{
    car c0;
    car c1("maruti800","white");
    cout<<"Car name " <<c1.getname()<<endl;
}