#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <conio.h>

/*************************************************************************

Taller 1
Febrero 13/2023
Natalia Catalina Guzmán Fuentes

Ejercicio 01:

1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero.


*************************************************************************/

using namespace std;

int generar_numeros (int minimo, int maximo);

int main() {
	
	//Inicialización de variables 
	int i;
	int array[10]={2,4,6,8,10,12,14,16,18,20};
	
	//Crear un puntero
	int *puntero_array;
	puntero_array = array;
	
	//Array con 10 elementos
	cout<<">> Array inicial: "<<endl;
	for(i=0;i<10;i++){ 
	cout<<array[i]<<" ";
	}
	srand((unsigned) time(0));
	
	cout<<endl;
	cout<<endl<<">> Generar 10 numeros aleatorios: "<<endl;
	
	//Comprobar que la función genere números aleatorios	
	for (i=0; i<10;i++)
	{
		cout<<generar_numeros(0,25)<<" ";
	}
	cout<<endl;
	
	//Ciclo para llenar el array con 10 numeros aleatorios 
	cout<<endl<<">> Array con 10 numeros aleatorios: "<<endl;
	for(i=0; i<10;i++)
	{
		array[i]= generar_numeros(0,25);
		cout<<array[i]<<" ";
	}
	
	cout<<endl;
	//Impresión del contenido del array usando un puntero
	cout<<endl<<">> Impresion del Array con un puntero: "<<endl;
	cout<<endl;
	for(i=0; i<10;i++)
	{
	cout<<"Elemento ["<<i<<"] del vector: "<<*puntero_array++<<" "<<endl; 
	cout<<endl;
	}
	cout<<endl;
	//Impresión de las direcciones de memoria del contenido del array usando un puntero
	cout<<">> Direccion de memoria de cada elemento del array: "<<endl;
	cout<<endl;
	for(i=0;i<10;i++)
	{
	cout<<"Direccion de memoria de "<<array[i]<<" es: "<<puntero_array++<<endl;
	cout<<endl;
	}
	return 0;
}

//Función para generar números aleatorios entre 0 y 25
int generar_numeros(int minimo, int maximo)
{
	return minimo + (rand()%(maximo-minimo));
}


