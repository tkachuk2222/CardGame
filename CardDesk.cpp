#include<iostream>
#include<iomanip>
#include"Card.h"
#include"Carddesk.h"

using namespace std;


CardDesk::CardDesk() {}
CardDesk::~CardDesk(){}
void CardDesk::Init() {
	
	for (int i = 0, l = 0; i < 4; i++)
	{
		CardSuit c;
		c = CardSuit(i);
		for (int j = 0; j < 9; j++)
		{
			CardValue v;
			v = CardValue(j);
			card_[l].setCard(v, c);
			l++;
			if (l == 36)
				break;
		} 
		if (l == 34)
			break;
	}
}
void CardDesk::shuffÑards(int numOfCds)
{
	for (int i = 0; i < numOfCds; i++)
	{
		int j = rand() % numOfCds;
		swap(card_[i], card_[j]);
	}
}
void CardDesk::showCards(int howmuch) {
	for (int i = 0; i < howmuch; i++)
	{
		card_[i].Show();
	}
}
Card CardDesk::chooseCard(Card card) {
	return card;
}
void CardDesk::showHideCds() {
	cout << "   " << "___________________" << endl;

	cout << "   " << char(186) << "  \t\t     " << char(186) << endl;
	cout << "   " << char(186) << "  \t\t     " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "\t\t     " << char(186) << endl;
	cout << "   " << char(186) << "_________________" << char(186) << endl;
}
Card CardDesk::setSavedCd(int numb) {
	return card_[numb - 1];
}

bool CardDesk::checkRes(Card cds)
{
	if (cds.getCard(cds) == true)
		return true;
	else
		return false;
}
bool CardDesk::Cheking(Card cd1, Card cd2) {
	if (cd1.getCard(cd2) == true) 
		return true;
	else
		return false;
}
