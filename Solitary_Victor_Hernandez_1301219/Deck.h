#pragma once
#include "Card.h"

class Deck {
	public:
		Card* Cards[52];
		Deck();
		~Deck();
		Card* Deck::Sacar();
	private:
		int posicion;
		void Deck::Revolver();

};

