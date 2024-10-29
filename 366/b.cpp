#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  int maxsize = 0;
  rep(i, n)
  {
    cin >> s[i];
  }
  rep(i, n)
  {
    maxsize = max(maxsize, (int)s[i].size());
  }
  vector<string> t(maxsize, string(n, '*'));
  rep(i, n)
  {
    rep(j, s[i].size())
    {
      t[j][n - 1 - i] = s[i][j];
    }
  }
  rep(i, maxsize)
  {
    while (t[i].back() == '*')
    {
      t[i].pop_back();
    }
    cout << t[i] << endl;
  }
}
