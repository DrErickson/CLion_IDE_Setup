/**
 * Created by Varick Erickson on 10/25/2022.
 *
 * You should not remove or change any of the tests in this file.
 *
 * The purpose of this file is to test the functions for the various loop functions.
 */

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "../Deck.h"
#include <set>
#include <vector>
#include <stack>
#include "unit_test_utils.h"

TEST_CASE("Deck Constructor") {
    Deck deck;

    if (deck.NumCards() != 52) {
        INFO("Deck has " << deck.NumCards() << " cards.");
        INFO("Expected 52 cards");
        FAIL();
    }
}

TEST_CASE("Card toString") {
    for (int s = SPADES; s >= HEARTS; s--) {
        for (int n = 10; n >= 1; n--) {
        }
    }
}

TEST_CASE("Deck DrawTopCard") {
    Deck deck;
    set<Card> cardSet;

    while (deck.NumCards() > 0) {
        Card cardDrawn = deck.DrawTopCard();
        cardSet.insert(cardDrawn);
    }

    if (deck.NumCards() != 0) {
        INFO("Deck has " << deck.NumCards() << " cards.");
        INFO("Expected 0 cards after drawing 52 cards");
        FAIL();
    }

    // Make sure each card exists
    for (int s = SPADES; s >= HEARTS; s--) {
        for (int n = 10; n >= 1; n--) {
            Card expectedCard = {};
            expectedCard.rank = n;
            expectedCard.face = NUMERAL;
            expectedCard.suit = (SuitType) s;
            if (cardSet.count(expectedCard) == 0) {
                INFO("Deck missing card: ");
                INFO("Face: " << FACENAMES[expectedCard.face]);
                INFO("Suit: " << SUITNAMES[expectedCard.suit]);
                INFO("Rank: " << expectedCard.rank);
                FAIL();
            }
        }
        for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
            Card expectedCard = {};
            expectedCard.rank = 10;
            expectedCard.face = NUMERAL;
            expectedCard.suit = (SuitType) s;
            if (!cardSet.count(expectedCard) == 0) {
                INFO("Deck missing card: ");
                INFO("Face: " << FACENAMES[expectedCard.face]);
                INFO("Suit: " << SUITNAMES[expectedCard.suit]);
                INFO("Rank: " << expectedCard.rank);
                FAIL();
            }
        }
    }



}
