//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise, GUNSNotificationsFilter, NSData, NSMutableArray, NSMutableDictionary, PHSBroadcast;
@protocol GUNSNotificationsRPCService, OS_dispatch_queue;

@interface GUNSNotificationsListHelper : NSObject
{
    id <GUNSNotificationsRPCService> _rpcService;
    NSMutableArray *_notifications;
    NSMutableDictionary *_notificationDict;
    long long _dataVersion;
    PHSBroadcast *_broadcast;
    NSObject<OS_dispatch_queue> *_fetchStateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSData *_continuationToken;
    NSData *_syncToken;
    GPCPromise *_fetchPromise;
    GPCPromise *_syncPromise;
    GPCPromise *_fetchMorePromise;
    long long _lastRunTimestamp;
    GUNSNotificationsFilter *_filter;
    long long _syncVersion;
}

@property(readonly, nonatomic) long long syncVersion; // @synthesize syncVersion=_syncVersion;
@property(readonly, nonatomic) GUNSNotificationsFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)waitForPendingOperations;
- (void)subscribeWithChannel:(id)arg1 sendBroadcast:(_Bool)arg2;
- (id)list;
- (id)processNotifications:(id)arg1;
- (id)markAllNotificationsSeen;
- (id)markAllNotificationsRead;
- (id)fetchMoreNotifications;
- (id)fetchNewNotificationsWithTrigger:(long long)arg1;
- (id)initWithNotificationsRPCService:(id)arg1 filter:(id)arg2;

@end

