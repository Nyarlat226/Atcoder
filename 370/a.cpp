#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  char L, R;
  string s;
  cin >> L >> R;
  s += L;
  s += R;

  if (s == "10")
  {
    cout << "Yes" << endl;
  }
  else if (s == "01")
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Invalid" << endl;
  }
}
