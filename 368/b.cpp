#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }
  int ans = 0;
  while (1)
  {
    sort(a.rbegin(), a.rend());
    if (a[1] == 0)
      break;
    a[0]--, a[1]--, ans++;
  }
  cout << ans << endl;
}
