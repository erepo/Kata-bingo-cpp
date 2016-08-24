#ifndef FILA_H_
#define FILA_H_

#include <string>
#include <vector>
#define COLUMNA_LENGTH 9
#define BLANCOS_LENGTH 4
#define NUMEROS_LENGTH 5

using namespace std;

class Fila {

private:
	vector<int> indicesBlancos;
	vector<int> indicesNumeros;
public:
	Fila();
	vector<int> blancos();
	bool esBlanco(int columna);
	vector<int> numeros();
	bool esNumero(int columna);
	int length();
	virtual ~Fila();
};

#endif /* FILA_H */
