#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  vector<vector<bool>> b(n, vector<bool>(n, false));
  rep(i, n)
  {
    rep(j, n)
    {
      cin >> a[i][j];
      if (a[i][j] == '.')
      {
        b[i][j] = true;
      }
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    // int x,y = i;
    for (int j = i; j < n + 1 - 1; j++)
    {
      if (b[i][j] == true)
      {
        b[i][j] = false;
      }
      else
      {
        b[i][j] = true;
      }
    }
  }
  rep(i, n)
  {
    rep(j, n)
    {
      if (b[i][j] == true)
      {
        cout << '.';
      }
      else
      {
        cout << '#';
      }
    }
    cout << endl;
  }
}
