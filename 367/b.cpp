#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  double x;
  cin >> x;
  string s = to_string(x);
  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == '.')
    {
      s = s.substr(0, i);
      break;
    }
    else if (s[i] == '0')
    {
      s = s.substr(0, i);
    }
    else
    {
      break;
    }
  }
  cout << s << endl;
}
