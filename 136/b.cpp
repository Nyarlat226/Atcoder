#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    string j = to_string(i);
    if (j.size() % 2 != 0)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
