#include "../src/Fila.h"
#include "gmock/gmock.h"

class FilaTestFixture : public testing::Test {
	protected:
	virtual void SetUp() {
		fila = Fila();
	}
	Fila fila;
};

TEST_F(FilaTestFixture,testLaCartaContieneNueveCasillasEnCadaFila) {
	ASSERT_EQ(9,fila.length());
}

TEST_F(FilaTestFixture,testCuatroCuadrosBlancosEnLaFila) {
	ASSERT_TRUE(fila.esBlanco(0));
	ASSERT_TRUE(fila.esBlanco(1));
	ASSERT_TRUE(fila.esBlanco(2));
	ASSERT_TRUE(fila.esBlanco(3));
}

TEST_F(FilaTestFixture,testCincoCuadrosConNumerosEnLaFila) {
	ASSERT_TRUE(fila.esNumero(0));
	ASSERT_TRUE(fila.esNumero(1));
	ASSERT_TRUE(fila.esNumero(2));
	ASSERT_TRUE(fila.esNumero(3));
}
