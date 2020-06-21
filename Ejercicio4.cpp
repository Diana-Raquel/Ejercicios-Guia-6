/*Dado dos arreglos de igual longitud, escriba un programa que genere un tercer arreglo, cuyos valores correspondan a la suma de los elementos
de las mismas posiciones de los arreglos anteriores*/

#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

using namespace std;

int main()
{
    int arreglo[]{1, 3, 5};
    int arreglo2[]{4, 5, 6};
    int SumaArreglo[2];
    int suma = 0;

    //suma de arreglos
    for (int i = 0; i < 3; i++)
    {
        SumaArreglo[i] = arreglo[i] + arreglo2[i];
    }
    // Y mostramos el resultado
    cout << "La suma es: " << endl;
    for (int i = 0; i < 3; i++)
        cout << SumaArreglo[i] << " ";
    

    return 0;
}