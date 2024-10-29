#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  string ans;
  for (char c : s)
  {
    if (c == '.')
      continue;

    ans += c;
  }
  cout << ans << endl;
}
