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
  int cnt = 0;
  reverse(s.begin(), s.end());
  rep(i, n)
  {
    if (s[i] == '@')
    {
      s.replace(i, 1, ".");
      cnt++;
      if (cnt == d)
      {
        break;
      }
    }
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
