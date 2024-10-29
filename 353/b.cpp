#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int aki = k;
  int ans = 1;
  rep(i, n)
  {
    if (aki < a[i])
    {
      aki = k;
      ans++;
    }
    aki -= a[i];
  }
  cout << ans << endl;

  return 0;
}
