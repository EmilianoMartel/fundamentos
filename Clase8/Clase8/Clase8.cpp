// Clase8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Ejercicio1
void SendHunter(int &hunters, int min_hunters, int max_hunters) {
    if (hunters < min_hunters) {
        hunters = min_hunters;
    }
    else if (hunters > max_hunters) {
        hunters = max_hunters;
    }
}

//Ejercicio2
void ChangeInt(int &num1, int &num2) {
    int copyNum1 = num1;
    int copuNum2 = num2;
    num1 = copuNum2;
    num2 = copyNum1;
}

/*Ejercicio3
* para dañar o curar la vida de un personaje
* para modificar el daño que hace de base
* para modificar algun %
*/

/*Ejercicio4
* En un juego que tenga ataques quizas podrias pasarle o no como parametro quien lo ataca
* o con que, ya que si tiene debilidad contra el daño crece
*/

//Ejercicio5
void HealPlayer(int &life, int heal) {
    life += heal;
}

void HealPlayer(int& life, int heal, bool critic) {
    if (critic) {
        life += heal * 1.5;
    }
    else {
        life += heal;
    }
}

void HealPlayer(int& life, int heal, float percent) {
    life += heal * percent;
}

void HealPlayer(int& life, int totalLife, float percent) {
    life += totalLife * percent;
}

int main()
{
    std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
