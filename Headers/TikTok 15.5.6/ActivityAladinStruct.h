//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface ActivityAladinStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) UrlStruct *banner; // @dynamic banner;
@property(nonatomic) long long docId; // @dynamic docId;
@property(nonatomic) _Bool hasActivityId; // @dynamic hasActivityId;
@property(nonatomic) _Bool hasBanner; // @dynamic hasBanner;
@property(nonatomic) _Bool hasDocId; // @dynamic hasDocId;
@property(nonatomic) _Bool hasLinkDesc; // @dynamic hasLinkDesc;
@property(nonatomic) _Bool hasLinkURL; // @dynamic hasLinkURL;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *linkDesc; // @dynamic linkDesc;
@property(copy, nonatomic) NSString *linkURL; // @dynamic linkURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
