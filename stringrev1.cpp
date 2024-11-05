
#include<iostream>
using namespace std;
void printrev(int i,string &str,string &s){
  if(i>=str.size())return;
  printrev(i+1,str,s);
  s+=str[i];
}
int main()
{
  string str="akash kumar";
  string s="";
  printrev(0,str,s);
  cout<<s<<endl;
return 0;
}