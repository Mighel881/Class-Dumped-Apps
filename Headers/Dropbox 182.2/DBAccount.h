//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBAccount-Protocol.h>
#import <DropboxExtensions/DBAccountCallbacks-Protocol.h>
#import <DropboxExtensions/DBAccountUnlinkHandler-Protocol.h>

@class DBAccountInfo, DBAccountManagerConfig, DBCommonAccount, DBCommonEnv, DBThreadSafeObserverBlockMap, NSString;
@protocol DBAccountDelegate;

@interface DBAccount : NSObject <DBAccount, DBAccountCallbacks, DBAccountUnlinkHandler>
{
    _Bool _linked;
    _Bool _stop_delegate_calls;
    _Bool _forceAccountInfoFetch;
    _Bool _local;
    _Bool _destroying;
    _Bool _roleMismatched;
    int _outstanding_delegate_calls;
    int _accountInfoRequestInvalidatingCount;
    int _accountInfoLatestRequestSuccess;
    NSString *_cacheId;
    NSString *_token;
    NSString *_userId;
    NSString *_tokenSecret;
    DBThreadSafeObserverBlockMap *_observers;
    DBThreadSafeObserverBlockMap *_unlinkActors;
    id <DBAccountDelegate> _delegate;
    double _lastInfoTime;
    DBCommonAccount *_acct;
    DBCommonEnv *_env;
    DBAccountManagerConfig *_config;
    DBAccountInfo *_latestInfo;
    struct _opaque_pthread_t *_info_thread;
    struct _opaque_pthread_cond_t _delegate_cond;
    struct _opaque_pthread_cond_t _info_cond;
    struct _opaque_pthread_mutex_t _client_mutex;
    struct _opaque_pthread_mutex_t _info_mutex;
}

+ (id)tempDir;
+ (id)sdkRoot;
@property(readonly, nonatomic, getter=isRoleMismatched) _Bool roleMismatched; // @synthesize roleMismatched=_roleMismatched;
@property(nonatomic) _Bool destroying; // @synthesize destroying=_destroying;
@property(nonatomic) struct _opaque_pthread_t *info_thread; // @synthesize info_thread=_info_thread;
@property(nonatomic) struct _opaque_pthread_mutex_t info_mutex; // @synthesize info_mutex=_info_mutex;
@property(nonatomic) struct _opaque_pthread_cond_t info_cond; // @synthesize info_cond=_info_cond;
@property(retain, nonatomic) DBAccountInfo *latestInfo; // @synthesize latestInfo=_latestInfo;
@property(readonly, nonatomic) _Bool local; // @synthesize local=_local;
@property(readonly, nonatomic) DBAccountManagerConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) DBCommonEnv *env; // @synthesize env=_env;
@property(readonly, nonatomic) DBCommonAccount *acct; // @synthesize acct=_acct;
@property(nonatomic) int accountInfoLatestRequestSuccess; // @synthesize accountInfoLatestRequestSuccess=_accountInfoLatestRequestSuccess;
@property(nonatomic) int accountInfoRequestInvalidatingCount; // @synthesize accountInfoRequestInvalidatingCount=_accountInfoRequestInvalidatingCount;
@property _Bool forceAccountInfoFetch; // @synthesize forceAccountInfoFetch=_forceAccountInfoFetch;
@property(nonatomic) struct _opaque_pthread_mutex_t client_mutex; // @synthesize client_mutex=_client_mutex;
@property(nonatomic) double lastInfoTime; // @synthesize lastInfoTime=_lastInfoTime;
@property(nonatomic) struct _opaque_pthread_cond_t delegate_cond; // @synthesize delegate_cond=_delegate_cond;
@property(nonatomic) _Bool stop_delegate_calls; // @synthesize stop_delegate_calls=_stop_delegate_calls;
@property(nonatomic) int outstanding_delegate_calls; // @synthesize outstanding_delegate_calls=_outstanding_delegate_calls;
@property(nonatomic) __weak id <DBAccountDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DBThreadSafeObserverBlockMap *unlinkActors; // @synthesize unlinkActors=_unlinkActors;
@property(retain, nonatomic) DBThreadSafeObserverBlockMap *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic, getter=isLinked) _Bool linked; // @synthesize linked=_linked;
@property(readonly, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
- (void).cxx_destruct;
- (void)db_broadcastInfoConditionalVariableIfNecessary;
- (void)callDelegatePathRootChangedWithNewPathRoot:(id)arg1;
- (void)callDelegateInfoUpdated;
- (void)callDelegateShouldClearCache;
- (void)callDelegateShouldUnlink:(unsigned long long)arg1;
- (void)endDelegateCall:(id)arg1;
- (id)startDelegateCall;
- (void)clearDelegate;
- (void)setLinked:(_Bool)arg1;
- (void)runUnlinkActions;
- (void)notifyObservers;
- (id)dbappNoAuthClientCacheRoot;
- (id)dbappExtClientCacheRoot;
- (id)dbappClientCacheRoot;
- (id)notificationsCacheRoot;
- (id)filesCacheRootCreateIfMissing:(_Bool)arg1;
- (id)accountCacheRoot;
- (void)prepareCacheRoot:(id)arg1 createIfMissing:(_Bool)arg2;
- (id)cacheRootOf:(id)arg1 createIfMissing:(_Bool)arg2;
- (id)cacheRootOf:(id)arg1;
- (void)preventBackupAtURL:(id)arg1;
- (id)addUnlinkActor:(CDUnknownBlockType)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)finishUnlink;
- (void)unlinkWithMode:(unsigned long long)arg1 notifyDelegateAndPersistToKeychain:(_Bool)arg2;
- (void)pathRootChanged:(id)arg1;
- (void)roleMismatch;
- (void)unlinkOn401;
- (void)unlink;
- (id)getCommonAccount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)startAccountInfoUpdates;
@property(readonly, nonatomic) DBAccountInfo *info;
- (_Bool)commonInitWithEnv:(id)arg1;
- (id)initLocalWithEnv:(id)arg1 config:(id)arg2 delegate:(id)arg3;
- (id)initWithEnv:(id)arg1 config:(id)arg2 token:(id)arg3 tokenSecret:(id)arg4 userId:(id)arg5 cacheId:(id)arg6 linked:(_Bool)arg7 info:(id)arg8 delegate:(id)arg9;
- (_Bool)forceRefreshAccountInfo;
- (int)updateInfoAndWaitForRetry:(int)arg1;
- (void)appDidModifyAccountInfo:(id)arg1;

@end
