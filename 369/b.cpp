#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  int l = -1, r = -1;
  int ans = 0;
  rep(i, n)
  {
    int a;
    char s;
    cin >> a >> s;
    if (s == 'L')
    {
      if (l != -1)
        ans += abs(l - a);
      l = a;
    }
    else
    {
      if (r != -1)
        ans += abs(r - a);
      r = a;
    }
  }
  cout << ans << endl;
}
