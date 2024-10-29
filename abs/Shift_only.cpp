#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  while (1)
  {
    int cnt = 0;
    rep(i, n)
    {
      if (a[i] % 2 == 0)
      {
        a[i] /= 2;
        cnt++;
      }
    }
    if (cnt == n)
    {
      ans++;
    }
    else
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
