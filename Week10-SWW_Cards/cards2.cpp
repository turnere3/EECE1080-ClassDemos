#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ostream>

using namespace std;


class Card{

	public:

	Card(){
		value=0;
		suite="no value";
	}
	
	Card(int number, string kind){
		value=number;
		suite=kind;
	}
	
	int getvalue(){
	  return value;
	}
	
	string getsuite(){
	  return suite;
	}

	private:

	int value;
	string suite;
};

void Deal(vector<Card> &deck_of_cards);
void Shuffle(vector<Card> &deck_of_cards);

int main(){
	vector<Card> deck;
	string suite;

	for(int i=0;i<=13;i++){
		for(int j=1;j<=4;j++){
			switch(j){
				case 1:
					suite="clubs";
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
		Card a(i,suite);
		deck.push_back(a);
		}
	}
	Deal(deck);
	cout<< "\nJust to show we erase cards from deck after dealing "<< endl;
	Deal(deck);
  Shuffle(deck);
	cout<< "\nAfter shuffling the deal is "<< endl;
	Deal(deck);
}

void Deal(vector<Card> &deck_of_cards){
	for(int i=0;i<=4;i++){
		cout << "Card " << i << " is the " << deck_of_cards[i].getvalue() << " of " << deck_of_cards[i].getsuite() << endl;
	}
	deck_of_cards.erase(deck_of_cards.begin(), deck_of_cards.begin()+4);
}

void Shuffle(vector<Card> &deck_of_cards){
	random_shuffle(deck_of_cards.begin(),deck_of_cards.end());
}

ostream& operator<< (ostream& out, const Card& thing){
  out << thing;
  return out;
}
