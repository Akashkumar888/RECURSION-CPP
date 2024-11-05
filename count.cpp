#include<iostream>
using namespace std;
int count(int x){
    if(x==0) return 1;
    cout<<x<<endl;
    return count(x-1);

}
int main(){
    int n;
    cin>>n;
   count(n);
    //cout<<ans<<endl;
    return 0;
}