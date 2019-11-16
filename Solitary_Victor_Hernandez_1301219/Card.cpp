#include "Card.h"

int numero;
char color;
bool volteado;
Card* sig;

Card::Card(int n, char c){
	numero = n;
	color = c;
	volteado = false;
	sig = nullptr;
}

Card::Card(int n, char c, bool v, Card* s){
	numero = n;
	color = c;
	volteado = v;
	sig = s;
}


Card::~Card(){
}

System::String^ Card::Valor() {
	if (volteado) {
		if (color == 'N') {
			return numero.ToString() + "N";
		}
		else {
			return numero.ToString() + "R";
		}
	}
	else {
		return "??";
	}
}

void Card::Voltear() {
	volteado = true;
}