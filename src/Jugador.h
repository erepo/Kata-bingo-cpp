#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <string>
#include <vector>
#include "Carta.h"

using namespace std;

class Jugador {

private:
	Carta bingoCarta;
public:
	Jugador();
	virtual void notificacionDeNuevoNumero(int numero);
	virtual void comprarCarta(Carta carta);
	virtual bool tieneCarta();
	virtual int chequeoNumero(int numero);
	virtual int chequeoLineaGanadora(int numero);
	virtual ~Jugador();
};


#endif /* JUGADOR_H_ */
