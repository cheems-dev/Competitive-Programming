#include <iostream>
#include <vector>

usign namespace std;

int dfs(const std::vector<std::vector<int>> &g, std::vector<bool> &visited, int k)
{
  if (visited[k])
    return 0;
  else
  {
    visited[k] = true;
    int size = 1;
    for (int nb : g[k])
      size += dfs(g, visited, nb);
    return size;
  }
}

int main()
{
  int ncase;
  cin >> ncase;
  for (int i = 0; i < ncase; ++i)
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    vector<bool> visited(n + 1, false);
    for (int j = 0; j < m; ++j)
    {
      int a, b;
      cin >> a >> b;
      g[a].push_back(b);
      g[b].push_back(a);
    }

    int maxsize = -1;
    for (int k = 1; k <= n; ++k)
    {
      if (!visited[k])
      {
        int size = dfs(g, visited, k);
        maxsize = max(size, maxsize);
      }
    }

    cout << maxsize << endl;
  }
}