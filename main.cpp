#include<iostream>
#include<Windows.h>
#include<time.h>
#include"Card.h"
#include"Carddesk.h"
#include<iomanip>
using namespace std;

void main() {
	COORD crd = { 50, 50 };
	SMALL_RECT src = { 0, 0, crd.X, crd.Y };
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), crd);
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &src);

	srand(time(NULL));
	CardDesk cd;
	Card saved;
	Card cardForRes;
	cd.Init();
	cout << "1. Play CardGame\n2. Exit\n";
	int m;
	cin >> m;
	switch (m)
	{
	case 1: {
		cd.shuffÑards(36);
		
		int bet = 100;
		while (bet != 0) {
			system("cls");
			cout << "\tYou have "<<bet<<"$\n\t\tOne bet 10$\n\t\tOne Winning +10$\n";
			cout << "How much card you want? " << endl;
			cd.shuffÑards(36);
			int howMuchCd;
			cin >> howMuchCd;
			system("cls");

			cd.shuffÑards(howMuchCd);
			cout << "\tYou have " << bet << "$\n\t\tOne bet 10$\n\t\tOne Winning +10$\n";

			cd.showCards(howMuchCd);
			cout << "Choose card\n";
			int numbCd;
			cin >> numbCd;
			system("cls");

			for (int i = 0; i < howMuchCd; i++)
				cd.showHideCds();
			cout << "Choose card\n";
			cin >> numbCd;
			system("cls");
			saved = cd.setSavedCd(numbCd);
			cd.chooseCard(saved);

			cd.shuffÑards(howMuchCd);
			cardForRes = cd.setSavedCd(numbCd);
			system("cls");
			cout << "\tYou have " << bet << "$\n\t\tOne bet 10$\n\t\tOne Winning +10$\n";
			int ex;
			cd.showCards(howMuchCd);
			if ((cd.Cheking(saved, cardForRes)) == true) {
				cout << "You Win!" << endl;
				bet += 10;
				
				cout << "Exit?\n\t1. Yes\n\t2. No\n";
				cin >> ex;
			}
			else{
				cout << "You Lose!" << endl; 
				bet -= 10;
				cout << "Return?\n\t1. No\n\t2. Yes\n";
				cin >> ex;
			}
			if (ex == 1)
				break;
			else
				continue;
		}
		break;
	}
	case 2: {
		(exit);
	}
	}
	
}