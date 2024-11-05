


#include<iostream>
using namespace std;
void even(int n){
if(n<2)return;
cout<<n<<endl;
even(n-2);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%2)n--;
    even(n);
return 0;
}