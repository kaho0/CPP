#include<iostream>
#include<string>
using namespace std;
class user{
    private:
    int id;
    string pass;
    public:
    string username;
    user(int id)
    {
        this->id;

    }
    string getpass()
    {
        return pass;
    }
    void setpass(string pass)
    {
        this->pass=pass;}
};
int main()
{
    user user1(101);
    user1.username="Kahon";
    user1.setpass("abcdef");
    cout<<user1.username<<endl;
    cout<<user1.getpass()<<endl;
}