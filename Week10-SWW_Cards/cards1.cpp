#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Card{
	int value;
	string suite;
};

class Deck{

	public:
	
	Deck(){
	}
	
	Deck(string in_title){
	  title=in_title;
	}
	
	void addCard(int number, string kind){
		Card newCard;
		newCard.value=number;
		newCard.suite=kind;
		deck_of_cards.push_back(newCard);
	}

	void Deal(){
	cout<< "\nHere is your deal \n"<< endl;
		for(int i=0;i<=4;i++){
			cout << "Card " << i << " is the " << deck_of_cards[i].value << " of " << deck_of_cards[i].suite << endl;
		}
		deck_of_cards.erase(deck_of_cards.begin(), deck_of_cards.begin()+4);
	}

	void Shuffle(){
		random_shuffle(deck_of_cards.begin(),deck_of_cards.end());
	}
	
	private:
  string title;
	vector<Card> deck_of_cards;
	
};

int main(){
  string title;
  title="seth's deck";
	Deck mydeck(title);
	string suite="not set";

	for(int i=0;i<=13;i++){
		for(int j=1;j<=4;j++){
			switch(j){
				case 1:
					suite = "clubs";
					break;
				case 2:
					suite="diamonds";
					break;
				case 3:
					suite="hearts";
					break;
				case 4:
					suite="spades";
					break;
			}
		mydeck.addCard(i,suite);
		}
	}
	mydeck.Deal();
	cout<< "\nJust to show we erase cards from deck after dealing "<< endl;
	mydeck.Deal();
	mydeck.Shuffle();
	cout<< "\nAfter shuffling the deal is "<< endl;
	mydeck.Deal();
}
