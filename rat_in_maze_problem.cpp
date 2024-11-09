#include <iostream>
#include <vector>
using namespace std;
void f(int i, int j, int n, string &s, vector<string> &ans, vector<vector<int>> &mat)
{
  if (i < 0 || j < 0 || i >= n || j >= n || mat[i][j] == 0)
    return;
  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(s);
    return;
  }
  int temp = mat[i][j];
  mat[i][j] = 0;

  s.push_back('U');
  f(i - 1, j, n, s, ans, mat);
  s.pop_back();

  s.push_back('D');
  f(i + 1, j, n, s, ans, mat);
  s.pop_back();

  s.push_back('L');
  f(i, j - 1, n, s, ans, mat);
  s.pop_back();

  s.push_back('R');
  f(i, j + 1, n, s, ans, mat);
  s.pop_back();

  mat[i][j] = temp;
}
int main()
{
  vector<vector<int>> mat = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
  vector<string> ans;
  int n = mat.size();
  string s = "";
  f(0, 0, n, s, ans, mat);
  for (string &str : ans)
  {
    cout << str << endl;
  }
  return 0;
}

