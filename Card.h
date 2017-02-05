#pragma once


using namespace std;

enum class CardSuit { lance, hearts, cross, tambourine };
enum class CardValue { six, seven, eight, nine, ten, V, Q, K, T };

class Card
{
public:
	Card();
	Card(CardSuit cardSts, CardValue cardVle);
	~Card();
	void setCard(CardValue cdVal, CardSuit cdSt);
	void Show();
	bool getCard(Card);
private:
	CardValue cdValue_;
	CardSuit cdSuit_;
};
