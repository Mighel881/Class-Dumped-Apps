//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBState.h"

@class DBUserState, UIViewController;

@interface DBPendingForcedMigrationState : DBState
{
    UIViewController *_migrationViewController;
    DBUserState *_migrationUserState;
    _Bool _dealingWithFirstLogin;
}

+ (id)db_prepareForcedMigrationViewWithUserState:(id)arg1;
+ (id)forcedMigrationImage;
+ (void)setDebugOverrideForForcedMigrationState:(_Bool)arg1;
+ (_Bool)isDebugForcedMigrationEnabled;
+ (_Bool)isPendingForcedMigration;
- (void).cxx_destruct;
- (void)db_dismissBlockingMigrationViewAnimated:(_Bool)arg1;
- (void)db_presentBlockingMigrationViewWithUserState:(id)arg1 animated:(_Bool)arg2;
- (void)db_presentBlockingMigrationView;
- (void)dealloc;
- (id)didChangeAccountsWithCompatibleAccountsCount:(unsigned long long)arg1 keychainOnlyAccountsCount:(unsigned long long)arg2 dbStateContext:(id)arg3;
- (id)applicationDidBecomeActive:(id)arg1;
- (id)applicationDidEnterBackground:(id)arg1;
- (id)applicationDidInvokeShortcutItem:(id)arg1 dbStateContext:(id)arg2;
- (id)applicationDidReceiveOpenWithNotification:(id)arg1 dbStateContext:(id)arg2;
- (id)applicationDidReceiveRemoteNotification:(id)arg1 userId:(id)arg2 dbStateContext:(id)arg3 forApplicationState:(long long)arg4;
- (id)applicationDidReceiveLocalNotification:(id)arg1 userId:(id)arg2 dbStateContext:(id)arg3 fromUserInteraction:(_Bool)arg4;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 context:(id)arg4;
- (id)didUpdateAccountInfo:(id)arg1;
- (id)setupAtLaunchWithContext:(id)arg1 shouldPreventTourModals:(_Bool)arg2;
- (void)willTransitionFromCurrentStateWithContext:(id)arg1;
- (id)initForFirstLogin;
- (id)init;

@end
