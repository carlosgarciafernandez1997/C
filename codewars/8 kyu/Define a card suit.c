/*
You get any card as an argument. Your task is to return the suit of this card (in lowercase).

Our deck (is preloaded):

deck = ['2♣','3♣','4♣','5♣','6♣','7♣','8♣','9♣','10♣','J♣','Q♣','K♣','A♣',
        '2♦','3♦','4♦','5♦','6♦','7♦','8♦','9♦','10♦','J♦','Q♦','K♦','A♦',
        '2♥','3♥','4♥','5♥','6♥','7♥','8♥','9♥','10♥','J♥','Q♥','K♥','A♥',
        '2♠','3♠','4♠','5♠','6♠','7♠','8♠','9♠','10♠','J♠','Q♠','K♠','A♠'];

extern const char *const deck[52];

enum CardSuit { CLUBS, DIAMONDS, HEARTS, SPADES };

enum CardSuit get_suit (const char *card)
{
	return CLUBS;
}
*/
extern const char *const deck[52];

enum CardSuit { CLUBS, DIAMONDS, HEARTS, SPADES };

enum CardSuit get_suit (const char *card)
{
  int i;
  for(i=0;i<52;i++){
    if(strcmp(deck[i],card)==0){
      return i/13;
    }
  }
}