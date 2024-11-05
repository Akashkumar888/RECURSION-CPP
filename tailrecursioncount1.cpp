#include<iostream>
using namespace std;
void count(int x){
    if(x==0) return ;
    cout<<x<<endl;
    count(x-1);

}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    count(n);
    return 0;
}