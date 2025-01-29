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
  int ans = 1;
  int max = 1;
  for (int i = 0; i < n; i++)
  {

    if (s[i] == '/')
    {
      int l = i;
      int r = i;
      while (1)
      {
        if (s[l - 1] == '1' && s[r + 1] == '2')
        {
          ans += 2;
          l--;
          r++;
          if (max < ans)
          {
            max = ans;
            if (l < 0 || r > n)
              break;
          }
        }
        else
        {
          ans = 1;
          break;
        }
      }
    }
  }
  cout << max << endl;
  return 0;
}
