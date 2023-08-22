#include <iostream>
#include "Zombie.h"
#include "ZombieDancer.h"
#include "ZombieMaroyu.h"

using namespace std;

int main() {
	//Zombie Juanito("David", 30, 45, 23, 100.0f, 300.0f, "Destructos de puertas");
	Zombie Juanito("Juancho");
	//Juanito.setNombre("Juanito");

	cout << "El nombre del zombie es: " << Juanito.getNombre() << endl;
	cout << "La energia del zombie es: " << Juanito.getEnergia() << endl;
	cout << "La velocidad del zombie es: " << Juanito.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Juanito.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanito.getPosicionY() << endl;
	cout << "El tipo de zombie es: " << Juanito.getTipoZombie() << endl;


	ZombieDancer Juanita;
	Juanita.setNombre("Juanita");
	cout << "El nombre del zombie es: " << Juanita.getNombre() << endl;
	cout << "La energia del zombie es: " << Juanita.getEnergia() << endl;
	cout << "La velocidad del zombie es: " << Juanita.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Juanita.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanita.getPosicionY() << endl;
	cout << "El tipo de zombie es: " << Juanita.getTipoZombie() << endl;
	cout << "El nivel de destreza de baile del zombie es: " << Juanita.getNivelDestrezaBaile() << endl;
	Juanita.bailar();
	cout << "La posicion X del zombie es: " << Juanita.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanita.getPosicionY() << endl;

	ZombieMaroyu Rosita;
	Rosita.setNombre("Rosita");
	cout << "El nombre del zombie es: " << Rosita.getNombre() << endl;
	cout << "La energia del zombie es: " << Rosita.getEnergia() << endl;
	cout << "La velocidad del zombie es: " << Rosita.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Rosita.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Rosita.getPosicionY() << endl;
	Rosita.bailar();
	cout << "La posicion X del zombie es: " << Rosita.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Rosita.getPosicionY() << endl;
	
	return 0;
}