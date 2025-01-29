#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;

  vector<string> s = {"#"};
  rep(i, n)
  {
    int m = s.size(), m3 = m * 3;
    vector<string> t(m3, string(m3, '.'));
    rep(j, m3) rep(k, m3) t[j][k] = s[j % m][k % m];
    rep(j, m) rep(k, m) t[m + j][m + k] = '.';
    swap(s, t);
  }

  rep(i, s.size()) cout << s[i] << endl;
  return 0;
}
