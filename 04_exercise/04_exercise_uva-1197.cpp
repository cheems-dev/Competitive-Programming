#include <iostream>

using namespace std;

const int MAXV = 30010;

int parent[MAXV], ranks[MAXV];

void makeSet(int n)
{
  for (int i = 0; i < n; i++)
    parent[i] = i, ranks[i] = 0;
}

int findSet(int x)
{
  return (x == parent[x] ? x : parent[x] = findSet(parent[x]));
}

bool unionSet(int x, int y)
{
  x = findSet(x), y = findSet(y);

  if (x != y)
  {
    if (ranks[x] > ranks[y])
      parent[y] = x;
    else
    {
      parent[x] = y;
      if (ranks[x] == ranks[y])
        ranks[y]++;
    }
    return true;
  }
  return false;
}

int main(int argc, char *argv[])
{

  int n, m, k, z1, z2;
  while (cin >> n >> m, n > 0)
  {
    makeSet(n);
    for (int i = 1; i <= m; i++)
    {
      cin >> k >> z1;
      for (int j = 2; j <= k; j++)
      {
        cin >> z2;
        unionSet(z1, z2);
      }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
      if (findSet(i) == findSet(0))
        cnt++;

    cout << cnt << '\n';
  }

  return 0;
}