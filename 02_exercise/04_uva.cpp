#include <cstdio>
#include <iostream>

using namespace std;

int main()
{

  int cases{0};
  for (size_t i = 0; i < cases; i++)
  {
    int columns{0}, rows{0}, result{0};
    cin >> columns >> rows;
    result = (columns / 3) * (rows / 3);
    cout << result << endl;
  }

  return 0;
}