#include<iostream>
using namespace std;
void binary(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    binary(s+'0',n);
    if(s=="")binary(s+'1',n);
    else if(s[s.size()-1]=='0') binary(s+'1',n);
}
int main(){
    int n;
    cin>>n;
    binary("",n);
    return 0;
}