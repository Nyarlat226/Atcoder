#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  long long n, m;
  cin >> n >> m;
  vector<vector<int>> board(n, vector<int>(n, 1));
  vector<int> a(m), b(m);
  rep(i, m)
  {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    // board[a[i]][b[i]] = false;
    // board[b[i]][a[i]] = false;
  }
  rep(i, m)
  {
    if (a[i] + 1 < n)
    {
      if (b[i] + 2 < n)
      {
        board[a[i] + 1][b[i] + 2] = false;
      }
      if (b[i] - 2 >= 0)
      {
        board[a[i] + 1][b[i] - 2] = false;
      }
    }
    if (a[i] + 2 < n)
    {
      if (b[i] + 1 < n)
      {
        board[a[i] + 2][b[i] + 1] = false;
      }
      if (b[i] - 1 >= 0)
      {
        board[a[i] + 2][b[i] - 1] = false;
      }
    }
    if (a[i] - 1 >= 0)
    {
      if (b[i] + 2 < n)
      {
        board[a[i] - 1][b[i] + 2] = false;
      }
      if (b[i] - 2 >= 0)
      {
        board[a[i] - 1][b[i] - 2] = false;
      }
    }
    if (a[i] - 2 >= 0)
    {
      if (b[i] + 1 < n)
      {
        board[a[i] - 2][b[i] + 1] = false;
      }
      if (b[i] - 1 >= 0)
      {
        board[a[i] - 2][b[i] - 1] = false;
      }
    }
  }
  long long cnt = 0;
  rep(i, n) rep(j, n) if (board[i][j]) cnt++;
  cout << cnt << endl;
  return 0;
}
