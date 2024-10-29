#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int r, g, b;
  string c;
  cin >> r >> g >> b >> c;
  if (c == "Red")
  {
    if (g <= b)
    {
      cout << g << endl;
    }
    else
    {
      cout << b << endl;
    }
  }

  if (c == "Green")
  {
    if (r <= b)
    {
      cout << r << endl;
    }
    else
    {
      cout << b << endl;
    }
  }

  if (c == "Blue")
  {
    if (r <= g)
    {
      cout << r << endl;
    }
    else
    {
      cout << g << endl;
    }
  }
}
