//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, WAChatSessionTransactionListener, WANameDirectory, WAPBChatMessageCountMetaData, WAPersistentKeyValueStore;
@protocol OS_dispatch_queue;

@interface WAChatMessageCountLogger : NSObject
{
    WAPersistentKeyValueStore *_keyValueStore;
    WANameDirectory *_nameDirectory;
    WAPBChatMessageCountMetaData *_metaData;
    WAChatSessionTransactionListener *_chatTransactionListener;
    NSCache *_eventCache;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void).cxx_destruct;
- (id)chatMessageCountEventFromData:(id)arg1;
- (void)saveEvent:(id)arg1 forChatJID:(id)arg2;
- (long long)chatTypeForBusinessType:(int)arg1;
- (int)businessTypeForChatType:(long long)arg1;
- (id)eventForChatJID:(id)arg1 businessType:(long long)arg2;
- (void)submitFieldStats;
- (void)updateEntryWithChatJID:(id)arg1 businessChatType:(long long)arg2 groupCreatorJID:(id)arg3 incomingCount:(unsigned long long)arg4 outgoingCount:(unsigned long long)arg5 muted:(_Bool)arg6;
- (void)updateStartDateAndClearEventData;
- (void)submitDailyFieldStatsIfNecessary;
- (_Bool)skipMessageForMessageType:(int)arg1;
- (void)handleAddedMessages:(id)arg1 chatSession:(id)arg2;
- (void)registerDailyStatsCallback:(id)arg1;
- (id)initWithKeyValueStore:(id)arg1;

@end

