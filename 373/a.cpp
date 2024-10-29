#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int ans = 0;
  for (int i = 1; i <= 12; i++)
  {

    string s;
    cin >> s;
    // stringの長さを取るときは.size()を使う
    if (s.size() == i)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
