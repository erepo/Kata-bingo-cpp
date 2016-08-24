#include "../src/Bombo.h"
#include "../src/MockJugador.h"
#include "../src/MockBombo.h"
#include "gmock/gmock.h"
#define NUM_BOLAS_EN_BOMBO 89

class BomboTestFixture : public testing::Test {
	protected:
	virtual void SetUp() {
		bingoBombo = Bombo();
	}
	Bombo bingoBombo;
	MockJugador jugadorMocked;
	MockBombo bomboMocked;
};

TEST_F(BomboTestFixture,testObtenerNumeroDesdeBombo) {
	ASSERT_TRUE(bingoBombo.getNumero()!=-1);
}

TEST_F(BomboTestFixture,testDosExtraccionesConsecutivasDiferentesNumeros) {
	int numero1 = bingoBombo.getNumero();
	int numero2 = bingoBombo.getNumero();
	ASSERT_TRUE(numero1!=numero2);
}

TEST_F(BomboTestFixture,testTresExtraccionesConsecutivasDiferentesNumeros) {
	int numero1 = bingoBombo.getNumero();
	int numero2 = bingoBombo.getNumero();
	int numero3 = bingoBombo.getNumero();
	ASSERT_TRUE(numero1!=numero2);
	ASSERT_TRUE(numero1!=numero3);
	ASSERT_TRUE(numero2!=numero3);
}

TEST_F(BomboTestFixture,testBomboDeberiaEstarVacio) {
	for(int i=0;i<NUM_BOLAS_EN_BOMBO;i++)
		bingoBombo.getNumero();
	ASSERT_TRUE(bingoBombo.getNumero()==-1);
}

TEST_F(BomboTestFixture,testBingoNotificaAJugadorCuandoHayNuevoNumero) {
	bingoBombo.addJugador(jugadorMocked);
	int numero = bingoBombo.getNumero();
	EXPECT_CALL(jugadorMocked,notificacionDeNuevoNumero(numero)).Times(1);
	jugadorMocked.notificacionDeNuevoNumero(numero);
}


