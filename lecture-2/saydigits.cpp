#include<iostream>
using namespace std;
void saydigit(string arr[],int n){
    if(n==0) return;
        int rem=n%10;
        n=n/10;
     // cout<<arr[rem]<<" ";
    saydigit(arr,n);
    cout<<arr[rem]<<" ";
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    cout<<endl;
    saydigit(arr,n);
    cout<<endl;
    return 0;
}