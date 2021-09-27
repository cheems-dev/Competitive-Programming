/**
 * Ejercicio 2: Encontrar bucles en un flujo de 
datos

 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isDuplicated(const vector<int> &, int);
vector<int> FindBucle(const vector<int> &);
void print(const vector<int> &);

int main(int argc, char const *argv[])
{
    /**
     * Caso prueba 1:
     * Entrada: 1, 2, 3, 4, 5, 2, 3, 4, 5, 2, 3, 4, 5, 2, 3
     * Salida: 2 3 4 5 
     */
    vector<int> inputFirst{1, 2, 3, 4, 5, 2, 3, 4, 5, 2, 3, 4, 5, 2, 3};
    print(FindBucle(inputFirst));

    /**
     * Caso prueba 2:
     * Entrada: 1, 2, 3, 4, 5, 6, 3, 7, 8, 9, 10, 11, 8, 9, 10, 11, 8, 9, 10, 11, 8, 9
     * Salida: 8 9 10 11
     */
    vector<int> inputSecond{1, 2, 3, 4, 5, 6, 3, 7, 8, 9, 10, 11, 8, 9, 10, 11, 8, 9, 10, 11, 8, 9};
    print(FindBucle(inputSecond));

    /**
     * Caso prueba 3:
     * Entrada: 1, 2, 3, 4, 5, 6, 7, 8, 9, 6, 5, 4, 10, 11, 3, 4, 5, 6, 7, 8, 9, 6, 5, 4, 10, 11, 3, 4
     * Salida: 3 4 5 6 7 8 9
     */

    vector<int> inputThird{1, 2, 3, 4, 5, 6, 7, 8, 9, 6, 5, 4, 10, 11, 3, 4, 5, 6, 7, 8, 9, 6, 5, 4, 10, 11, 3, 4};
    print(FindBucle(inputThird));

    return 0;
}

vector<int> FindBucle(const vector<int> &numbers)
{
    /**
     * Encontramos una serie de numeros que se repiten en nuestro datos de entrada
     * Retorna un arreglo con una serie de numeros
     */
    int max_product = 0;
    vector<int> answer;
    // Iteramos sobre nuestro arreglo
    for (int i = 0; i < numbers.size(); i++)
    {
        // Iteramos de la mitad de nuestro arreglo
        for (int j = numbers.size() / 2; j < numbers.size(); j++)
        {
            // Comparamos si hay igualdad
            if (numbers[i] == numbers[j])
            {
                // Evitamos añadir un elemento duplicado en nuestro vector answer
                if (!isDuplicated(answer, numbers[i]))
                    answer.push_back(numbers[i++]);
                else
                    break;
            }
            else
                break;
        }
        // Si nuestro vector tiene al menos un valor lo vaciamos
        if (answer.size() <= 1)
            answer.clear();
        // Si el tamaño de nuestro vector es mayor a 0 o 1 entonces retorna nuestro vector con el bucle encontrado
        else
        {
            sort(answer.begin(), answer.end());
            return answer;
        }
    }
    return answer;
}

bool isDuplicated(const vector<int> &array, int value)
{
    /**
     * Verificar si hay un elemento duplicado en un arrelo 
     * retorna true o false
     */
    for (size_t i = 0; i < array.size(); i++)
        if (array[i] == value)
            return true;
    return false;
}

void print(const vector<int> &array)
{
    /**
     * Imprime los elementos de un vector
     */

    for (size_t i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << endl;
}