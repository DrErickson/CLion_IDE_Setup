
#ifndef CS301_BOOTCAMP_DECK_H
#define CS301_BOOTCAMP_DECK_H

#include <iostream>
using namespace std;

const int MAX_DECK_SIZE = 52*4;

const string SUITNAMES[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const string FACENAMES[] = {"Jack", "Queen", "King"};

enum SuitType {HEARTS, DIAMONDS, CLOVER, SPADES, BAD_SUIT};
enum FaceType {JACK, QUEEN, KING, NUMERAL, BAD_FACE};

struct Card {
    /* Put your card definition here */
    SuitType suit;
    FaceType face;
    int rank;   // value that is assigned to a card

    string toString() {
        string str = FACENAMES[face] + " of " + SUITNAMES[suit];
        if (face != NUMERAL)
            return FACENAMES[face] + " of " + SUITNAMES[suit];

        return to_string(rank) + " of " + SUITNAMES[suit];
    }
};

const Card BAD_CARD = {BAD_SUIT, BAD_FACE, -999};   // Represents a bad card

class Deck {
public:
    Deck() {
        topCard = 0;
        for (int s = HEARTS; s <= SPADES; s++) {
            for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
                cards[topCard].rank = 10;
                cards[topCard].face = f;
                cards[topCard].suit = (SuitType) s;
//                cout << "Adding " << cards[topCard].toString() << endl;
                topCard++;
            }
            for (int n = 1; n <= 10; n++) {
                cards[topCard].rank = n;
                cards[topCard].face = NUMERAL;
                cards[topCard].suit = (SuitType) s;
//                cout << "Adding " << cards[topCard].toString() << endl;
                topCard++;
            }
        }
        topCard--;
    }

    void Shuffle() {
        for (int i = 0; i < topCard; i++) {
            Card tmp = cards[i];
            int randInd = rand() % (topCard + 1);
            cards[i] = cards[randInd];
            cards[randInd] = tmp;
        }
    }

    int NumCards() const {
        return topCard + 1;
    }

    Card DrawTopCard() {
        Card drawnCard = cards[topCard--];
        return drawnCard;
    }

    Card GetCard(int i) {
        if (i < NumCards()) {
            Card drawnCard = cards[i];
            return drawnCard;
        }
        else {
            return BAD_CARD;
        }
    }

    void AddCard(Card card) {
        if (topCard == MAX_DECK_SIZE) {
            cards[topCard] = card;
        }
    }

private:
    Card cards[MAX_DECK_SIZE];
    int topCard;
};


#endif //CS301_BOOTCAMP_DECK_H
