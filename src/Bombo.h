#ifndef BOMBO_H_
#define BOMBO_H_

#include <string>
#include <vector>
#include "Jugador.h"
#define NUM_BOLAS_EN_BOMBO 89

using namespace std;

class Bombo {

private:
	vector<int> bomboNumeros;
	vector<Jugador> jugadores;
public:
	Bombo();
	virtual int getNumero();
	virtual void addJugador(Jugador jugador);
	virtual ~Bombo();
};

#endif /* BOMBO_H */
