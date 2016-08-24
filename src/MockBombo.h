#ifndef MOCKBOMBO_H_
#define MOCKBOMBO_H_

#include "Bombo.h"
#include "gmock/gmock.h"

using namespace std;

class MockBombo : public Bombo{

public:
	using Bombo::addJugador;
	MOCK_METHOD1(addJugador, void(Jugador jugador));
	using Bombo::getNumero;
	MOCK_METHOD0(getNumero,int());
};

#endif /* MOCKBOMBO_H_ */
