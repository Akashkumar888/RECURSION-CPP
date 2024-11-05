#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    cout<<"call recieved for s: "<<s<<endl;
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
   cout<<endl;
    int i=0;
    int j=str.size()-1;
    reverse(str,i,j);
    cout<<endl;
    cout<<str;
    return 0;
}