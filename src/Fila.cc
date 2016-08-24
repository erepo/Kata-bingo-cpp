#include "Fila.h"

Fila::Fila(){
	for (int i = 0; i < BLANCOS_LENGTH; ++i) {
		indicesBlancos.push_back(0);
	}
	for (int i = 0; i < NUMEROS_LENGTH; ++i) {
		indicesNumeros.push_back(1);
	}
}

bool Fila::esBlanco(int columna){
	return indicesBlancos[columna]==0;
}

bool Fila::esNumero(int columna){
	return indicesNumeros[columna]!=0;
}

int Fila::length(){
	return COLUMNA_LENGTH;
}

Fila::~Fila(){

}
