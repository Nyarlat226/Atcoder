#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, c;
  cin >> n >> c;
  vector<int> t(n);

  rep(i, n) cin >> t[i];
  int bf = t[0];
  int ans = 0;
  rep(i, n)
  {
    if (i == 0 || (t[i] - bf >= c))
    {
      ans++;
      bf = t[i];
    }
  }
  cout << ans << endl;
  return 0;
}
