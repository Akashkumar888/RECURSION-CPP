
#include<iostream>
using namespace std;
string upper_to_lower(string &s,int i){
if(i<0)return "";
if(s[i]>='A' && s[i]<='Z'){
  return upper_to_lower(s,i-1) + char(s[i]- 'A' + 'a');
}
return upper_to_lower(s,i-1) + s[i];
}
string lower_to_upper(string &s,int i){
if(i<0)return "";
if(s[i]>='a' && s[i]<='z'){
  return lower_to_upper(s,i-1) + char(s[i]- 'a' + 'A');
}
return lower_to_upper(s,i-1) + s[i];
}
int main()
{
  string str="priya yadav";
  string s="AKASH KUMAR";
  int n=str.size();
  int m=s.size();
  cout<<lower_to_upper(str,n-1)<<endl;
  cout<<upper_to_lower(s,m-1);
return 0;
}
