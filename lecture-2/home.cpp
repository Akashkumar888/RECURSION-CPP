#include<iostream>
using namespace std;
void home(int src,int dest){
    cout<<"sourse: "<<src<<" "<<"destination: "<<dest<<endl;
    if(src==dest){
        cout<<"puch gaye ghar"<<endl; 
        return ; // base case
    }
   src++;
     home(src,dest);  // recursive call
}
int main(){
    int dest=10;
    int src=1;
    cout<<endl;
    home(src,dest);
    return 0;
}