//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface TIMPBNConversationSettingInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(retain, nonatomic) NSMutableDictionary *ext; // @dynamic ext;
@property(readonly, nonatomic) unsigned long long ext_Count; // @dynamic ext_Count;
@property(nonatomic) int favorite; // @dynamic favorite;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasFavorite; // @dynamic hasFavorite;
@property(nonatomic) _Bool hasInboxType; // @dynamic hasInboxType;
@property(nonatomic) _Bool hasMinIndex; // @dynamic hasMinIndex;
@property(nonatomic) _Bool hasMute; // @dynamic hasMute;
@property(nonatomic) _Bool hasReadIndex; // @dynamic hasReadIndex;
@property(nonatomic) _Bool hasSettingVersion; // @dynamic hasSettingVersion;
@property(nonatomic) _Bool hasStickOnTop; // @dynamic hasStickOnTop;
@property(nonatomic) int inboxType; // @dynamic inboxType;
@property(nonatomic) long long minIndex; // @dynamic minIndex;
@property(nonatomic) int mute; // @dynamic mute;
@property(nonatomic) long long readIndex; // @dynamic readIndex;
@property(nonatomic) long long settingVersion; // @dynamic settingVersion;
@property(nonatomic) int stickOnTop; // @dynamic stickOnTop;

@end
