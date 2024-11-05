#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int binarysearch(int arr[],int s,int e,int k){
    cout<<endl;
    print(arr,s,e);
    // base case
    if(s>e) return -1;

    int mid=(s+e)/2;
    cout<<"value of mid is: "<<arr[mid]<<endl;
    if(arr[mid]==k) return mid;

    else if (arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){ 
    int arr[]={4,2,10,6,18,14};
    int n=sizeof(arr)/4;

    // for sorting
    
    sort(arr,arr+n);

    // 2,4,6,10,14,18

    int i=0;
    int j=n-1;
    int k;
    cin>>k;
    int ans=binarysearch(arr,i,j,k);
   cout<<ans<<endl;
    return 0;
}