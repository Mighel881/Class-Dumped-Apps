//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/NSCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString;

@interface TGConversationParticipantsData : NSObject <NSCopying>
{
    NSData *_serializedData;
    int _chatAdminId;
    int _version;
    NSArray *_chatParticipantUids;
    NSDictionary *_chatInvitedBy;
    NSDictionary *_chatInvitedDates;
    NSSet *_chatAdminUids;
    NSArray *_chatParticipantSecretChatPeerIds;
    NSArray *_chatParticipantChatPeerIds;
    NSString *_exportedChatInviteString;
}

+ (id)deserializeData:(id)arg1;
@property(retain, nonatomic) NSString *exportedChatInviteString; // @synthesize exportedChatInviteString=_exportedChatInviteString;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int chatAdminId; // @synthesize chatAdminId=_chatAdminId;
@property(retain, nonatomic) NSArray *chatParticipantChatPeerIds; // @synthesize chatParticipantChatPeerIds=_chatParticipantChatPeerIds;
@property(retain, nonatomic) NSArray *chatParticipantSecretChatPeerIds; // @synthesize chatParticipantSecretChatPeerIds=_chatParticipantSecretChatPeerIds;
@property(retain, nonatomic) NSSet *chatAdminUids; // @synthesize chatAdminUids=_chatAdminUids;
@property(retain, nonatomic) NSDictionary *chatInvitedDates; // @synthesize chatInvitedDates=_chatInvitedDates;
@property(retain, nonatomic) NSDictionary *chatInvitedBy; // @synthesize chatInvitedBy=_chatInvitedBy;
@property(retain, nonatomic) NSArray *chatParticipantUids; // @synthesize chatParticipantUids=_chatParticipantUids;
- (void).cxx_destruct;
- (id)serializedData;
- (void)removeChatPeerWithId:(long long)arg1;
- (void)addChatPeerWithId:(long long)arg1;
- (void)removeSecretChatPeerWithId:(long long)arg1;
- (void)addSecretChatPeerWithId:(long long)arg1;
- (void)removeParticipantWithId:(int)arg1;
- (void)addParticipantWithId:(int)arg1 invitedBy:(int)arg2 date:(int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

