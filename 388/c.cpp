#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  sort(a.begin(), a.end());
  rep(i, n)
  {
    int j = a[i] / 2;
    ans += upper_bound(a.begin(), a.end(), j) - a.begin();
  }
  cout << ans << endl;
  return 0;
}
