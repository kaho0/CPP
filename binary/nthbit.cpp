 #include<iostream>
 using namespace std;
 void updateIthBit(int num,int i,int val)
 {
    num=num&~(1<<i);
    num=num|(val<<i);
    cout<<num<<endl;
 }
 void clearBits(int num,int i)
 {
   num=num&((~0)<<i);
   cout<<num<<endl;
 }
 int main()
 {
    updateIthBit(7,2,0);
    clearBits(15,2);
 }