//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBCollatedListProviderCollectionModel.h"

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBCollatedListDataProvider, DBFileListFilterDataProvider, DBNotificationsDataProvider, DBUserState, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DBNotificationCollectionModel : DBCollatedListProviderCollectionModel <DBLinkableStateObserverProtocol>
{
    DBUserState *_userState;
    DBNotificationsDataProvider *_notificationsDataProvider;
    DBFileListFilterDataProvider *_dataProvider;
    DBCollatedListDataProvider *_collatedDataProvider;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

+ (void)db_logAnalyticsForAckNotification:(id)arg1 forUserId:(id)arg2;
+ (id)db_collatedDataProviderWithProvider:(id)arg1;
+ (id)db_dataProvider:(id)arg1;
- (void).cxx_destruct;
- (id)title;
- (id)modelObjectForSection:(long long)arg1 kind:(id)arg2;
- (void)reloadCollection;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getUnreadNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)ackAllNotifications;
- (void)ackNotifications:(id)arg1;
- (void)ackNotification:(id)arg1;
- (void)ackNotificationsForView;
- (void)markVisibleNotificationsAsSeen;
- (void)dealloc;
- (id)initWithUserState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
