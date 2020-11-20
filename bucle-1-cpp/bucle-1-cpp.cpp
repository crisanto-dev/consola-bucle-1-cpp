// bucle-1-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Cristian Antonio Escalante Hernandez
// Github: crisanto-dev
// Fecha: 11/19/2020
// Problema:
/* Realice un programa que pida un numero n e imprima una serie n veces.
   Ejemplo: 3
   3, 6, 9
*/

#include <iostream>

using namespace std;

int main()
{

	cout << "Autor: Cristian Antonio Escalante Hernandez\n";
	cout << "Github: crisanto-dev\n";
	cout << "Problema: Realice un programa que pida un numero n e imprima una serie n veces.\n";
	cout << "Ejemplo: 3\n 3,6,9\n";

	int numero = 0;
	int multiplicando = 1;
	bool bandera = true;

	do
	{
		cout << "Escriba un numero entero mayor que 0: ";
		cin >> numero;
		if (numero > 0)
		{
			bandera = false;
		}
		else {
			cout << "Numero ingresado no valido\nIntentelo de nuevo\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (bandera);

	cout << "Procesando...\n";
	system("PAUSE");
	printf("el resultado para %d es: ", numero);

	for (int i = 0; i < numero; i++)
	{
		if (i != 0 && i != numero) 
			cout << ", ";

		cout << numero * multiplicando++ ;

	}
	cout << "\n";
	cout << "Fin del programa\n";
	system("PAUSE");
	return 0;
}
