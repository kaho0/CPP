#include<iostream>
#include<string>
using namespace std;
class student{
     string name;
    float cgpa;
        public:
   
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }
    //setters
    void setName(string nameVal){
        name=nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa=cgpaVal;
    }
    //getters
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
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
    s1.setName("KAhon");
    s1.setCgpa(9.1);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;

}