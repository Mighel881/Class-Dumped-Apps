//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIPlaybackData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientPlaybackNonce; // @dynamic clientPlaybackNonce;
@property(copy, nonatomic) NSString *embeddedPlayerHostNonce; // @dynamic embeddedPlayerHostNonce;
@property(nonatomic) _Bool hasClientPlaybackNonce; // @dynamic hasClientPlaybackNonce;
@property(nonatomic) _Bool hasEmbeddedPlayerHostNonce; // @dynamic hasEmbeddedPlayerHostNonce;

@end
