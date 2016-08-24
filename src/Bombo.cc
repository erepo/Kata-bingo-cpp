#include "Bombo.h"

Bombo::Bombo(){
	for (int i=1; i<NUM_BOLAS_EN_BOMBO; i++) {
		bomboNumeros.push_back(i);
	}

}

Bombo::~Bombo(){

}

int Bombo::getNumero(){
	int numero = -1;
	if(bomboNumeros.size()==0) {
		return numero;
	}else{
		int indice = bomboNumeros.size()-1;
		numero = bomboNumeros[indice]; //extraigo el numero
		bomboNumeros.pop_back(); //se elimina la bola del bombo
	}
	return numero;
}

void Bombo::addJugador(Jugador jugador){
	jugadores.push_back(jugador);
}
