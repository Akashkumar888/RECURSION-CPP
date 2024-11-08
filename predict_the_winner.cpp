
#include <iostream>
#include <vector>
using namespace std;
int Josephus_problem(int i, vector<bool> &circle, int n, int k, int person_left)
{
  if (person_left == 1)
  {
    for (int i = 0; i < n; i++)
    {
      if (circle[i] == 0)
      {
        return i + 1;
      }
    }
  }
  int kill =( k - 1)%person_left;
  while (kill--)
  {
    i = (i + 1) % n;
    while (circle[i] == 1)
    {
      i = (i + 1) % n;
    }
  }
  circle[i] = 1;
  while (circle[i] == 1)
  {
    i = (i + 1) % n;
  }
  return Josephus_problem(i , circle, n, k, person_left - 1);
}
int main()
{
  int n = 5;
  int k = 3;
  vector<bool> circle(n, 0);
  cout << Josephus_problem(0, circle, n, k, n);

  return 0;
}

