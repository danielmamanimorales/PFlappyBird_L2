#pragma once
#include <iostream>
using namespace std;
class Escenario
{
private:
	int ancho;
	int alto;
	int posicionX;
	int posicionY;
	string nombre_escenario;

	void movimiento(int direccionX);
};

