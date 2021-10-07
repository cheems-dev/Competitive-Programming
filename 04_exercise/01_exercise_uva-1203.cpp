#include <cstdio>
#include <queue>
#include <utility>
#include <cstring>
#include <iostream>
#include <functional>
using namespace std;

int main()
{
  char s[20];
  int qnum{0}, p{0}, n{0};
  priority_queue<pair<int, pair<int, int>>,
                 vector<pair<int, pair<int, int>>>,
                 greater<pair<int, pair<int, int>>>>
      pq;

  while (scanf("%s", s), strcmp("#", s))
  {
    cin >> qnum >> p;
    pq.push(pair<int, pair<int, int>>(p, pair<int, int>(qnum, p)));
  }

  cin >> n;
  while (n--)
  {
    pair<int, pair<int, int>> pr = pq.top();
    pq.pop();

    cout << pr.second.first << endl;
    pr.first += pr.second.second;
    pq.push(pr);
  }

  return 0;
}