#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  string s;

  cin >> n;

  bool sweet = false;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    cnt++;
    if (s == "sweet")
    {
      if (sweet)
      {
        break;
      }
      sweet = true;
    }
    else
    {
      sweet = false;
    }
  }
  if (cnt == n)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
