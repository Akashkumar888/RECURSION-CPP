
#include<iostream>
using namespace std;
int count_vowels(string &s,int i){
if(i<0){
 return 0;
}
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
  return 1+count_vowels(s,i-1);
}
return count_vowels(s,i-1);
}
int main()
{
  string str="akash kumar priya yadav";
  int n=str.size();
  cout<<count_vowels(str,n-1);
return 0;
}