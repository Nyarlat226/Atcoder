#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  rep(i, n) cin >> s[i] >> t[i];
  int ans = 0;
  rep(i, n) ans += t[i];
  sort(s.begin(), s.end());

  ans = ans % n;
  cout << s[ans] << endl;
  return 0;
}
