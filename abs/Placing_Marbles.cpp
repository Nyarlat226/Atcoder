#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s;
  cin >> s;
  int ans = 0;
  rep(i, 3)
  {
    if (s[i] == '1')
      ans++;
  }
  cout << ans << endl;
  return 0;
}
