#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0 || x==1) return 1;
    
    int smallproblem=factorial(x-1);
    int bigproblem=x*(factorial(x-1));
    return bigproblem;

        //return x*(factorial(x-1));

}
int main(){
    int n;
    cin>>n;
    int k=factorial(n);
    cout<<k<<endl;
    return 0;
}