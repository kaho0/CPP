#include<iostream>
using namespace std;
class student{
    string name;
    float cgpa;
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }
};
class user{
  int id;
  string username;
  string password;
  string bio;
  void deactivate()
  {
    cout<<"delete"<<endl;
  }
  void editBio(string newbio)
  {
    bio=newbio;
  }
};
int main()
{
    student s1;
    cout<<sizeof(s1);
    student s2;
    s1.name="Kahon binte zaman";
    cout<<s1.name<<endl;
    
}