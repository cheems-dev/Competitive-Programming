#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int first{0}, second{0}, third{0}, fourth{0};
  int gradesTotal = 720; // 180 * 4
  cin >> first >> second >> third >> fourth;
  while (!(first == 0 && second == 0 && third == 0 && fourth == 0))
  {
    int tmp_1{0}, tmp_2{0}, tmp_3{0};
    gradesTotal = 720;
    // first
    tmp_1 = first - second;
    tmp_1 = (tmp_1 < 0) ? tmp_1 + 40 : 0;
    tmp_1 *= 9;

    gradesTotal += tmp_1 + 360;
    // first

    // second
    tmp_2 = third - fourth;
    tmp_2 = (tmp_2 < 0) ? tmp_2 + 40 : 0;
    tmp_2 *= 9;
    gradesTotal += tmp_2;
    // second

    // third
    tmp_3 = third - fourth;
    tmp_3 = (tmp_3 < 0) ? tmp_3 + 40 : 0;
    tmp_3 *= 9;
    gradesTotal += tmp_3;
    // third

    cout << gradesTotal << endl;

    cin >>
        first >> second >> third >> fourth;
  }

  return 0;
}