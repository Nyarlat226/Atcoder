#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a.begin(), a.end());
  int ans = 0;
  rep(i, 3)
  {
    if (a[i] == a[i + 1])
    {
      ans++;
      a[i] = -1;
      a[i + 1] = -1;
    }
  }
  cout << ans << endl;
  return 0;
}
