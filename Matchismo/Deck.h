//
//  Deck.h
//  Matchismo
//
//  Created by Matthew Hillman on 8/22/13.
//  Copyright (c) 2013 Matthew Hillman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *) card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;

@end
