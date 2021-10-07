#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  string substring, word;
  set<string> dict;

  while (cin >> word)
  {

    int len = word.size();
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (int i = 0; i < len; i++)
    {
      if (word[i] >= 'a' && word[i] <= 'z')
      {
        if (i == len - 1)
          dict.insert(word);
      }
      else
      {
        if (i)
        {
          substring = word.substr(0, i);
          dict.insert(substring);
        }

        if (i == len - 1)
          break;

        word = word.substr(i + 1, len);
        i = -1;
        len = word.length();
      }
    }
  }

  for (auto it : dict)
    cout << it << "\n";
  return 0;
}