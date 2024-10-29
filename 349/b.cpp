#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;

  map<char, int> mp;
  for (char c : s)
    mp[c]++;
  map<int, int> cnt2;
  for (auto p : mp)
    cnt2[p.second]++;
  for (auto p : cnt2)
  {
    if (p.second != 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
