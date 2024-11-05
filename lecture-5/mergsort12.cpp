#include<iostream>
using namespace std;
                         // o(n*log(n))  fastest best sorting 
void merge(int a[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy for element
    int k=s;

    for(int i=0;i<len1;i++){
        first[i]=a[k++];
    }
     k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=a[k++];
    }
    // merge to sorted array
    int index1=0;
    int index2=0;
    k=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
        a[k++]=first[index1++];
        }
        else{
            a[k++]=second[index2++];
        }
    }

    while(index1<len1){
        a[k++]=first[index1++];
    }
    
     while(index2<len2){
        a[k++]=second[index2++];
    }
    // for delete space 
    delete []first;
    delete []second;
}
void mergesort(int a[],int s,int e){
    // base case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    // left part
    mergesort(a,s,mid);

    // right part
    mergesort(a,mid+1,e);
    
    // merge both array
    merge(a,s,e);

    }

int main(){
    int a[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/4;
    int i=0;
    int j=n-1;
    mergesort(a,i,j);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}