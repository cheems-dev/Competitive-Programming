#include <iostream>
#include <algorithm>

using namespace std;

void chess(int);

int main(int argc, char const *argv[])
{
  int totalTimes{0};
  cin >> totalTimes;
  chess(totalTimes);

  return 0;
}

void chess(int times)
{
  for (size_t i = 0; i < times; i++)
  {
    int M{0}, N{0}, total{0};
    char chessPieces;
    cin >> chessPieces >> M >> N;
    switch (chessPieces)
    {
    case 'r':
      total = min(M, N);
      break;

    case 'Q':
      total = min(M, N);
      break;
    case 'k':
      total = (((M + 1) / 2) * ((N + 1) / 2)) + (((M) / 2) * ((N) / 2));
      break;
    case 'K':
      total = (((M + 1) / 2) * ((N + 1) / 2));
      break;
    default:
      total = 0;
      break;
    }

    try
    {
      cout << total << endl;
    }
    catch (const std::exception &e)
    {
      std::cerr << e.what() << '\n';
    }
  }
}