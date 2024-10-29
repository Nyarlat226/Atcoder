#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, q;
  cin >> n >> q;
  vector<char> h(q);
  vector<int> t(q);

  rep(i, q) cin >> h[i] >> t[i];
  int l = 1;
  int r = 2;
  int rclock = 2;
  int rreverse = 2;
  int lclock = 1;
  int lreverse = 1;
  int ans = 0;
  rep(i, q)
  {
    if (h[i] == 'R')
    {
      int k = 0;
      int j = 0;
      while (rclock != t[i])
      {
        if (rclock == n)
        {
          rclock = 1;
        }
        else
        {
          rclock++;
        }
        if (rclock == l)
        {
          k = n + 1;
          break;
        }
        k++;
      }
      while (rreverse != t[i])
      {
        if (rreverse - 1 == 0)
        {

          rreverse = n;
        }
        else
        {
          rreverse--;
        }
        if (rreverse == l)
        {
          j = n + 1;

          break;
        }
        j++;
      }
      ans += min(k, j);
      r = t[i];
      rclock = r;
      rreverse = r;
    }
    if (h[i] == 'L')
    {
      int k = 0;
      int j = 0;
      while (lclock != t[i])
      {
        if (lclock == n)
        {
          lclock = 1;
        }
        else
        {
          lclock++;
        }
        if (lclock == r)
        {
          k = n + 1;
          break;
        }
        k++;
      }
      while (lreverse != t[i])
      {
        if (lreverse - 1 == 0)
        {

          lreverse = n;
        }
        else
        {
          lreverse--;
        }
        if (lreverse == r)
        {
          j = n + 1;
          break;
        }
        j++;
      }
      ans += min(k, j);
      l = t[i];
      lclock = l;
      lreverse = l;
    }
  }
  cout << ans << endl;
}
