#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ans = n;
  for (int i = 0; i < (1 << n); i++)
  {
    vector<bool> exist(m, false);
    for (int j = 0; j < n; j++)
    {
      if (!(i & (1 << j)))
        continue;
      for (int k = 0; k < m; k++)
      {
        if (s[j][k] == 'o')
          exist[k] = true;
      }
    }
    bool ok = true;
    for (int j = 0; j < m; j++)
      if (!exist[j])
        ok = false;

    if (ok)
      ans = min(ans, __builtin_popcount(i));
  }
  cout << ans << endl;
  return 0;
}
