#ifndef MOCKJUGADOR_H_
#define MOCKJUGADOR_H_

#include "Jugador.h"
#include "gmock/gmock.h"

using namespace std;

class MockJugador : public Jugador{

public:
	using Jugador::notificacionDeNuevoNumero;
	MOCK_METHOD1(notificacionDeNuevoNumero, void(int numero));
	using Jugador::comprarCarta;
	MOCK_METHOD1(comprarCarta,void(Carta carta));
	using Jugador::tieneCarta;
	MOCK_METHOD0(tieneCarta,bool());
	using Jugador::chequeoNumero;
	MOCK_METHOD1(chequeoNumero,int(int numero));
	using Jugador::chequeoLineaGanadora;
	MOCK_METHOD1(chequeoLineaGanadora,int(int numero));
};

#endif /* MOCKJUGADOR_H_ */
