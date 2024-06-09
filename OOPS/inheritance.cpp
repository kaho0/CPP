#include<iostream>
using namespace std;
class Parent{
 public:
 Parent(){
    cout<<"parent class:"<<endl;
 }
};
 class Child:public Parent{
    public:
    Child(){
        cout<<"child class"<<endl;
    }
 };
 class GrandCHild:public Child{
    public:
    GrandCHild(){
        cout<<"GRandchild class"<<endl;
    }
 };
int main()
{
    GrandCHild gc;
}