#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  int i, j;
  cin >> s;
  i = s.find("R");
  j = s.find("M");
  if (i < j)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
