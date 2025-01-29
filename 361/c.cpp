#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = 1001001001;
  rep(l, k + 1)
  {
    int r = l + n - k - 1;
    int now = a[r] - a[l];
    ans = min(now, ans);
  }
  cout << ans << endl;
  return 0;
}
