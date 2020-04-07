//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBNotificationsLoader, NSOperationQueue, NSString;

@interface DBNotificationPingManager : NSObject <DBLinkableStateObserverProtocol>
{
    DBNotificationsLoader *_notificationsLoader;
    NSOperationQueue *_operationQueue;
    id _appDidBecomeActiveObserver;
    id _notificationLoaderFetchedAndHandledNotificationObserver;
}

- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_cancelFetchOperations;
- (void)processRemoteNotificationReceivedWithRetries:(unsigned long long)arg1 waitTimeBetweenRetries:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processRemoteNotificationReceivedWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNotificationsLoader:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
