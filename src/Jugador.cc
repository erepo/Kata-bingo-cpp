#include "Jugador.h"

Jugador::Jugador(){

}

void Jugador::notificacionDeNuevoNumero(int numero){
	int linea = bingoCarta.numeroDeFila(numero);
}

void Jugador::comprarCarta(Carta carta){
	bingoCarta = carta;
}

bool Jugador::tieneCarta(){
	return true;
}

int Jugador::chequeoNumero(int numero){
	return bingoCarta.numeroDeFila(numero);
}

int Jugador::chequeoLineaGanadora(int numero){
	int fila = chequeoNumero(numero);
	return 1;
}

Jugador::~Jugador(){

}
