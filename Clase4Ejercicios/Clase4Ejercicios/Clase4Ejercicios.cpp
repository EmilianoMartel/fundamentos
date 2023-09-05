// Clase4Ejercicios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{
	
	return 0;
}

/*Ingrese un numero de tipo entero, si es mayoer a 17 "es un buen numero" sino "No es un numero correcto"*/
void Exercice1() {
	int num;
	cout << "Ingrese un numero:";
	cin >> num;
	if (num > 17)
	{
		cout << "Es un buen numero";
	}
	else {
		cout << "No es un número correcto";
	}
}
/*Un duende le dispara una flecha a nuestro jugador y le provoca un daño de tipo flotante.
Se debe imprimir en pantalla lo siguiente:
● Si el daño es mayor a 30, imprimir “Daño crítico! Daño realizado:” y seguido el daño
● Si el daño es menor a 30, imprimir “Daño normal. Daño realizado:” y seguido el daño
● Si el daño es 0, imprimir “El duende no nos hizo daño!”*/
void Exercice2() {
	float damage;
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float> distribution(0, 50); // Rango de números aleatorios de 1 a 100

	damage = distribution(gen);
	cout << "El duende lo esta atacando... ";
	if (damage > 30) {
		cout << "Daño crítico! Daño realizado: " << damage << endl;
	}
	else if (damage < 30 && damage != 0) {
		cout << "Daño normal. Daño realizado: " << damage << endl;
	}
	else {
		cout << "El duende no nos hizo daño!";
	}
}

/*Se le pide ingresar al usuario la nota de 2 parciales.
Imprimir en pantalla si el estudiantepromociona la materia, si debe el final o si no aprobó la materia.
Al finalizar imprimir elpromedio de las notas.*/
void Exercice3() {
	float exam1;
	float exam2;
	float prom;

	cout << "Ingrese la primer nota: ";
	cin >> exam1;
	cout << "Ingrese la segunda nota: ";
	cin >> exam2;
	prom = (exam1 + exam2) / 2;
	if (prom >= 7)
	{
		cout << "Promociono la materia.";
	}
	else if (prom >= 4) {
		cout << "Debe el final.";
	}
	else {
		cout << "Desaprobo la materia.";
	}
}

/*El usuario puede realizar 3 acciones en un juego RPG:
1. Atacar
2. Defender
3. Descansar
El usuario puede ingresar un número entre 1 y 3 para realizar dicha acción y se debeimprimir:
“Se realizó la acción:” y la acción correspondiente.
Ejemplo:
>> 2 (ingresado por el usuario)
<< “Se realizo la acción: Defender”*/
void Exercice4() {
	int option;

	cout << "Por favor, selecciona una acción:" << endl;
	cout << "1. Atacar" << endl;
	cout << "2. Defender" << endl;
	cout << "3. Descansar" << endl;

	cin >> option;

	switch (option) {
	case 1:
		cout << "Se realizó la acción: Atacar" << endl;
		break;
	case 2:
		cout << "Se realizó la acción: Defender" << endl;
		break;
	case 3:
		cout << "Se realizó la acción: Descansar" << endl;
		break;
	default:
		cout << "Opción no válida. Por favor, selecciona una acción válida." << endl;
		break;
	}
}

/*Un GM (Game Master) tira un dado de 6 caras 6 veces.
Determinar cuál fue el dado conmenor valor.
Ejemplo:Dados: 4, 3, 4, 2, 5, 6El dado con menor valor fue el número 4.*/

void Exercice5() {
	int dice;
	int maxDice = 7;
	int minDice;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(1, 6);

	for (size_t i = 0; i < 6; i++)
	{
		dice = distribution(gen);
		cout << dice << endl;
		if (dice > maxDice)
		{
			minDice = dice;
		}
	}

	cout << "El menor dado fue: " << minDice;
}

/*Se le pide al usuario que ingrese números enteros positivos hasta que se ingrese un 0.
Mostrar por pantalla el promedio de esos números y cuántos números fueron ingresados*/
void Exercice6() {
	int num = 1;
	int countNumbers = 0;
	int sum  = 0;
	int prom;
	while (num !=0) {
		cout << "Ingrese un numero entero positivo" <<  endl;
		cin >> num;
		sum += num;
		countNumbers++;
	}
	
	prom = sum / countNumbers;

	cout << "El promedio es: " << prom << endl;
	cout << "El total de numeros ingresados fue: " << countNumbers <<  endl;
}

/*Se le pide al usuario que ingrese un número y mostrar por pantalla sus primeros 20múltiplos.*/
void Exercice7() {
	int num;
	int multiplie;

	cout << "Ingrese un numero entero: " << endl;
	cin >> num;

	for (size_t i = 1; i <= 20; i++)
	{
		multiplie = num * i;
		cout << "Multiplicado por: " << i << "Es igual a: " << multiplie << endl;
	}
}

/*Mostrar por pantalla los primeros 50 números pares.*/
void Exercice8() {
	int countNumbers = 0;
	int num = 0;

	while (countNumbers != 50)
	{
		if (num % 2 == 0)
		{
			countNumbers++;
			cout << num << endl;
		}
		num++;
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
