#include <iostream>

using namespace std;

int getModule(int);

int main(int argc, char const *argv[])
{
  int number{0};

  cin >> number;

  while (number != 0)
  {
    cout << getModule(number) << '\n';
    cin >> number;
  }

  return 0;
}

int getModule(int number)
{
  if (number / 10 == 0)
    return number;

  else
  {
    int newNumber{0};

    while (number)
    {
      newNumber += (number % 10);
      number /= 10;
    }

    return getModule(newNumber);
  }
}
