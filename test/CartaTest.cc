#include "../src/Carta.h"
#include "gmock/gmock.h"

class CartaTestFixture : public testing::Test {
	protected:
	virtual void SetUp() {
		carta = Carta();
	}
	Carta carta;
};


TEST_F(CartaTestFixture, testNumeroDeFilasCorrectas){
	ASSERT_EQ(3,carta.numeroDeFilas());
}

TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorPrimeraColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(0),0);
	ASSERT_LE(carta.randomNumeroParaColumna(0),9);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorSegundaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(1),10);
	ASSERT_LE(carta.randomNumeroParaColumna(1),19);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorTerceraColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(2),20);
	ASSERT_LE(carta.randomNumeroParaColumna(2),29);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorCuartaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(3),30);
	ASSERT_LE(carta.randomNumeroParaColumna(3),39);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorQuintaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(4),40);
	ASSERT_LE(carta.randomNumeroParaColumna(4),49);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorSextaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(5),50);
	ASSERT_LE(carta.randomNumeroParaColumna(5),59);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorSeptimaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(6),60);
	ASSERT_LE(carta.randomNumeroParaColumna(6),69);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorOctavaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(7),70);
	ASSERT_LE(carta.randomNumeroParaColumna(7),79);
}
TEST_F(CartaTestFixture,testLimiteInferiorYSuperiorNovenaColumna) {
	ASSERT_GT(carta.randomNumeroParaColumna(8),80);
	ASSERT_LE(carta.randomNumeroParaColumna(8),89);
}
