//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBAuthCredentialsManagerProtocol-Protocol.h"
#import "DBSessionDelegate-Protocol.h"

@class DBEnterpriseManagedSession, DBEnterpriseManagement, DBSession, DBWeakObserverMap, NSArray, NSMapTable, NSString;
@protocol _TtP18ios_common_account24DBAccountManagerProtocol_;

@interface DBAccountCredentialsManager : NSObject <DBSessionDelegate, DBAuthCredentialsManagerProtocol>
{
    id <_TtP18ios_common_account24DBAccountManagerProtocol_> _accountManager;
    DBSession *_session;
    DBWeakObserverMap *_unlinkObservers;
    DBEnterpriseManagedSession *_enterpriseManagedSession;
    DBEnterpriseManagement *_enterpriseManagement;
    NSMapTable *_accountUpdateObserverHandles;
    NSArray *_linkedAccounts;
    long long _test_overrideIsAnyOtherFirstPartyAppInstalled;
}

+ (id)db_accountInfosFromAccounts:(id)arg1;
@property(nonatomic) long long test_overrideIsAnyOtherFirstPartyAppInstalled; // @synthesize test_overrideIsAnyOtherFirstPartyAppInstalled=_test_overrideIsAnyOtherFirstPartyAppInstalled;
@property(readonly, nonatomic) NSArray *linkedAccounts; // @synthesize linkedAccounts=_linkedAccounts;
- (void).cxx_destruct;
- (void)session:(id)arg1 changedPathRoot:(id)arg2 userId:(id)arg3;
- (void)sessionDidReceiveAuthorizationFailure:(id)arg1 userId:(id)arg2;
- (id)db_sortAndSetupAccounts:(id)arg1 session:(id)arg2;
- (void)db_notifyUnlinkObserversForAccount:(id)arg1;
- (void)db_setupAccount:(id)arg1 addTokensToSession:(id)arg2;
- (void)db_setupUnlinkObserversOnAccount:(id)arg1;
- (id)db_linkedAccountWithUserID:(id)arg1;
- (unsigned long long)managedSessionStateForLinkedAccount:(id)arg1;
- (void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unlinkAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addLinkedAccountWithAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserID:(id)arg3 withAccountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadAndClearAllLinkedAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadLinkedAccountsAndForceLinkAppInstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addUnlinkObserver:(id)arg1;
- (_Bool)isAnyOtherFirstPartyAppInstalled;
- (_Bool)isAppInstallationLinked;
- (void)getLatestAccountInfosWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (id)initWithAccountManager:(id)arg1 session:(id)arg2 enterpriseManagement:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
