#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

void isStayHome();

int main(int argc, char const *argv[])
{
  int N, B, H, W;
  int p, nb, minCost;
  cin >> N >> B >> H >> W;

  while (N != 0 &&B = 0 && H != 0 && W != 0)
  {
    minCost = 2000000000;

    for (size_t i = H; H > 0; i--)
    {
      cin >> p;
      for (int j = 0; j < W; j++)
      {
        cin >> nb;
        if (nb >= N)
        {
          minCost = min(minCost, N * p);
          string s;
          getline(cin, s);
          break;
        }
      }
    }

    if (minCost != 2000000000 && minCost <= B)
      cout << minCost << endl;
    else
      cout << "stay home" << endl;
  }

  return 0;
}

void isStayHome()
{
}