/*Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces se repite dicho número en el arreglo.*/

#include "iostream"
#include "stdlib.h"
#include "stdio.h"

using namespace std;

int main()
{
    int arreglo[10], i, n, contador;
    contador = 0;

    cout << endl;
    cout << "BIENBENIDO" << endl;
    cout << "Este programa le verifica cuantas veces ha estado un numero en un arreglo" << endl<<endl;

    for (i = 0; i < 10; i++) //Ciclo For que pedira los numeros a ingresar en el arreglo
    {
        cout << "Digite el numero " << i + 1 << ":" << endl;
        cin >> arreglo[i];
    }
    cout << "Digite el numero que quiere saber las veces que se repitio: " << endl;
    cin >> n;
    for (i = 0; i < 10; i++)
    {
        if (n == arreglo[i]) //Si el numero ingresado esta en el arreglo desplegara el contador
        {
            contador++;
        }
    }
    cout << "El numero " << n << " se repite " << contador << endl;

    return 0;
}