#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  vector<vector<bool>> a(8, vector<bool>(8, true));
  rep(i, 8)
  {
    string s;
    cin >> s;
    rep(j, 8)
    {
      if (s[j] == '#')
        rep(k, 8)
        {
          a[k][j] = false;
          a[i][k] = false;
        }
    }
  }
  int cnt = 0;
  rep(i, 8) rep(j, 8) if (a[i][j]) cnt++;
  cout << cnt << endl;
  return 0;
}
