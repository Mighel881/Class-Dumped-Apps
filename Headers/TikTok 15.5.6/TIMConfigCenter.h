//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface TIMConfigCenter : NSObject
{
    NSMutableDictionary *_cacheDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1 expectedClass:(Class)arg2 useCache:(_Bool)arg3;
@property(readonly, nonatomic) _Bool disableLoadHistoryMessagesFromServer;
@property(readonly, nonatomic) _Bool enableRecall;
@property(readonly, copy, nonatomic) NSSet *inboxes;
@property(readonly, copy, nonatomic) NSString *HTTPBaseURLString;
@property(readonly, copy, nonatomic) NSString *deviceType;
@property(readonly, copy, nonatomic) NSString *devicePlatform;
@property(readonly, copy, nonatomic) NSString *deviceID;
@property(readonly, copy, nonatomic) NSString *osVersion;
@property(readonly, copy, nonatomic) NSString *appDistributionChannel;
@property(readonly, copy, nonatomic) NSString *appVersion;
@property(readonly, copy, nonatomic) NSString *appID;
@property(readonly, nonatomic) long long frontierMethod;
@property(readonly, nonatomic) long long frontierService;
@property(readonly, copy, nonatomic) NSString *frontierBaseURLString;
@property(readonly, copy, nonatomic) NSString *frontierAppKey;
@property(readonly, copy, nonatomic) NSString *frontierFpID;
@property(readonly, nonatomic) _Bool enableMachoReader;
@property(readonly, nonatomic) long long maxWalFilePages;
@property(readonly, nonatomic) _Bool enableCompensateUnreadCount;
@property(readonly, nonatomic) _Bool enableLogDatabasePerformance;
@property(readonly, nonatomic) _Bool enableBatchUpdateConversation;
@property(readonly, nonatomic) double conversationDataSourceUpdateDelayWhenWakeUpInit;
@property(readonly, nonatomic) double conversationDataSourceUpdateDelayWhenInstallInit;
@property(readonly, nonatomic) _Bool overrideSentMessageContentSyncFromServer;
@property(readonly, nonatomic) _Bool enableCombineInboxCheck;
@property(readonly, nonatomic) _Bool manuallyKickoffInboxPuller;
@property(readonly, nonatomic) _Bool enableSyncClickToReceiver;
@property(readonly, copy, nonatomic) NSSet *disableUserChainInboxes;
@property(readonly, nonatomic) NSString *settingsBaseURLString;
- (id)value_for_TIMConfigSettingsBaseURLKey;
- (id)value_for_TIMConfigEnableMachoReaderKey;

@end
