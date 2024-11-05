
#include<iostream>
#include<vector>
using namespace std;
void generate(int open,int close,int n,string s,vector<string>&ans){
    if(open+close==2*n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        s.push_back('(');
        generate(open+1,close,n,s,ans);
        s.pop_back();
    }
    if(close<open){
        s.push_back(')');
        generate(open,close+1,n,s,ans);
        s.pop_back();
    }
}
int main()
{
int n=3;
 vector<string>ans;
generate(0,0,n,"",ans);
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" ";
}
return 0;
}