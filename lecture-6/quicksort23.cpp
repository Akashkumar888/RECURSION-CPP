#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
int pivot=a[s];
int count=0;
for(int i=s+1;i<=e;i++){
    if(pivot>=a[i]){
        count++;
    }
}
// place pivot at right place
int pivotindex=s+count;
swap(a[s],a[pivotindex]);
// check left element is less and right element is greater
int i=s;
int j=e;
while(i<pivotindex && pivotindex<j){

    while(a[i]<=pivot){
        i++;
    }

    while(a[j]>pivot){
        j--;
    }
    
    if(i<pivotindex && pivotindex<j){
        swap(a[i++],a[j--]);
    }
} 
return pivotindex;
}

 void quicksort(int a[],int s,int e){
    // base case
 if(s>=e) return;


 // partition
int p = partition(a,s,e);
// left part sort
quicksort(a,s,p-1);
// right part sort
quicksort(a,p+1,e);

}
int main(){
  int a[]={5,4,3,2,1};
  int n=sizeof(a)/4;
  int i=0;
  int j=n-1;
  quicksort(a,i,j);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
    return 0;
}