#include <iostream>

using namespace std;

int minimalDistance(int);

int main()
{
  int totalCases{0}, totalStores{0};
  cin >> totalCases;

  for (size_t i = 0; i < totalCases; i++)
  {
    cin >> totalStores;
    cout << minimalDistance(totalStores) << endl;
  }

  return 0;
}

int minimalDistance(int cases)
{
  int minimal{100}, maximum{0}, distance{0};
  ;
  for (size_t i = 0; i < cases; i++)
  {
    cin >> distance;
    maximum = max(maximum, distance);
    minimal = min(minimal, distance);
  }
  return (maximum - minimal) * 2;
}