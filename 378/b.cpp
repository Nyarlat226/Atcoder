#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(2));
  rep(i, n)
  {
    rep(j, 2)
    {
      cin >> a[i][j];
    }
  }
  int q;
  cin >> q;
  vector<vector<int>> b(q, vector<int>(2));
  rep(i, q)
  {
    rep(j, 2)
    {
      cin >> b[i][j];
    }
  }
  rep(i, q)
  {
    int ans = 0;
    while (b[i][1] % a[b[i][0] - 1][0] != a[b[i][0] - 1][1])
    {
      b[i][1] = b[i][1] + 1;
    }
    cout << b[i][1] << endl;
  }
  return 0;
}
