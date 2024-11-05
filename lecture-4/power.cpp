#include<iostream>
#include<cmath>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
   else if(b%2!=0) return  a * pow(a,b/2)*pow(a,b/2) ;
   else return pow(a,b/2)*pow(a,b/2);

}

int main(){
    int a,b;
    cout<<"a ke power b is: ";
    cin>>a;
    cin>>b;
   cout<< power(a,b);
    return 0;
}