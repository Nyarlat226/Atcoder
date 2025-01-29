#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  int ans = 0;
  rep(i, n)
  {
    if (s[i] == '.')
      ans++;
  }
  ans += d;
  cout << ans << endl;
  return 0;
}
