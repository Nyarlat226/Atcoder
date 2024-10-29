#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int r;
  cin >> r;

  if (r <= 99)
  {
    cout << 100 - r << endl;
  }
  else if (r <= 199)
  {
    cout << 200 - r << endl;
  }
  else if (r <= 299)
  {
    cout << 300 - r << endl;
  }
}
