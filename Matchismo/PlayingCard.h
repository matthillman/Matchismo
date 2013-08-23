//
//  PlayingCard.h
//  Matchismo
//
//  Created by Matthew Hillman on 8/23/13.
//  Copyright (c) 2013 Matthew Hillman. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)rankStrings;
+ (NSUInteger)maxRank;
+ (NSArray *)validSuits;


@end
