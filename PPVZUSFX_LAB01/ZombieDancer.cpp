#include "ZombieDancer.h"

void ZombieDancer::bailar()
{
	direccionX = 1;
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidad;
	}
	direccionX = -1;
	direccionY = -1;
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidad;
		posicionY += direccionY * velocidad;
	}
	direccionX = 1;
	direccionY = 0;
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidad;
	}
}
