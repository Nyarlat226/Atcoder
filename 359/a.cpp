#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    if (s[i] == "Takahashi")
    {
      ans++;
    }
  }
  cout << ans << endl;
}
