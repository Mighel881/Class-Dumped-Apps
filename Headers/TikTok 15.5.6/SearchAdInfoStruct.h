//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class EasterEggStruct, NSString;

@interface SearchAdInfoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adData; // @dynamic adData;
@property(retain, nonatomic) EasterEggStruct *easterEgg; // @dynamic easterEgg;
@property(nonatomic) _Bool hasAdData; // @dynamic hasAdData;
@property(nonatomic) _Bool hasEasterEgg; // @dynamic hasEasterEgg;

@end
