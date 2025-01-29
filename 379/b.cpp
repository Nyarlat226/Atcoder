#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<char> a(n);
  rep(i, n) cin >> a[i];
  int cnt = 0, ans = 0;
  rep(i, n)
  {
    if (a[i] == 'O')
    {
      cnt++;
      if (cnt >= k)
      {
        ans++;
        cnt = 0;
      }
    }
    else
      cnt = 0;
  }
  cout << ans << endl;
  return 0;
}
