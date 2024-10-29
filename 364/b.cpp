#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int h, w;
  cin >> h >> w;
  int i, j;
  cin >> i >> j;
  i--;
  j--;

  vector<vector<char>> c(h, vector<char>(w));
  rep(k, h)
  {
    rep(l, w)
    {
      cin >> c[k][l];
    }
  }
  string x;
  cin >> x;
  rep(k, x.size())
  {
    if (x[k] == 'U' && i > 0)
    {
      if (c[i - 1][j] != '#')
      {
        i--;
      }
    }
    if (x[k] == 'D' && i < h - 1)
    {
      if (c[i + 1][j] != '#')
      {
        i++;
      }
    }
    if (x[k] == 'L' && j > 0)
    {
      if (c[i][j - 1] != '#')
      {
        j--;
      }
    }
    if (x[k] == 'R' && j < w - 1)
    {
      if (c[i][j + 1] != '#')
      {
        j++;
      }
    }
  }
  cout << i + 1 << " " << j + 1 << endl;
}
