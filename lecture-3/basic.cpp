#include<iostream>
using namespace std;
bool issort(int arr[],int n){
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    else {
    bool akash = issort(arr+1,n-1);
    return akash;
    } 
}
int main(){
    int arr[]={2,4,6,9,11,13,13};
    int n=sizeof(arr)/4;
    bool ans=issort(arr,n);
    if(ans){
        cout<<"Sorted";
    }
    else cout<<"Not sorted";
    return 0;
}