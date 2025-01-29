#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int q;
  cin >> q;
  vector<int> c(1000001);
  int ans = 0;
  rep(i, q)
  {
    int x;
    cin >> x;
    if (x == 1)
    {
      int y;
      cin >> y;
      if (c[y] == 0)
      {
        ans++;
      }
      c[y]++;
    }
    if (x == 2)
    {
      int y;
      cin >> y;
      c[y]--;
      if (c[y] == 0)
      {
        ans--;
      }
    }
    if (x == 3)
    {
      cout << ans << endl;
    }
  }
  return 0;
}
