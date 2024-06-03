#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    string color;
    car(string name,string color)
    {
        this->name=name;
        this->color=color;
    }
    car(car &original)
    {
        cout<<"copying original to new\n";
        name=original.name;
        color=original.color;
    }

};
int main()
{
    car c1("Maruti 800","blue");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
}