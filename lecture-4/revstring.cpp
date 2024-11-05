#include<iostream>
using namespace std;
void reverse(string s,int n){

    // int n=s.size();
    
    if(n==-1) return ;
    cout<<s[n];
    return reverse(s,n-1);
}
int main(){
    string str;
    cin>>str;
    int k=str.size();
    reverse(str,k);
    return 0;
}