#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

 bool binarysearch(int arr[],int s,int e,int k){
    cout<<endl;
    print(arr,s,e);
    // base case
    if(s>e) return false;

    int mid=(s+e)/2;
    cout<<"value of mid is: "<<arr[mid]<<endl;
    if(arr[mid]==k) return true;

    else if (arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[]={2,4,6,10,14,18};
    int n=sizeof(arr)/4;
    int i=0;
    int j=n-1;
    int k;
    cin>>k;
    bool ans=binarysearch(arr,i,j,k);
    if(ans) cout<<"present";
    else cout<<"absent";
    return 0;
}