#include<iostream>
using namespace std;
bool pallindrome(string &s,int i,int j){
    
// base case 
if(i>j) return true;
if(s[i]!=s[j]) return false;
i++;
j--;
 return pallindrome(s,i,j);
}

int main(){
    string str;
   getline(cin,str);
    int i=0;
    int j=str.size()-1;
    bool ans=pallindrome(str,i,j);
    if(ans)cout<<"valid pallindrome";
    else cout<<"Not pallindrome";
    return 0;
}