// Clase7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Ejercicio1
int CreateArea(int width, int large) {
    return width * large;
}

//Ejercicio2
int ForceRatio(int humanForce, int orcsForce) {
    if (humanForce == orcsForce) {
        return 0;
    }
    else if (humanForce > orcsForce) {
        return 1;
    }
    else {
        return -1;
    }
}

//Ejercicio3
float MiddlePoint(int firstPoint,int secondPoint) {
    return (firstPoint + secondPoint)/2;
}

//Ejercicio4
int SendHunter(int hunters, int min_hunters, int max_hunters) {
    if (hunters >= min_hunters && hunters <= max_hunters) {
        return hunters;
    }
    else if(hunters < min_hunters) {
        return min_hunters;
    }
    else if(hunters > max_hunters){
        return max_hunters;
    }
}

//Ejercicio5
void DamageCount() {
    int totalDamage = 0;
    int numHits = 0;
    int damage = 1;
    float averageDamage;

    do {
        cout << "Insert damage: \n";
        cin >> damage;

        if (damage < 0){
            break;
        }

        totalDamage += damage;
        numHits++;
    } while (damage > 0);

    if (numHits > 0) {
        averageDamage = totalDamage / numHits;
        cout << "The average damage is "<< averageDamage << endl;
        cout << "The total hits is " << numHits << endl;
    }
    else {
        cout << "No damage" << endl;
    }
}

//Ejercicio6
enum CharacterDamage {
    TEEMO = 3,
    CHOGATH = 5,
    RIVEN = 7
};

void TakeDamage(string enemy, int damage, int &life) {
    cout << "Damage " << enemy << ":" << damage << endl;
    life -= damage;
    cout << "Garen life after hit: " << life << endl;
}

void GarenHits() {
    int lifeGaren = 100;
    srand(time(0));

    while (lifeGaren > 0) {
        int randomEnemy = rand() % 3;
        string enemy;
        int damage;

        switch (randomEnemy) {
        case 0:
            enemy = "Teemo";
            damage = TEEMO;
            break;
        case 1:
            enemy = "Cho'gath";
            damage = CHOGATH;
            break;
        case 2:
            enemy = "Riven";
            damage = RIVEN;
            break;
        }

        TakeDamage(enemy, damage, lifeGaren);
    }

    cout << "Garen was defeated." << endl;
}

int main()
{
    cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
