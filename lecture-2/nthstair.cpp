#include<iostream>
using namespace std;
int stair(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    return stair(n-1) + stair(n-2);
}
int main(){
    int k;
    cin>>k;
    cout<<stair(k);
    return 0;
}