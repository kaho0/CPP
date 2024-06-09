#include<iostream>
#include<string>
#include <unordered_set>
using namespace std;
string gender(const string& username){
    unordered_set<char>distinctCharacters(username.begin(),username.end());
    return(distinctCharacters.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
}
int main() {
    string username;
    cin >> username;
    cout << gender(username) << endl;
    return 0;
}