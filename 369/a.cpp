#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int a, b;
  cin >> a >> b;
  int ans = 0;
  if ((a + b) % 2 == 0)
  {
    ans += 1;
  }
  if (a != b)
  {
    ans += 2;
  }
  cout << ans << endl;
}
