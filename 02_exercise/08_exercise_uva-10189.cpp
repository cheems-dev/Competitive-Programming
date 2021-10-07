#include <iostream>

using namespace std;

void input(char **, int, int);
void show(char **, int, int);
void findMines(char **, int, int);

int main(int argc, char *argv[])
{
  int cases{1};
  while (true)
  {
    int rows{0}, columns{0};
    cin >> rows >> columns;
    if (rows == 0 && columns == 0)
      break;
    // Crear matriz
    char **matriz = new char *[rows];
    for (int i = 0; i < rows; i++)
      matriz[i] = new char[columns];
    input(matriz, rows, columns);

    // Find mines in matriz
    findMines(matriz, rows, columns);

    // Mostrar matriz
    cout << "Field #" << cases++ << ":" << endl;
    show(matriz, rows, columns);

    // Delete matriz
    for (int i = 0; i < rows; i++)
      delete[] matriz[i];
    delete[] matriz;
  }
  return 0;
}

void input(char **Ma, int fi, int co)
{
  char value;
  for (int i = 0; i < fi; i++)
  {
    for (int j = 0; j < co; j++)
    {
      cin >> value;
      Ma[i][j] = value;
    }
  }
}

void show(char **Ma, int fi, int co)
{
  for (int i = 0; i < fi; i++)
  {
    for (int j = 0; j < co; j++)
      cout << Ma[i][j];
    cout << endl;
  }
}

void findMines(char **Ma, int fi, int co)
{
  int count{0};
  for (int i = 0; i < fi; i++)
  {
    for (int j = 0; j < co; j++)
    {
      if (Ma[i][j] == '*')
        continue;
      else
      {
        count = 0;
        if (i != 0 && j != 0 && Ma[i - 1][j - 1] == '*')
          count++;

        if (i != 0 && Ma[i - 1][j] == '*')
          count++;

        if (i != 0 && j != co - 1 && Ma[i - 1][j + 1] == '*')
          count++;

        if (j != co - 1 && Ma[i][j + 1] == '*')
          count++;

        if (j != co - 1 && i != fi - 1 && Ma[i + 1][j + 1] == '*')
          count++;

        if (i != fi - 1 && Ma[i + 1][j] == '*')
          count++;

        if (i != fi - 1 && j != 0 && Ma[i + 1][j - 1] == '*')
          count++;

        if (j != 0 && Ma[i][j - 1] == '*')
          count++;

        count += 48;

        Ma[i][j] = (char)(count);
      }
    }
  }
}