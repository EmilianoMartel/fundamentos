// Aleatoriedad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <random>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum class Dice {
    d6 = 6,
    d10 = 10,
    d12 = 12,
    d20 = 20
};

enum class Races {
    Human,
    Orc,
    Elf,
    Dwarf
};

enum class Classes {
    Warrior,
    Archer,
    Wizard
};

enum class Election {
    Scissors,
    Paper,
    Rock
};

//Ejercicio1
/*
* Risk of Rain 2 = Los objetos que te caen al comprar un cofre, los enemigos que aparecen en cada nivel
* Monster Hunter Rise = Los objetos que te dan los monstros al degollarlos, el pachinko
* The binding of isaac = Los mapas y la cantidad, los enemigos que te aparecen en cada mapa
*/

//Ejercicio2
void Ejercicio2() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0, 100);

    int result = distribution(gen);

    cout << "El número aleatorio entre 0 y 100 es: " << result << endl;
}

//Ejercicio3
void Ejercicio3() {
    Dice dice;
    int answer;
    random_device rd;
    mt19937 gen(rd());
    int result;
    const int min = 1;
    int max;

    cout << "Que dado desea tirar?" << endl;
    cout << "1 - D6" << endl;
    cout << "2 - D10" << endl;
    cout << "3 - D12" << endl;
    cout << "4 - D20" << endl;
    cin >> answer;

    while (answer > 4 || answer < 1 || answer == NULL) {
        cout << "Porfavor, ingresar un dato valido:" << endl;
        cin >> answer;
    }

    switch (answer) {
    case 1:
        dice = Dice::d6;
        break;
    case 2:
        dice = Dice::d10;
        break;
    case 3:
        dice = Dice::d12;
        break;
    case 4:
        dice = Dice::d20;
        break;
    }

    max = static_cast<int>(dice);

    uniform_int_distribution<int> distribucion(min, max);

    result = distribucion(gen);

    cout << "El resultado es: " << result << endl;
}

//Ejercicio4
Races RandomRace() {
    int race = rand() % static_cast<int>(Races::Dwarf) + 1;
    return static_cast<Races>(race);
}

Classes RandomClass() {
    int classes = rand() % static_cast<int>(Classes::Wizard) + 1;
    return static_cast<Classes>(classes);
}

string ElectionRace() {
    Races race;
    race = RandomRace();
    string raceString;

    switch (race)
    {
    case Races::Human:
        raceString = "Human";
        break;
    case Races::Orc:
        raceString = "Orc";
        break;
    case Races::Elf:
        raceString = "Elf";
        break;
    case Races::Dwarf:
        raceString = "Dwarf";
        break;
    }

    return raceString;
}

string ElectionClass() {
    Classes classes;
    string classString;

    classes = RandomClass();

    switch (classes)
    {
    case Classes::Warrior:
        classString = "Warrior";
        break;
    case Classes::Archer:
        classString = "Archer";
        break;
    case Classes::Wizard:
        classString = "Wizard";
        break;
    }

    return classString;
}

void Ejercicio4() {
    string input;
    int cant = 1;
    bool inputValue = false;

    string race;
    string classes;

    do {
        cout << "Por favor, ingrese cuantos personajes quiere crear: " << endl;
        getline(cin, input);

        istringstream stream(input);

        if (stream >> cant) {
            inputValue = true;
        }
        else {
            cout << "La entrada no es un numero entero valido. Intentelo de nuevo." << endl;
        }
    } while (!inputValue);

    for (size_t i = 0; i < cant; i++)
    {
        race = ElectionRace();
        classes = ElectionClass();

        cout << "La raza es: " << race << " La clase es: " << classes << endl;
    }
}

//Ejercicio5
int CheckInt() {
    string input;
    bool inputValue = false;
    int numPlayer = 1;

    do {
        cout << "Ingresa un numero (1-100): " << endl;
        getline(cin, input);

        istringstream stream(input);

        if (stream >> numPlayer) {
            inputValue = true;
        }
        else {
            cout << "La entrada no es un numero entero valido. Intentelo de nuevo." << endl;
        }
    } while (!inputValue);

    return numPlayer;
}

void Ejercicio5() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 100);

    int randomNum = distribution(gen);

    int countTry = 0;
    int numPlayer;

    while (true) {
        countTry++;
        numPlayer = CheckInt();
        if (numPlayer < randomNum) {
            cout << "El número es más alto." << endl;
        }
        else if (numPlayer > randomNum) {
            cout << "El número es más bajo." << endl;
        }
        else {
            cout << "¡Ganaste! El número era " << randomNum << ". Te tomó " << countTry << " intentos." << endl;
            break;
        }
    }
}

//Ejercicio6
Election RandomElection() {
    int election = rand() % static_cast<int>(Election::Rock) + 1;
    return static_cast<Election>(election);
}

int CheckElection() {
    string input;
    bool inputValue = false;
    int electionPlayer = 1;

    do {
        cout << "Cual es su eleccion?: " << endl;
        cout << "1 - Scissors" << endl;
        cout << "2 - Paper" << endl;
        cout << "3 - Rock" << endl;
        getline(cin, input);

        istringstream stream(input);

        if (stream >> electionPlayer && electionPlayer > 0 && electionPlayer < 4) {
            inputValue = true;
        }
        else {
            cout << "La entrada no es valida. Intentelo de nuevo." << endl;
        }
    } while (!inputValue);

    return electionPlayer;
}

void Ejercicio6() {
    Election computerElection;
    Election playerElection;
    int election;
    computerElection = RandomElection();
    election = CheckElection();

    switch (election) {
    case 1:
        playerElection = Election::Scissors;
        break;
    case 2:
        playerElection = Election::Paper;
        break;
    case 3:
        playerElection = Election::Rock;
        break;
    }
    switch (playerElection) {
    case Election::Paper:
        switch (computerElection)
        {
        case Election::Scissors:
            cout << "You choose Paper" << "---" << "Computer choose Scissors" << endl;
            cout << "Computer wins" << endl;
            break;
        case Election::Paper:
            cout << "You choose Paper" << "---" << "Computer choose Paper" << endl;
            cout << "Draw" << endl;
            break;
        case Election::Rock:
            cout << "You choose Paper" << "---" << "Computer choose Rock" << endl;
            cout << "You wins" << endl;
            break;
        }
        break;
    case Election::Rock:
        switch (computerElection)
        {
        case Election::Scissors:
            cout << "You choose Rock" << "---" << "Computer choose Scissors" << endl;
            cout << "You wins" << endl;
            break;
        case Election::Paper:
            cout << "You choose Rock" << "---" << "Computer choose Paper" << endl;
            cout << "Computer wins" << endl;
            break;
        case Election::Rock:
            cout << "You choose Rock" << "---" << "Computer choose Rock" << endl;
            cout << "Draw" << endl;
            break;
        }
        break;
    case Election::Scissors:
        switch (computerElection)
        {
        case Election::Scissors:
            cout << "You choose Scissors" << "---" << "Computer choose Scissors" << endl;
            cout << "Draw" << endl;
            break;
        case Election::Paper:
            cout << "You choose Scissors" << "---" << "Computer choose Paper" << endl;
            cout << "You win" << endl;
            break;
        case Election::Rock:
            cout << "You choose Scissors" << "---" << "Computer choose Rock" << endl;
            cout << "Computer win" << endl;
            break;
        }
        break;
    }
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
