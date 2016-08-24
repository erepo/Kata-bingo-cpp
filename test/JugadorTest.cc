#include "../src/Jugador.h"
#include "../src/MockCarta.h"
#include "../src/MockBombo.h"
#include "gmock/gmock.h"

using namespace testing;

class JugadorTestFixture : public testing::Test {
	protected:
	virtual void SetUp() {
		jugador = Jugador();
	}
	Jugador jugador;
	MockCarta cartaMocked;
	MockBombo bomboMocked;
};

TEST_F(JugadorTestFixture,testJugadorCompraCarta) {
	jugador.comprarCarta(cartaMocked);
	ASSERT_TRUE(jugador.tieneCarta());
}

TEST_F(JugadorTestFixture,testChequeoDeNumeroMismaFila) {
	int numeroFila = 1;
	EXPECT_CALL(cartaMocked,numeroDeFila(numeroFila)).Times(AtLeast(1));
	EXPECT_CALL(bomboMocked,getNumero()).WillOnce(Return(1));
	jugador.comprarCarta(cartaMocked);
	cartaMocked.numeroDeFila(numeroFila);
	ASSERT_EQ(1,jugador.chequeoNumero(bomboMocked.getNumero()));
}

TEST_F(JugadorTestFixture,testChequeoDeLlamadaDeNumeroEnLaFila) {
	int anyInt = 1;
	jugador.comprarCarta(cartaMocked);
	jugador.chequeoNumero(anyInt);
	EXPECT_CALL(cartaMocked,numeroDeFila(anyInt)).Times(AtLeast(1));
	cartaMocked.numeroDeFila(anyInt);
}

TEST_F(JugadorTestFixture,testChequeoDeNumeroNoEstaEnNingunaFila) {
	int anyIntFalse = -1;
	EXPECT_CALL(cartaMocked, numeroDeFila(anyIntFalse)).WillOnce(Return(anyIntFalse));
	EXPECT_CALL(bomboMocked, getNumero()).WillOnce(Return(anyIntFalse));
	cartaMocked.numeroDeFila(anyIntFalse);
	jugador.comprarCarta(cartaMocked);
	int numero = bomboMocked.getNumero();
	ASSERT_EQ(-1,jugador.chequeoNumero(numero));
}

TEST_F(JugadorTestFixture,testJugadorChequeaNumeroYVericaSiTieneLineaGanadora) {
	int lineaGanadora = 1;
	int anyInt = 5;
	jugador.comprarCarta(cartaMocked);
	jugador.chequeoLineaGanadora(lineaGanadora);
	EXPECT_CALL(cartaMocked,numeroDeFila(anyInt)).Times(AtLeast(1));
	cartaMocked.numeroDeFila(anyInt);
}
