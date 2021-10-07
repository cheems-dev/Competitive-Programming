#include <iostream>
#include <set>

using namespace std;

int main()
{
  int numDays{0};
  while (cin >> numDays, numDays)
  {
    multiset<int> numbers;

    long long cost = 0;

    while (numDays--)
    {
      int k;
      cin >> k;

      while (k--)
      {
        int t;
        cin >> t;

        numbers.insert(t);
      }

      multiset<int>::iterator lowest = numbers.begin();
      multiset<int>::iterator highest = --numbers.end();

      cost += (*highest - *lowest);

      numbers.erase(lowest);
      numbers.erase(highest);
    }

    cout << cost << endl;
  }
}