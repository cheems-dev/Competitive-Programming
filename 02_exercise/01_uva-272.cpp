#include <iostream>

using namespace std;

void changeCharacter(string &);

int main(int argc, char const *argv[])
{
  string data;
  getline(cin, data);
  changeCharacter(data);
  return 0;
}

void changeCharacter(string &letters)
{

  string result;
  int count{0};
  for (size_t i = 0; letters[i]; i++)
  {

    if (letters[i] == '"')
    {
      if (count++ % 2 == 0)
        result += "``";
      else
        result += "''";
      continue;
    }
    result += letters[i];
  }
  cout << result << endl;
};