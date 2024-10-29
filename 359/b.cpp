#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> a(n * 2);
  rep(i, n * 2) cin >> a[i];
  int ans = 0;
  for (int i = 0; i < n * 2; i++)
  {
    if (a[i] == a[i + 2])
    {
      ans++;
    }
  }
  cout << ans << endl;
}
