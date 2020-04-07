//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBNotificationHandler, DBNotificationsManager, NSString;
@protocol OS_dispatch_queue;

@interface DBNotificationsLoader : NSObject <DBLinkableStateObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    DBNotificationHandler *_notificationHandler;
    NSString *_userId;
    _Bool _unlinked;
    DBNotificationsManager *_notificationsManager;
}

+ (id)db_notificationsManagerForAccount:(id)arg1 commonAccount:(id)arg2 env:(id)arg3 unlinkHandler:(id)arg4 backgroundTaskFactory:(id)arg5;
+ (void)test_setNotificationsManager:(id)arg1;
@property(readonly, nonatomic) DBNotificationsManager *notificationsManager; // @synthesize notificationsManager=_notificationsManager;
- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)test_completeSerialQueue;
- (void)db_postNotificationsFetchedAndHandledNotification;
- (void)fetchNotificationsWithCompletion:(CDUnknownBlockType)arg1 forceSync:(_Bool)arg2;
- (void)fetchNotifications;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 commonAccount:(id)arg2 commonEnv:(id)arg3 accountUnlinkHandler:(id)arg4 notificationHandler:(id)arg5 backgroundTaskFactory:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
