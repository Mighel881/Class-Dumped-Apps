//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import "AsyncModel-Protocol.h"

@class ChatMessage, Contact, NSArray, NSData, NSString, SBDGroupChannel;

@interface Channel : ObservableObject <AsyncModel>
{
    _Bool _selected;
    _Bool _muted;
    _Bool _isBadgingMuted;
    _Bool _hasShownNamePrompt;
    _Bool _joined;
    _Bool _isSubredditChannel;
    _Bool _isDistinct;
    _Bool _isHidden;
    _Bool _hasMessagesFromNetwork;
    unsigned long long _uniqueID;
    NSString *_channelUrl;
    Contact *_inviter;
    NSString *_inviterUserID;
    NSString *_name;
    unsigned long long _createdAt;
    NSString *_logsToken;
    NSString *_lastMessageId;
    ChatMessage *_lastMessage;
    unsigned long long _unreadCount;
    unsigned long long _membersCount;
    SBDGroupChannel *_channel;
    NSString *_currentUserId;
    NSArray *_sbTypingMembers;
}

+ (id)persistProperties;
+ (id)tableName;
+ (_Bool)isValidChannelName:(id)arg1;
@property(copy, nonatomic) NSArray *sbTypingMembers; // @synthesize sbTypingMembers=_sbTypingMembers;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(retain, nonatomic) SBDGroupChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long membersCount; // @synthesize membersCount=_membersCount;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) ChatMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(copy, nonatomic) NSString *lastMessageId; // @synthesize lastMessageId=_lastMessageId;
@property(retain, nonatomic) NSString *logsToken; // @synthesize logsToken=_logsToken;
@property(nonatomic) unsigned long long createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) _Bool hasMessagesFromNetwork; // @synthesize hasMessagesFromNetwork=_hasMessagesFromNetwork;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isDistinct; // @synthesize isDistinct=_isDistinct;
@property(nonatomic) _Bool isSubredditChannel; // @synthesize isSubredditChannel=_isSubredditChannel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *inviterUserID; // @synthesize inviterUserID=_inviterUserID;
@property(retain, nonatomic) Contact *inviter; // @synthesize inviter=_inviter;
@property(copy, nonatomic) NSString *channelUrl; // @synthesize channelUrl=_channelUrl;
@property(nonatomic) _Bool joined; // @synthesize joined=_joined;
@property(nonatomic) _Bool hasShownNamePrompt; // @synthesize hasShownNamePrompt=_hasShownNamePrompt;
@property(nonatomic) _Bool isBadgingMuted; // @synthesize isBadgingMuted=_isBadgingMuted;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToChannel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) _Bool isGroup;
@property(retain, nonatomic) NSData *serializedSendbirdChannel;
- (void)configureWithSendbirdChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
