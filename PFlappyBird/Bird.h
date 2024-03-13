#pragma once
#include <iostream>
using namespace std;
class Bird
{
public:
	int posicionX;
	int posicionY;
	int caida;

private:
	int contadorObsVen;

	void vuelo(int direccionX, int direccionY);
};

