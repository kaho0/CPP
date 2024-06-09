#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"parent"<<endl;
    }
};
class child1:public parent{ 
    public:
    child1(){
    cout<<"child 1?"<<endl;
    }
};
class child2:public parent{
    public:
    child2(){
        cout<<"child2"<<endl;
    }
};
class grandchild:public child1,public child2{
   public:
    grandchild(){
        cout<<"grandChild"<<endl;
    }
};
int main()
{
    grandchild c;
}