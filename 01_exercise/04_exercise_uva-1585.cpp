#include <iostream>

using namespace std;

void getScore(string &);

int main(int argc, char const *argv[])
{
  int limit{0};
  cin >> limit;

  while (limit--)
  {
    string line{""};
    cin >> line;
    getScore(line);
  }
}

void getScore(string &code)
{
  int count{0}, previous{0};

  for (int i = 0; i < code.size(); ++i)
  {
    if (code[i] == 'O')
    {
      ++previous;
      count += previous;
    }
    else
      previous = 0;
  }

  cout << count << '\n';
}
