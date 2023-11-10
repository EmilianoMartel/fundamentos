#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Computer {
public:
    Computer(string name,string type, int ramMemory, int internalMemory) : name(name),type(type),ramMemory(ramMemory),internalMemory(internalMemory) {}

private:
    string name;
    string type;
    int ramMemory;
    int internalMemory;
};

class Pokemon {
public:
    Pokemon(string nombre, string tipo) : nombre(nombre), tipo(tipo), vida(100) {}

    void atacar(Pokemon& oponente) {
        int danio = rand() % 20 + 1;
        cout << nombre << " ataca a " << oponente.getNombre() << " y le causa " << danio << " puntos de daño.\n";
        oponente.recibirDanio(danio);
    }

    void recibirDanio(int danio) {
        vida -= danio;
        if (vida < 0) {
            vida = 0;
            cout << nombre << " ha sido derrotado.\n";
        }
        else {
            cout << nombre << " tiene " << vida << " puntos de vida restantes.\n";
        }
    }

    string getNombre() const {
        return nombre;
    }

private:
    string nombre;
    string tipo;
    int vida;
};

struct Posicion {
    int x;
    int y;
};

class Personaje {
public:
    Personaje(string nombre, Posicion posicion) : nombre(nombre), posicion(posicion) {}

    void moverse(int nuevaX, int nuevaY) {
        posicion.x = nuevaX;
        posicion.y = nuevaY;
        cout << nombre << " se ha movido a la posición (" << posicion.x << ", " << posicion.y << ").\n";
    }

private:
    string nombre;
    Posicion posicion;
};s

class Country {
public:
    Country(string name, double x, double y) : name(name), x(x), y(y) {}

    string getName() const {
        return name;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

private:
    string name;
    double x, y;
};

class Airplane {
public:
    Airplane(string name, double fuel, string type, int maxPassengers, int maxTrips)
        : name(name), fuel(fuel), type(type), maxPassengers(maxPassengers), maxTrips(maxTrips) {}

    void fly(const Country& source, const Country& target) {
        double distance = calculateDistance(source, target);
        double fuelConsumed = 1.5 * distance;

        if (fuelConsumed > fuel) {
            cout << name << " se quedó sin gasolina antes de llegar a " << target.getName() << ".\n";
            return;
        }

        int passengers = rand() % maxPassengers + 1;

        cout << name << " volando desde " << source.getName() << " hasta " << target.getName() << " con "
            << passengers << " pasajeros. Gasolina consumida: " << fuelConsumed << ".\n";

        fuel -= fuelConsumed;
        maxTrips--;

        if (maxTrips == 0) {
            cout << name << " ha completado su cantidad máxima de viajes.\n";
        }
    }

private:
    double calculateDistance(const Country& source, const Country& target) const {
        double dx = source.getX() - target.getX();
        double dy = source.getY() - target.getY();
        return sqrt(dx * dx + dy * dy);
    }

    string name;
    double fuel;
    string type;
    int maxPassengers;
    int maxTrips;

public:
    double getFuel() const {
        return fuel;
    }

    int getMaxTrips() const {
        return maxTrips;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Country country1("País1", 0, 0);
    Country country2("País2", 1, 2);
    Country country3("País3", 3, 1);

    vector<Country> countries = { country1, country2, country3 };

    Airplane airplane1("Avión1", 100, "Tipo1", 50, 3);
    Airplane airplane2("Avión2", 120, "Tipo2", 40, 4);
    Airplane airplane3("Avión3", 80, "Tipo3", 30, 2);
    Airplane airplane4("Avión4", 150, "Tipo4", 60, 5);
    Airplane airplane5("Avión5", 90, "Tipo5", 35, 3);

    vector<Airplane> airplanes = { airplane1, airplane2, airplane3, airplane4, airplane5 };

    srand(static_cast<unsigned>(time(nullptr)));

    while (true) {
        for (auto& airplane : airplanes) {
            if (airplane.getMaxTrips() > 0) {
                int sourceIndex = rand() % countries.size();
                int targetIndex = rand() % countries.size();
                while (sourceIndex == targetIndex) {
                    targetIndex = rand() % countries.size();
                }
                Country source = countries[sourceIndex];
                Country target = countries[targetIndex];
                airplane.fly(source, target);
            }
        }

        bool allTripsCompleted = true;
        for (const auto& airplane : airplanes) {
            if (airplane.getMaxTrips() > 0) {
                allTripsCompleted = false;
                break;
            }
        }

        if (allTripsCompleted) {
            break;
        }
    }

    for (const auto& airplane : airplanes) {
        cout << "Estadísticas de " << airplane.getName() << " - Gasolina restante: " << airplane.getFuel() << "\n";
    }

    return 0;
}