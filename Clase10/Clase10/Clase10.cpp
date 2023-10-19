// Clase10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Ejercicio1
struct Camara
{
	string name;
	int pixelsCaption;
	string tipeConection;
};
struct Bottle {
	string content;
	bool isLiquid;
	int cantLiters;
};
struct Book {
	string name;
	int cantPages;
	string tags[];
};
struct Joistick {
	string name;
	string tipeConection;
	string color;
};
struct Doll {
	string name;
	string material;
	string color;
};

//Ejercicio2
struct Sword {
	string name;
	int damage;
	float weight;
	string material;
	int durability;
};

void SwordList() {
	Sword swordArray[3];

	swordArray[0] = { "Excalibur", 50, 5.0, "Steel", 100 };
	swordArray[1] = { "Dagger of Shadows", 20, 1.0, "Obsidian", 50 };
	swordArray[2] = { "Thunderstrike Blade", 60, 8.0, "Mythril", 150 };

	for (size_t i = 0; i < 3; i++) {
		cout << "Sword " << i + 1 << ": " << swordArray[i].name << endl;
		cout << "Damage: " << swordArray[i].damage << endl;
		cout << "Weight: " << swordArray[i].weight << endl;
		cout << "Material: " << swordArray[i].material << endl;
		cout << "Durability: " << swordArray[i].durability << endl;
		cout << endl;
	}
}

//Ejercicio3
void Exercise3() {
	const int NUM_ENEMIES = 10;
	int maxDamage = 50;
	int minDamage = 1;
	int superiorDamage = 25;
	int superiorDamageCount = 0;
	int randomDamages[NUM_ENEMIES];
	int randomDamage;
	int totalDamage = 0;
	float averageDamage;
	float percentageDamageGreaterThan25;

	srand(time(0));

	for (int i = 0; i < NUM_ENEMIES; i++) {
		randomDamages[i] = rand() % maxDamage + minDamage;
		totalDamage += randomDamages[i];

		if (randomDamages[i] > superiorDamage) {
			superiorDamageCount++;
		}
	}

	averageDamage = totalDamage / NUM_ENEMIES;
	percentageDamageGreaterThan25 = (static_cast<double>(superiorDamage) / NUM_ENEMIES) * 100;

	cout << "Damages: ";
	for (int i = 0; i < NUM_ENEMIES; i++) {
		cout << randomDamages[i] << " ";
	}
	cout << endl;

	cout << "Total Damage: " << totalDamage << endl;
	cout << "Average Damage: " << averageDamage << endl;

	cout << "Percentage of damage greater than 25: " << percentageDamageGreaterThan25 << "%" << endl;
}

//Ejercicio4
struct Player {
	string name;
	int life;
	int basicDamage;
	int armor;
	float speed;
	float height;
	int experience;
};

//Ejercicio5
struct Enemy {
	int life;
	int armor;
	int expDrop;
};

Enemy CreateEnemies() {
	Enemy enemy;
	int minLife = 1;
	int maxLife = 10;
	int minArmor = 1;
	int maxArmor = 10;
	int minExpDrop = 10;
	int maxExpDrop = 20;
	srand(time(0));
	enemy.life = rand() % maxLife + minLife;
	enemy.armor = rand() % maxArmor + minArmor;
	enemy.expDrop = rand() % maxExpDrop + minExpDrop;

	return enemy;
}

void Game() {
	const int ENEMY_NUM = 5;
	Enemy enemyArray[ENEMY_NUM];
	Player player;
	int totalDamage = 0;
	int totalHits = 0;
	int totalExp = 0;

	player.armor = 10;
	player.life = 10;
	player.basicDamage = 2;
	player.height = 1.5;
	player.speed = 1.0;
	player.name = "Coquito";

	for (size_t i = 0; i < ENEMY_NUM; i++)
	{
		enemyArray[i] = CreateEnemies();
	}

	for (size_t i = 0; i < ENEMY_NUM; i++)
	{
		while (enemyArray[i].armor > 0) {
			enemyArray[i].armor -= player.basicDamage;
			totalDamage += player.basicDamage;
			totalHits++;
		}
		while (enemyArray[i].life > 0) {
			enemyArray[i].life -= player.basicDamage;
			totalDamage += player.basicDamage;
			totalHits++;
		}
		totalExp += enemyArray[i].expDrop;
	}

	cout << "Total Damage: " << totalDamage << endl;
	cout << "Total Hits: " << totalHits << endl;
	cout << "Total EXP: " << totalExp << endl;
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
