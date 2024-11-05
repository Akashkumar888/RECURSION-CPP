#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
// base case 
if(i>j) return;
swap(s[i],s[j]);
i++;
j--;
reverse(s,i,j);
   
}
int main(){
    string str;
   getline(cin,str);
    int i=0;
    int j=str.size()-1;
    reverse(str,i,j);
    cout<<str;
    return 0;
}