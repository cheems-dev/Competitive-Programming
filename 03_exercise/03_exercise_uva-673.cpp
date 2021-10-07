#include <iostream>
#include <stack>

using namespace std;

int N{0}, c{0};

void order_check(stack<int>);

int main()
{
  stack<int> carts;
  while (true)
  {

    cin >> N;
    if (N == 0)
      break;

    order_check(carts);
    cout << "\n";
  }
}

void order_check(stack<int> carts)
{
  while (true)
  {
    while (carts.size() > 0)
      carts.pop();
    int j = 0;
    for (int i = 0; i < N; i++)
    {
      cin >> c;

      if (c == 0)
        i = N;

      while (j < N && j != c && c != 0)
      {
        if (carts.size() > 0 && carts.top() == c)
          break;
        j++;
        carts.push(j);
      }
      if (carts.top() == c && c != 0)
        carts.pop();
    }
    if (c == 0)
      return;
    // output

    if (carts.size() == 0)
      printf("Yes\n");
    else
      printf("No\n");
  }
}
