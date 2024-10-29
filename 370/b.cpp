#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cin >> a[i][j];
      a[i][j]--;
    }
  }
  int ans = 0;
  rep(k, n)
  {
    if (ans >= k)
      ans = a[ans][k];
    else
      ans = a[k][ans];
  }
  cout << ans + 1 << endl;
}
