//
//  PlayingCardDeck.m
//  Matchismo
//
//  Created by Matthew Hillman on 8/23/13.
//  Copyright (c) 2013 Matthew Hillman. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"
@implementation PlayingCardDeck

- (id)init
{
    self = [super init];
    
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card atTop:true];
            }
        }
    }
    
    return self;
}

@end
