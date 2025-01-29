#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> sum(3010, -1);
  sum[a]++;
  sum[b]++;
  sum[c]++;
  sum[a + b]++;
  sum[a + c]++;
  sum[c + b]++;
  sum[a + c + b]++;
  rep(i, 3010)
  {
    if (sum[i] > 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
