
#include<iostream>
using namespace std;
void rev(int i,string &s){
    if(i>=s.size())return;
    rev(i+1,s);
    cout<<s[i]<<" ";
}
int main()
{
    string s="akash kumar";
    rev(0,s);
return 0;
}