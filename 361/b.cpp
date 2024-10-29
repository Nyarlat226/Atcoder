#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Point
{
  int x, y, z;
};
Point input()
{
  Point p;
  cin >> p.x >> p.y >> p.z;
  return p;
}

bool solve()
{
  Point l1 = input();
  Point r1 = input();
  Point l2 = input();
  Point r2 = input();
  if (r1.x <= l2.x || r2.x <= l1.x)
    return false;
  if (r1.y <= l2.y || r2.y <= l1.y)
    return false;
  if (r1.z <= l2.z || r2.z <= l1.z)
    return false;
  return true;
}
int main()
{
  if (solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
