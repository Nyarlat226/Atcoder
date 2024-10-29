#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  double n;
  cin >> n;
  vector<vector<int>> pos(n, vector<int>(2));
  double ans = 0;
  rep(i, n)
  {
    cin >> pos[i][0] >> pos[i][1];
  }
  for (int i = 0; i <= n; i++)
  {
    if (i == 0)
    {
      ans += sqrt(pow(0 - pos[i][0], 2) + pow(0 - pos[i][1], 2));
    }
    else if (i == n)
    {
      ans += sqrt(pow(pos[i - 1][0] - 0, 2) + pow(pos[i - 1][1] - 0, 2));
    }
    else
    {
      ans += sqrt(pow(pos[i - 1][0] - pos[i][0], 2) + pow(pos[i - 1][1] - pos[i][1], 2));
    }
  }
  cout << fixed << setprecision(15) << ans << endl;
}
