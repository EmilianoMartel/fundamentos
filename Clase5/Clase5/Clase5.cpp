// Clase5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

enum class Light {
    Verde,
    Amarilla,
    Roja
};

enum class Operations {
    Sum,
    Substraction,
    Multiplication,
    Division
};

enum class Difficulty {
    Easy = 5,
    Medium = 15,
    Hard = 30
};

int main()
{

}

void Ejercicio1() {
    const int MAXLIFE = 100;
    const string ENEMYNAME = "Bowser";
    const int MAXMOVEMENTSPEED = 20;
    const int DROPPROBABILITY = 20;
    const float GRAVITY = 9.14f;
    const int COUNTMAXWAVE = 10;
    const string CITYNAME = "Winterfell";
    const int MAXCOUNTENEMY = 10;
    const float MAXBULLETSPEED = 5.2;
}

void Ejercicio2() {
    int option;
    Light light;

    cout << "Ingrese un número del 1 al 3 para ver la duración de la luz del semáforo: ";
    cout << "1 - Verde";
    cout << "2 - Amarilla";
    cout << "3 - Roja";
    cin >> option;

    while(option < 1 || option > 3) {
        cout << "Opción no válida. Debe ingresar un número del 1 al 3." << endl;
        cin >> option;
    }

    switch (option) {
    case 1:
        light = Light::Verde;
        break;
    case 2:
        light = Light::Amarilla;
        break;
    case 3:
        light = Light::Roja;
        break;
    }

    // Mostrar la duración de la luz seleccionada
    switch (light) {
    case Light::Verde:
        cout << "La luz Verde dura 40 segundos." << endl;
        break;
    case Light::Amarilla:
        cout << "La luz Amarilla dura 5 segundos." << endl;
        break;
    case Light::Roja:
        cout << "La luz Roja dura 30 segundos." << endl;
        break;
    }
}

void Ejercicio3() {
    enum Perisfericos {
        Teclado,
        Camara,
        Mouse,
        Mando,
        Volante
    };
}

void Ejercicio4() {
    int option;
    int num1;
    int num2;
    int result;
    Operations operation;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1; 
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout << "Ingrese que operacion desea realizar: " << endl;
    cout << "1 - Suma" << endl;
    cout << "2 - Resta" << endl;
    cout << "3 - Multiplicacion" << endl;
    cout << "4 - Division" << endl;
    cin >> option;

    while (option < 1 || option > 4) {
        cout << "Opción no válida. Debe ingresar un número del 1 al 4." << endl;
        cin >> option;
    }

    switch (option) {
    case 1:
        operation = Operations::Sum;
        break;
    case 2:
        operation = Operations::Substraction;
        break;
    case 3:
        operation = Operations::Multiplication;
        break;
    case 4:
        operation = Operations::Division;
        break;
    }

    switch (operation) {
    case Operations::Division:
        result = num1 / num2;
        break;
    case Operations::Multiplication:
        result = num1 * num2;
        break;
    case Operations::Substraction:
        result = num1 - num2;
        break;
    case Operations::Sum:
        result = num1 + num2;
        break;
    }

    cout << "El resultado de la operacion es: " << result << endl;
}

void Ejercicio5() {
    int option = 0;
    const float MILLE  = 0.621371f;
    const float KILOMETER = 1.60934f;
    int num;

    while (option != 3) {
        cout << "Ingrese que operacion desea realizar: " << endl;
        cout << "1 - Kilometros a Millas" << endl;
        cout << "2 - Millas a Kilometros" << endl;
        cout << "3 - Salir" << endl;
        cin >> option;

        while (option < 1 || option > 3) {
            cout << "Opción no válida. Debe ingresar un número del 1 al 3." << endl;
            cin >> option;
        }

        cout << "Ingrese el valor: " << endl;
        cin >> num;

        switch (option) {
        case 1:
            cout << "El valor de " << num << "kilometros, es de: " << num * MILLE << endl;
            break;
        case 2:
            cout << "El valor de " << num << "millas, es de: " << num * KILOMETER << endl;
            break;
        case 3:
            break;
        }
    }
}

void Ejercicio6() {
    const float INCREMENT = 3.67f;
    float enemyCount;
    int wave;
    int difficultyOption;
    Difficulty levelDifficulty;

    cout << "Ingrese el numero de oleada: " << endl;
    cin >> wave;

    cout << "Elija la dificultad: " << endl;
    cout << "1 - Easy" << endl;
    cout << "2 - Medium" << endl;
    cout << "3 - Hard" << endl;
    cin >> difficultyOption;
    
    while (difficultyOption < 1 || difficultyOption > 3) {
        cout << "Seleccione dentro del rango de 1 a 3" << endl;
        cin >> difficultyOption;
    }

    switch (difficultyOption) {
    case 1:
        levelDifficulty = Difficulty::Easy;
        break;
    case 2:
        levelDifficulty = Difficulty::Medium;
        break;
    case 3:
        levelDifficulty = Difficulty::Hard;
        break;
    }

    enemyCount = wave * static_cast<int>(levelDifficulty) * INCREMENT;

    cout << "En la oleada " << wave << " con dificultad " << difficultyOption << " habrá " << enemyCount << " enemigos." << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
