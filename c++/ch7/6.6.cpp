#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
enum Suit { clubs,diamonds,hearts,spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
class card
{
private:
	int number;
	Suit suit;
public:
	card()
	{}
	void set(int n, Suit s)
	{
		suit = s; number = n;
	}
	void display();
};
void card::display()
{
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
		case jack:  cout << "J"; break;
		case queen: cout << "Q"; break;
		case king:  cout << "K"; break;
		case ace:   cout << "A"; break;
		}
	switch (suit)
	{
	case clubs:    cout << static_cast<char>(5); break;
		break;
	case diamonds: cout << static_cast<char>(4); break;
		break;
	case hearts:   cout << static_cast<char>(3); break;
		break;
	case spades:   cout << static_cast<char>(6); break;
		break;
	}
	cout << endl;
}
int main()
{
	card deck[52];
	int j;
	for (j = 0; j < 52; j++)
	{
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	cout << "\nOrdered deck: \n";

	srand(time(NULL));
	for (j = 0; j < 52; j++)
	{
		int k = rand() % 52;
		card temp = deck[j];
		deck[j] = deck[k];
		deck[k] = temp;
	}
	int n = 1;
	
	for (j = 0 ; j < 52 ; j++)
	{
		if (j==0||j==13||j==26||j==39)
		{
			cout << "\nplayer number " << n << " :\n";
			++n;
		}
		deck[j].display();
	}
}