#include<iostream>
#include<iomanip>
#include"Card.h"


using namespace std;

char suitsName[] = { char(6), char(3),char(5),char(4) };

char* cardValue[] = { "6", "7", "8", "9", "10", "V", "Q", "K", "T" };
Card::Card(){
	cdSuit_ = CardSuit::lance;
	cdValue_ = CardValue::K;
}

Card::Card(CardSuit cardSts, CardValue cardVle){
	cdSuit_ = cardSts;
	cdValue_ = cardVle;
}

Card::~Card(){}

void Card::Show() {
	cout << "   " << "___________________" << endl;

	cout << "   " << char(186) << " " << (cardValue[(int)cdValue_]) << "\t\t     " << char(186) << endl;
	cout << "   " << char(186) << " "<< suitsName[(int)cdSuit_] <<"\t\t     " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14)  << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	cout << "   " << char(186) << "   " << setfill(char(178)) << setw(14) << "   " << char(186) << endl;
	if((cardValue[(int)cdValue_])=="10")
		cout << "   " << char(186) << "\t\t  " << (cardValue[(int)cdValue_]) << " " << char(186) << endl;
	else
		cout << "   " << char(186) << "\t\t   " <<(cardValue[(int)cdValue_])  <<" " << char(186) << endl;
	cout << "   " << char(186) << "_________________" << char(186) << endl;
}
void Card::setCard(CardValue cdVal, CardSuit cdSt) {
	cdValue_ = cdVal;
	cdSuit_ = cdSt;
}

bool Card::getCard(Card card)
 {
	if ((card.cdSuit_ == cdSuit_) && (card.cdValue_ == cdValue_))
		return true;
	else
		return false;
 }
