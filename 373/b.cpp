#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  map<char, int> pos;
  rep(i, 26) pos[s[i]] = i;
  int ans = 0;
  rep(i, 25)
  {
    char from = 'A' + i;
    char to = from + 1;
    ans += abs(pos[from] - pos[to]);
  }
  cout << ans << endl;
}
