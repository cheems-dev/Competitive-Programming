#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  string data;
  cin >> data;
  while (data != "END")
  {
    int high{0};
    for (size_t i = 0; i < data.size(); i++)
    {
      if (high < (int)data[i])
        high = (int)data[i];
    }

    cout << high - 1;
    cin >> data;
  }
  return 0;
}
