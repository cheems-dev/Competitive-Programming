#include <iostream>

using namespace std;

void chess(int, int);

int main(int argc, char const *argv[])
{
  int cases{0};
  cin >> cases;
  for (size_t i = 1; i <= cases; i++)
  {
    int getCall{0}, mileCost{0}, juiceCost{0};
    ;
    cin >> getCall;
    for (size_t i = 0; i < getCall; i++)
    {
      int minutes{0};
      cin >> minutes;
      mileCost += (minutes / 30) * 10 + 10;
      juiceCost += (minutes / 60) * 15 + 15;
    }
    cout << "Case " << i << ": ";
    chess(mileCost, juiceCost);
  }
  return 0;
}

void chess(int mile, int juice)
{
  if (mile < juice)
    cout << "Mile " << mile;
  else if (mile == juice)
    cout << "Mile ";
  if (mile >= juice)
    cout << "Juice " << juice;
}