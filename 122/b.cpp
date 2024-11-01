#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s;
  cin >> s;
  int cnt = 0;
  int max = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
    {
      cnt++;
      if (cnt > max)
      {
        max = cnt;
      }
    }
    else
    {
      cnt = 0;
    }
  }
  cout << max << endl;
  return 0;
}
