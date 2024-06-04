#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string color;
    int *milage;
car(string name,string color)
{
  this->name=name;
  this->color=color;

  milage=new int;
  *milage=12;
}

car(const car &original)
{
    name=original.name;
    color=original.color;
    milage=new int;
    *milage=*(original.milage);
}
~car(){
    cout<<"deleting object";
    if(milage!=NULL)
   delete milage;
    milage=NULL;
}
};
int main()
{
    car c1("maruti 800","blue");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.milage<<endl;

}