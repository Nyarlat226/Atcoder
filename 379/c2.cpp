#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  ll n;
  int m;
  cin >> n >> m;
  vector<int> x(m), a(m);
  int ans = 0;
  rep(i, m)
  {
    cin >> x[i];
  }
  vector<int> b(m, 0);
  rep(i, m)
  {
    b[i] = b[i - 1] + x[i];
  }
  rep(i, m) cin >> a[i];
  if (x[1] != 0)
  {
    cout << -1 << endl;
    return 0;
  }

  return 0;
}
