#pragma once
#include "Slack.h"
#include "Deck.h"
#include "Card.h"

class Solitary {
	public:
		Deck* deck;
		Slack* Slacks[9];
		Solitary();
		~Solitary();
		Card Solitary::Mover(Slack* inicio, Slack* fin);

};

