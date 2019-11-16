#pragma once
#include "Card.h"

class Slack {
public:
	Card* head;
	Slack();
	~Slack();
	void Slack::Push(Card* nuevo);
	Card Slack::Pop();
	Card* Slack::UltimaCardVolteada();
	int Slack::CantidadCardsVolteadas();
	System::String^ Slack::String();
private:
	Card* Slack::UltimaCardVolteadaRecursiva(Card* pos);
	int Slack::CantidadCardsVolteadasRecursiva(Card* pos);
	System::String^ Slack::StringRecursivo(Card* pos);

};

