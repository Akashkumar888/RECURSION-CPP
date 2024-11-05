#include<iostream>
using namespace std;
void count(int x){
    if(x==0) return ;

    count(x-1);
    
    cout<<x<<endl;

}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    count(n);
    return 0;
}