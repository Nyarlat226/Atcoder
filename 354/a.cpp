#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int h;
  cin >> h;

  int cnt = 0;
  for (int i = 1; i <= h; i++)
  {
    cnt += pow(2, i);
    if (cnt >= h)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
