//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface EasterEggStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long easterEggId; // @dynamic easterEggId;
@property(copy, nonatomic) NSString *easterEggName; // @dynamic easterEggName;
@property(nonatomic) _Bool hasEasterEggId; // @dynamic hasEasterEggId;
@property(nonatomic) _Bool hasEasterEggName; // @dynamic hasEasterEggName;
@property(nonatomic) _Bool hasIsH5; // @dynamic hasIsH5;
@property(nonatomic) _Bool hasOpenURL; // @dynamic hasOpenURL;
@property(nonatomic) _Bool hasSourceType; // @dynamic hasSourceType;
@property(nonatomic) _Bool hasSourceURL; // @dynamic hasSourceURL;
@property(nonatomic) _Bool hasWebTitle; // @dynamic hasWebTitle;
@property(nonatomic) _Bool hasWebURL; // @dynamic hasWebURL;
@property(nonatomic) _Bool isH5; // @dynamic isH5;
@property(copy, nonatomic) NSString *openURL; // @dynamic openURL;
@property(copy, nonatomic) NSString *sourceType; // @dynamic sourceType;
@property(retain, nonatomic) UrlStruct *sourceURL; // @dynamic sourceURL;
@property(copy, nonatomic) NSString *webTitle; // @dynamic webTitle;
@property(copy, nonatomic) NSString *webURL; // @dynamic webURL;

@end
