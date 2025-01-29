#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  ll x, y;
  cin >> n >> x >> y;

  vector<int> a(n);
  vector<int> b(n);
  rep(i, n)
  {
    cin >> a[i];
  }
  rep(i, n)
  {
    cin >> b[i];
  }

  int ans = 0;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  rep(i, n)
  {
    ans++;
    x -= a[i];
    y -= b[i];
    if ((x < 0) || (y < 0))
    {
      cout << ans << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
