//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SeedFeedTab : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long contentType; // @dynamic contentType;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasTabId; // @dynamic hasTabId;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) long long tabId; // @dynamic tabId;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
