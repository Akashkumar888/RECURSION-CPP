

#include <iostream>
#include <vector>
using namespace std;
int Josephus_problem(int n, int k)
{
  if(n==1)return 0;
  return (Josephus_problem(n-1, k) +k) %n;
}
int main()
{
  int n = 5;
  int k = 3;
  cout << Josephus_problem(n, k) + 1;

  return 0;
}

