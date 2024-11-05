
#include<iostream>
using namespace std;
int sumOfSquareOfNumbers(int n){
   if(n==0)return 0;
   return n*n + sumOfSquareOfNumbers(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sumOfSquareOfNumbers(n);
return 0;
}