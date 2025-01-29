#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n)
  {
    cin >> a[i] >> b[i];
  }
  int mx = -1;
  rep(i, n)
  {
    mx = max(mx, b[i] - a[i]);
  }
  ll ans = mx;
  rep(i, n)
  {
    ans += a[i];
  }
  cout << ans << endl;
  return 0;
}
