/*Dado dos arreglos de igual longitud, escriba un programa que genere un tercer arreglo, cuyos valores correspondan a la suma de los elementos
de las mismas posiciones de los arreglos anteriores*/

#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "time.h"

using namespace std;

//Llamando a las funciones

void ArregloLlenar(int arr[10]);
void ArregloSumar(int arr1[10], int arr2[10], int arrResultante[10]);
void ArregloMostrar(int arr[10]);

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<"PROGRAMA QUE SUMA DOS ARREGLOS Y MUESTRA EL RESULTADO EN UN TERCER ARREGLO"<<endl;
    cout<<endl;

    //Declarando los 3 Arreglos
    int Arreglo1[10];
    int Arreglo2[10];
    int ArregloSuma[10];

    //Iniciando el random
    srand(time(NULL));

    //Llena y muestre el Primer Arreglo
    ArregloLlenar(Arreglo1);
    cout << "Los primeros numeros son: " << endl;
    ArregloMostrar(Arreglo1);
    cout << endl;

    //Llena y muestre el Segundo Arreglo
    ArregloLlenar(Arreglo2);
    cout << "Los segundos numeros son: " << endl;
    ArregloMostrar(Arreglo2);
    cout << endl;

    //Suma los 2 Arreglos y muestra el Arreglo Resultante

    ArregloSumar(Arreglo1, Arreglo2, ArregloSuma);

    cout << "El resultado de la suma de los dos Arreglos es: " << endl;
    ArregloMostrar(ArregloSuma);
    cout<<endl;
    cout<<endl;

    return 0;
}

//verificando si el elemento es menor
void ArregloLlenar(int arr[10])
{
    int i;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % (10 - 1);
    }
}

//Realizando suma de arreglos
void ArregloSumar(int arr1[10], int arr2[10], int arrResultante[10])
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        arrResultante[i] = arr1[i] + arr2[i];
    }
}

//Muestra el arreglo
void ArregloMostrar(int arr[10])
{
    int i;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
        cout << endl;
}