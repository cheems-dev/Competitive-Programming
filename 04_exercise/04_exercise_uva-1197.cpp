
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> g[30005];
int used[30005], ret;
void dfs(int x)
{
  ret++, used[x] = 1;
  for (vector<int>::iterator it = g[x].begin();
       it != g[x].end(); it++)
  {
    if (used[*it] == 0)
    {
      dfs(*it);
    }
  }
}
int main()
{
  int n, m, k;
  int i, j, x, y;
  while (scanf("%d %d", &n, &m) == 2 && n)
  {
    for (i = 0; i <= n; i++)
      g[i].clear(), used[i] = 0;
    while (m--)
    {
      scanf("%d", &k);
      scanf("%d", &x), k--;
      while (k--)
      {
        scanf("%d", &y);
        g[x].push_back(y);
        g[y].push_back(x);
      }
    }
    ret = 0;
    dfs(0);
    printf("%d\n", ret);
  }
  return 0;
}