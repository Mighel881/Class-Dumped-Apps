//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface PoiStrategyItemStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *contentURL; // @dynamic contentURL;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasContentURL; // @dynamic hasContentURL;
@property(nonatomic) _Bool hasIconType; // @dynamic hasIconType;
@property(nonatomic) _Bool hasIconURL; // @dynamic hasIconURL;
@property(nonatomic) _Bool hasStrategyId; // @dynamic hasStrategyId;
@property(nonatomic) _Bool hasWatermarkURL; // @dynamic hasWatermarkURL;
@property(copy, nonatomic) NSString *iconType; // @dynamic iconType;
@property(retain, nonatomic) UrlStruct *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *strategyId; // @dynamic strategyId;
@property(retain, nonatomic) UrlStruct *watermarkURL; // @dynamic watermarkURL;

@end
