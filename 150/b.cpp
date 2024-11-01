#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
