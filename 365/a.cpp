#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int a, b;
  cin >> a >> b;
  if (a == b)
  {
    cout << -1 << endl;
    return 0;
  }
  if (max(a, b) == 3 && min(a, b) == 1)
  {
    cout << 2 << endl;
  }
  else if (max(a, b) == 2 && min(a, b) == 1)
  {
    cout << 3 << endl;
  }
  else
  {
    cout << 1 << endl;
  }
}
