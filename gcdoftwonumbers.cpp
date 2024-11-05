
#include <iostream>
using namespace std;
int gcdOfTwoNumbers(int a, int b)
{
  if (b == 0)
    return a;
  return gcdOfTwoNumbers(b, a % b);
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << gcdOfTwoNumbers(a, b);
  return 0;
}