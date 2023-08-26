// Clase3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	return 0;
}

/*Ejercicio 1Elegir 5 objetos de tu alrededor y escribir las variables que podrían
llegar a tener y susposibles valores.*/
void  Exercice1() {
	//Cuaderno
	int cantHojas = 50;
	//Yerba
	float kilogramer = 0.250f;
	//Botella
	string bebida = "agua";
	int litro = 1;
	//Libro
	int cantPalabras = 2500;
	string titulo = "Lo que el viento se llevo";
}
/*Ejercicio 2Multiplicar 3 variables de tipo float y mostrar el resultado en pantalla.*/
void Ejercicio2() {
	float num1 = 1;
	float num2 = 2.5f;
	float num3 = 2;
	float result;
	result = num1 * num2 * num3;
	cout << result;
}
/*Ejercicio 3Dividir 2 variables de tipo entero y mostrar el resultado en pantalla.*/
void Ejercicio3() {
	int num1=10;
	int num2=2;
	int result;
	result = num1 / num2;
	cout << result;
}

/*Ejercicio 4Dividir 2 variables de tipo float y mostrar el resultado en pantalla.*/
void Ejercicio4() {
	float num1 = 15;
	float num2 = 2;
	float result;
	result = num1 / num2;
	cout << result;
}
/*Ejercicio 5Comparar si una variable booleana es mayor a otra.*/
void Ejercicio5() {
	bool boolVar1, boolVar2;

	cout << "Ingrese el valor de la primera variable booleana (0 para false, 1 para true): ";
	cin >> boolVar1;

	cout << "Ingrese el valor de la segunda variable booleana (0 para false, 1 para true): ";
	cin >> boolVar2;

	if (boolVar1 == boolVar2) {
		cout << "Ambas variables booleanas son iguales." << endl;
	}
	else {
		cout << "Las variables booleanas son diferentes." << endl;
	}
}
/*Ejercicio 6Comparar si una variable de tipo char es menor que otra variable de tipo float*/
void Ejercicio6() {
	char charVar;
	float floatVar;

	cout << "Ingrese un carácter: ";
	cin >> charVar;

	cout << "Ingrese un número (float): ";
	cin >> floatVar;

	if (static_cast<int>(charVar) < floatVar) {
		cout << "El valor ASCII del char es menor que el número float." << endl;
	}
	else {
		cout << "El valor ASCII del char no es menor que el número float." << endl;
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
