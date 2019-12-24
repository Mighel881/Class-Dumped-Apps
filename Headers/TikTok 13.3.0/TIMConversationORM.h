//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMBaseORM.h"

#import "TIMConversationModelProtocol-Protocol.h"
#import "TIMOConversationSortable-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;
@protocol TIMConversationCoreInfoModelProtocol, TIMConversationLocalInfoModelProtocol, TIMConversationSettingsInfoModelProtocol;

@interface TIMConversationORM : TIMBaseORM <TIMOConversationSortable, TIMConversationModelProtocol>
{
    _Bool _isParticipant;
    _Bool _hasUnreadMention;
    int _type;
    int _status;
    int _inbox;
    NSString *_identifier;
    long long _shortID;
    long long _participantsCount;
    NSDate *_updatedAt;
    long long _unreadCount;
    long long _fakeUnreadCount;
    long long _minIndex;
    NSDate *_draftAt;
    NSString *_draftText;
    NSDate *_ticketUpdatedAt;
    NSData *_firstPageParticipants;
    NSString *_ticket;
    NSString *_localInfo;
    NSData *_userInfo;
    id <TIMConversationSettingsInfoModelProtocol> __cachedSettingsInfo;
    id <TIMConversationCoreInfoModelProtocol> __cachedCoreInfo;
    id <TIMConversationLocalInfoModelProtocol> __cachedLocalInfo;
}

+ (const struct WCTProperty *)userInfo;
+ (const struct WCTProperty *)localInfo;
+ (const struct WCTProperty *)firstPageParticipants;
+ (const struct WCTProperty *)ticket;
+ (const struct WCTProperty *)ticketUpdatedAt;
+ (const struct WCTProperty *)inbox;
+ (const struct WCTProperty *)hasUnreadMention;
+ (const struct WCTProperty *)draftText;
+ (const struct WCTProperty *)draftAt;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)minIndex;
+ (const struct WCTProperty *)fakeUnreadCount;
+ (const struct WCTProperty *)unreadCount;
+ (const struct WCTProperty *)updatedAt;
+ (const struct WCTProperty *)isParticipant;
+ (const struct WCTProperty *)participantsCount;
+ (const struct WCTProperty *)shortID;
+ (const struct WCTProperty *)identifier;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) id <TIMConversationLocalInfoModelProtocol> _cachedLocalInfo; // @synthesize _cachedLocalInfo=__cachedLocalInfo;
@property(retain, nonatomic) id <TIMConversationCoreInfoModelProtocol> _cachedCoreInfo; // @synthesize _cachedCoreInfo=__cachedCoreInfo;
@property(retain, nonatomic) id <TIMConversationSettingsInfoModelProtocol> _cachedSettingsInfo; // @synthesize _cachedSettingsInfo=__cachedSettingsInfo;
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *localInfo; // @synthesize localInfo=_localInfo;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSData *firstPageParticipants; // @synthesize firstPageParticipants=_firstPageParticipants;
@property(retain, nonatomic) NSDate *ticketUpdatedAt; // @synthesize ticketUpdatedAt=_ticketUpdatedAt;
@property(nonatomic) int inbox; // @synthesize inbox=_inbox;
@property(nonatomic) _Bool hasUnreadMention; // @synthesize hasUnreadMention=_hasUnreadMention;
@property(retain, nonatomic) NSString *draftText; // @synthesize draftText=_draftText;
@property(retain, nonatomic) NSDate *draftAt; // @synthesize draftAt=_draftAt;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long minIndex; // @synthesize minIndex=_minIndex;
@property(nonatomic) long long fakeUnreadCount; // @synthesize fakeUnreadCount=_fakeUnreadCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(nonatomic) _Bool isParticipant; // @synthesize isParticipant=_isParticipant;
@property(nonatomic) long long participantsCount; // @synthesize participantsCount=_participantsCount;
@property(nonatomic) long long shortID; // @synthesize shortID=_shortID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)cachedLocalInfo;
- (id)cachedSettingsInfo;
- (id)cachedCoreInfo;
- (id)fetchLocalInfo;
- (id)fetchSettingsInfo;
- (id)fetchCoreInfo;
@property(retain, nonatomic) NSDictionary *localInfoDictionary;
- (_Bool)muted;
- (long long)conversationVersion;
- (_Bool)shouldStickOnTop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
