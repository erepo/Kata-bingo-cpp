#ifndef MOCKCARTA_H_
#define MOCKCARTA_H_

#include "Carta.h"
#include "gmock/gmock.h"

using namespace std;

class MockCarta : public Carta{

public:
	using Carta::randomNumeroParaColumna;
	MOCK_METHOD1(randomNumeroParaColumna, int(int numeroDeColumna));
	using Carta::numeroDeFila;
	MOCK_METHOD1(numeroDeFila, int(int numeroDeColumna));
	using Carta::numeroDeFilas;
	MOCK_METHOD0(numeroDeFilas,int());
};

#endif /* MOCKCARTA_H_ */
