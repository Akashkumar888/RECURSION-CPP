#include<iostream>
using namespace std;
int power(int x){
    if(x==0) return 1;
    
    int smallproblem=power(x-1);
    int bigproblem = 2*(power(x-1));
    return bigproblem;

        //return x*(factorial(x-1));

}
int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}