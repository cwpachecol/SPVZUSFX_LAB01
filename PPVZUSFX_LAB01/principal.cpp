#include <iostream>
#include "Zombie.h"

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


	return 0;
}