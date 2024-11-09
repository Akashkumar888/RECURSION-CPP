
#include<iostream>
#include<vector>
using namespace std;
void f(int n,string &s,vector<string>&ans,int one,int zero){
    if(one+zero==n){
        ans.push_back(s);
        return;
    }
    if(one<n) {
        // because time complexity string &s o(1) then i use push and pop function
    s.push_back('1');
    f(n,s,ans,one+1,zero);
    s.pop_back();
    }
    if(zero<one) {
    s.push_back('0');
    f(n,s,ans,one,zero+1);
    s.pop_back();
    }
}
int main()
{
  int n;
  cin>>n;
vector<string>ans;
	    string s; // auto matic it is empty string 
	    f(n,s,ans,0,0);
	    for(auto &s:ans){
        cout<<s<<endl;
      }
return 0;
}
