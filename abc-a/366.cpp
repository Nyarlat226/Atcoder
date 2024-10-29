#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, t, a;
  cin >> n >> t >> a;
  if (n - (a + t) > abs(a - t) || n - (a + t) > abs(t - a))
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}
