#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array is "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int *arr,int k,int m){
    print(arr,k);
if(k==0) return false;

if(arr[0]==m) return true;
else{
    return linearsearch(arr+1,k-1,m);
}
}
int main(){
    int arr[]={3,5,1,2,6};
    int n=sizeof(arr)/4;
    int m;
    cin>>m;
    bool ans=linearsearch(arr,n,m);
    if(ans) cout<<"present";
    else cout<<"absent";
    return 0;
}