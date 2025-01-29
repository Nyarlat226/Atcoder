#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  ll n, m;
  cin >> n >> m;
  set<pair<int, int>> s;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    s.insert({a, b});
    for (int i : {-1, 1})
    {
      for (int j : {-2, 2})
      {
        s.insert({a + i, b + j});
        s.insert({a + j, b + i});
      }
    }
  }

  ll ans = n;
  ans *= n;
  for (auto [x, y] : s)
  {
    if (1 <= x && 1 <= y && x <= n && y <= n)
      ans--;
  }
  cout << ans << endl;
  return 0;
}
