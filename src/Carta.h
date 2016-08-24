#ifndef CARTA_H_
#define CARTA_H_

#include <string>
#include <vector>
#include <memory>
#include <cstdlib>
#include "Fila.h"
#define FILA_LENGTH 3

using namespace std;

class Carta {

private:
	vector<Fila> f;

public:
	Carta();
	virtual int randomNumeroParaColumna(int numeroDeColumna);
	virtual int numeroDeFilas();
	virtual int numeroDeFila(int numero);
	int numeroColuma(int numero);
	virtual ~Carta();
};

#endif /* CARTA_H_ */
