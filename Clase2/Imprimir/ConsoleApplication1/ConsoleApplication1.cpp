// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintName();
void PrintDate();
void PrintAge();
void PrintHeight();
void displaySouthAmericanCountries();

int main()
{
    cout << "Hello World!\n";
    PrintHeight();
    return 0;
}

void PrintName() {
    string name;
    cout << "What is your full name?";
    cin >> name;
    cout << "Hi" << name << "My name is Emiliano David Martel Rodriguez" << endl;
}

void PrintDate() {
    string date;
    cout << "When is your birthday? dd/mm/yy";
    cin >> date;
    cout << "Your birthday is: " << date << "My birthday is 25/10/1994" << endl;
}

void PrintAge() {
    int age;
    cout << "How old are you?";
    cin >> age;
    cout << "Your age is: " << age << "My age is 28." << endl;
}

void PrintHeight() {
    float meter;
    float centimeter;
    cout << "How tall are you in meter?";
    cin >> meter;
    centimeter = meter / 100;
    cout << "Your height in meter is: " << meter << ". My height is 157" << endl;
    cout << "Your height in centimeter is: " << centimeter << ". My is 1.57" << endl;
 }

void displaySouthAmericanCountries() {
    vector<string> southAmericanCountries = {
       "Argentina", "Bolivia", "Brazil", "Chile", "Colombia",
       "Ecuador", "Guyana", "Paraguay", "Peru", "Suriname",
       "Uruguay", "Venezuela"
    };

    cout << "Countries in South America:" << endl;
    for (size_t i = 0; i < southAmericanCountries.size(); ++i) {
        cout << i + 1 << ". " << southAmericanCountries[i] << endl;
    }
    cout << "Total number of countries in South America: " << southAmericanCountries.size() << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
