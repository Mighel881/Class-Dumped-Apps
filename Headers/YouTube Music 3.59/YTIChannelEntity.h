//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIThumbnailDetails;

@interface YTIChannelEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasSubscriberCount; // @dynamic hasSubscriberCount;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasVideoCount; // @dynamic hasVideoCount;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) int subscriberCount; // @dynamic subscriberCount;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int videoCount; // @dynamic videoCount;

@end

