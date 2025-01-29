#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int Check(int n)
{
  int yaku = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      yaku++;
  }
  return yaku;
}

int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  int ans = 0;
  for (int i = 1; i <= n; i += 2)
  {
    cnt = Check(i);
    if (cnt == 8)
      ans++;
  }

  cout << ans << endl;
  return 0;
}
