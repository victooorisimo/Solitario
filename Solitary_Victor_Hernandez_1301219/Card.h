#pragma once
class Card {
public:
	Card(int n, char c);
	Card(int n, char c, bool v, Card* s);
	~Card();
	int numero;
	char color;
	bool volteado;
	Card* sig;
	System::String^ Card::Valor();
	void Card::Voltear();
};

