#pragma once

class CardDesk
{
public:
	CardDesk();
	~CardDesk();

	bool Cheking(Card, Card);

	void shuff—ards(int);
	void showCards(int);
	void Init();
	Card chooseCard(Card card);
	void showHideCds();
	Card setSavedCd(int);
	bool checkRes(Card);
private:
	Card card_[36];
};
