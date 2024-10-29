#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  int ans = 0;
  rep(i, n)
  {
    if (m < a[i])
      break;
    m -= a[i];
    ans++;
  }
  cout << ans << endl;
}
