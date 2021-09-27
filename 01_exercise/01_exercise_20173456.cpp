/**
 * Ejercicio 1: Producto máximo de dos números
en una sequencia
 */

#include <iostream>
#include <vector>
using namespace std;

int MaxProduct(vector<int>);

int main(int argc, char const *argv[])
{
    /**
     * Caso prueba 1:
     * Entrada: 1, 2, 3
     * Salida: 6
     */
    vector<int> firstInput{1, 2, 3};
    cout << MaxProduct(firstInput) << "\n";

    /**
     * Caso prueba 2:
     * Entrada: 8, 1, 6, 3, 4, 10, 3, 9, 14, 2
     * Salida: 140
     */
    vector<int> secondInput{8, 1, 6, 3, 4, 10, 3, 9, 14, 2};
    cout << MaxProduct(secondInput) << "\n";
    return 0;
}

int MaxProduct(vector<int> array)
{
    /**
     * Retorna el maximo producto de una lista de enteros no negativos
     */

    int a{array[0]}, b{0};

    for (int i = 1; i < array.size(); i++)
    {
        // swap si el primer elemento es menor A[i] < A[i+1]
        if (a < array[i])
        {
            b = a;
            a = array[i];
        }
        // Actualiza el valor de b
        else if (b < array[i])
            b = array[i];
    }
    // Obteniendo los mayores elementos del arreglo obtenemos el mayor producto
    return a * b;
}
