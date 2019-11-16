#include "Slack.h"
Card* head;

Slack::Slack()
{
	head = nullptr;
}


Slack::~Slack()
{
}

void Slack::Push(Card* nuevo) {
	if (head != nullptr) {
		nuevo->sig = head;
	}
	head = nuevo;
}

Card Slack::Pop() {
	Card aux = *head;
	head = head->sig;
	(&aux)->sig = nullptr;
	return aux;
}

Card* Slack::UltimaCardVolteada() {
	return UltimaCardVolteadaRecursiva(head);
}

int Slack::CantidadCardsVolteadas() {
	return CantidadCardsVolteadasRecursiva(head);
}

System::String^ Slack::String() {
	return StringRecursivo(head);
}

Card* Slack::UltimaCardVolteadaRecursiva(Card* pos) {
	if (pos->sig != nullptr) {
		if (pos->sig->volteado) {
			return UltimaCardVolteadaRecursiva(pos->sig);
		}
		else {
			return pos;
		}
	}
	else {
		return pos;
	}
}

int Slack::CantidadCardsVolteadasRecursiva(Card* pos) {
	if (pos->sig != nullptr) {
		if (pos->sig->volteado) {
			return CantidadCardsVolteadasRecursiva(pos->sig) + 1;
		}
		else {
			return 1;
		}
	}
	else {
		return 1;
	}
}

System::String^ Slack::StringRecursivo(Card* pos) {
	if (pos != nullptr) {
		if (pos->sig == nullptr) {
			return pos->Valor();
		}
		else {
			return StringRecursivo(pos->sig) + "\n" + pos->Valor();
		}
	}
	else {
		return "--";
	}
}