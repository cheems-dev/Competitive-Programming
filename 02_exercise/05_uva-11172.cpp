#include <iostream>

using namespace std;

char getOperator(int, int);

int main()
{
  int totalCases{0}, first{0}, second{0};

  cin >> totalCases;

  for (size_t i = 0; i < totalCases; i++)
  {

    cin >> first >> second;
    cout << getOperator(first, second) << endl;
  }

  return 0;
}

char getOperator(int a, int b)
{
  if (a > b)
    return '>';
  else if (a < b)
    return '<';
  else
    return '=';
}