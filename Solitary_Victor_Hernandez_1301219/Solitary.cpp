#include "Solitary.h"

Deck* deck;
Slack* Slacks[9];

Solitary::Solitary(){
	deck = new Deck();
	for (int i = 1; i <= 7; i++) {
		Slacks[i] = new Slack();
		for (int a = 0; a < i; a++) {
			Slacks[i]->Push(deck->Sacar());
		}
		Slacks[i]->head->Voltear();
	}
	Slacks[0] = new Slack();
	for (int i = 0; i < 24; i++) {
		Slacks[0]->Push(deck->Sacar());
	}
	Slacks[0]->head->Voltear();
	Slacks[8] = new Slack();
}


Solitary::~Solitary()
{
}

Card Solitary::Mover(Slack* inicio, Slack* fin) {
	Card* nuevo = inicio->UltimaCardVolteada();
	if (fin->head != nullptr) {
		if (nuevo->numero == fin->head->numero - 1 && nuevo->color != fin->head->color) {
			while (inicio->head != nuevo) {
				if (Slacks[8]->head != nullptr) {
					Card aux = *Slacks[8]->head;
					Card tempo = inicio->Pop();
					Slacks[8]->head = new Card((&aux)->numero, (&aux)->color, (&aux)->volteado, (&aux)->sig);
					Slacks[8]->Push(&tempo);
				}
				else {
					Card tempo = inicio->Pop();
					Slacks[8]->Push(&tempo);
				}
			}
			if (Slacks[8]->head != nullptr) {
				Card aux = *Slacks[8]->head;
				Card tempo = inicio->Pop();
				Slacks[8]->head = new Card((&aux)->numero, (&aux)->color, (&aux)->volteado, (&aux)->sig);
				Slacks[8]->Push(&tempo);
			}
			else {
				Card tempo = inicio->Pop();
				Slacks[8]->Push(&tempo);
			}
			while (Slacks[8]->head != nullptr) {
				Card aux = *fin->head;
				Card tempo = Slacks[8]->Pop();
				fin->head = new Card((&aux)->numero, (&aux)->color, (&aux)->volteado, (&aux)->sig);
				fin->Push(&tempo);
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("El movimiento no es válido", "Error");
		}
	}
	else if (nuevo->numero == 13) {
		while (inicio->head != nuevo) {
			Slacks[8]->Push(&inicio->Pop());
		}
		Slacks[8]->Push(&inicio->Pop());
		while (Slacks[8]->head != nullptr) {
			fin->Push(&Slacks[8]->Pop());
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("El movimiento no es válido", "Error");
	}
	if (inicio->head != nullptr) {
		inicio->head->Voltear();
	}
	Card temp = *fin->head;
	return temp;
}