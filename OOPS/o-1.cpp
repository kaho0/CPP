#include<iostream>
using namespace std;
class student{
        public:
    string name="KAhon";
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
    cout<<sizeof(s1)<<endl;
    student s2;
    s1.name="Kahon binte zaman";
    cout<<s1.name<<endl;
    s1.cgpa=9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    cout<<s1.name<<endl;

}