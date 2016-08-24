#include "Carta.h"

Carta::Carta(){
	for(int i=0;i<FILA_LENGTH;i++){
		f.push_back(Fila());
	}
}

int Carta::randomNumeroParaColumna(int numeroDeColumna){
	int num = 1 + (rand() % (int)(9 - 1 + 1));
	int numero = -1;
	if(numeroDeColumna==0){
		numero = num;
	}else{
		numero = numeroDeColumna*10 + num;
	}
	return numero;
}
int Carta::numeroDeFilas(){
	return f.size();
}

int Carta::numeroDeFila(int numero){
	if(numero >= 0){
		for (int i = 0; i < NUMEROS_LENGTH; i++) {
			Fila fila = f[i];
			if(fila.esNumero(numero))
				return numeroColuma(numero);
		}
	}
	return -1;
}

int Carta::numeroColuma(int numeroDeColumna){
	int numero = 1;
	if(numeroDeColumna >=0 && numeroDeColumna<=9){
		numero = 1;
	}else if(numeroDeColumna >=10 && numeroDeColumna<=19){
		numero = 2;
	}
	return numero;
}

Carta::~Carta() {
}
