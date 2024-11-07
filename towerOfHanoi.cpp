
#include<iostream>
using namespace std;
void towerOfHanoi(int n,int src,int helper,int dest){
if(n==1){
  cout<<"Mov disk "<<n<<" from "<<src<<" to "<<dest<<endl;
  return;
}

towerOfHanoi(n-1,src,dest,helper);
cout<<"Mov disk "<<n<<" from "<<src<<" to "<<dest<<endl;
towerOfHanoi(n-1,helper,src,dest);

}
int main()
{
int n=3;
int src=1;
int helper=2;
int dest=3;
towerOfHanoi(n,src,helper,dest);
return 0;
}
