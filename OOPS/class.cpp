#include<iostream>
#include<string>
using namespace std;
class Fruit{
    public:
    string name;
    string color;

};

int main()
{
  Fruit apple;///object
  apple.name="apple";
  apple.color="red";
  cout<< apple.name<<"--"<<apple.color ;
  Fruit *mango=new Fruit();
  mango->name="Mango";
  mango->color="Yellow";
  
  cout<<mango->name<<"--"<<mango->color<<endl;
}