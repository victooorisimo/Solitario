#include "Deck.h"

int posicion;
Card* Cards[52];

Deck::Deck() {
	posicion = -1;
	int n = 2;
	char color = 'N';
	for (int i = 0; i < 52; i++) {
		if (n == 28) {
			color = 'R';
			n = 2;
		}
		Cards[i] = new Card(n / 2, color);
		n++;
	}
	Revolver();
}


Deck::~Deck() {
}

void Deck::Revolver() {
	System::Random^ rng = gcnew System::Random();
	for (int i = 0; i < 100; i++) {
		Card* ant = Cards[rng->Next(0, 52)];
		Card* sig = Cards[rng->Next(0, 52)];
		Card aux = *ant;
		*ant = *sig;
		*sig = aux;
	}
}

Card* Deck::Sacar() {
	posicion++;
	return Cards[posicion];
}