//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAPIClient-Protocol.h>
#import <FBSharedFramework/IGDeviceSessionObject-Protocol.h>

@class IGAnalyticsSessionIdProvider, IGRoutingHeaderHelper, NSString, NSUserDefaults;
@protocol FBKeyValueDataStore, IGAuthHeaderManaging, IGCookieManaging, IGDeviceHeaderManaging, IGNetworking, IGSystemMessageListener, OS_dispatch_queue;

@interface IGScopedNetworker : NSObject <IGAPIClient, IGDeviceSessionObject>
{
    NSString *_userPK;
    id <IGNetworking> _networker;
    id <IGCookieManaging> _cookieManager;
    id <IGAuthHeaderManaging> _authHeaderManager;
    id <IGDeviceHeaderManaging> _deviceHeaderManager;
    NSObject<OS_dispatch_queue> *_queue;
    IGAnalyticsSessionIdProvider *_pigeonSessionIdProvider;
    _Bool _loggingStoreEnabled;
    NSUserDefaults *_userDefaults;
    id <FBKeyValueDataStore> _sessionUserDefaults;
    IGRoutingHeaderHelper *_routingHeaderHelper;
    id <IGSystemMessageListener> _systemMessageDelegate;
}

@property(nonatomic) __weak id <IGSystemMessageListener> systemMessageDelegate; // @synthesize systemMessageDelegate=_systemMessageDelegate;
- (void).cxx_destruct;
- (void)_savePasswordEncryptionKeyInfoIfPresentInResponse:(id)arg1 request:(id)arg2;
- (void)_saveRoutingHeadersIfPresentInResponse:(id)arg1;
- (void)_saveIGAPIHeadersIfPresentInResponse:(id)arg1 request:(id)arg2;
- (void)_addRoutingHeadersIfNeeded:(id)arg1;
- (void)_addIGAPIHeadersIfNeeded:(id)arg1;
- (void)_handleSystemMessages:(id)arg1;
- (void)_handleAPIRequestFailure:(id)arg1 withFailureHandler:(CDUnknownBlockType)arg2 response:(id)arg3 responseData:(id)arg4 parsedDictionary:(id)arg5 error:(id)arg6 completionQueue:(id)arg7;
- (void)_handleFailedResponseWithError:(id)arg1 request:(id)arg2 failureHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)_handleAPIRequestSuccess:(CDUnknownBlockType)arg1 withHTTPResponse:(id)arg2 parsedObject:(id)arg3 completionQueue:(id)arg4;
- (void)_handleSuccessfulResponse:(id)arg1 request:(id)arg2 parsingHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;
- (void)_handleAPIRequestFoundCache:(id)arg1 withCacheHandler:(CDUnknownBlockType)arg2 withParsingHandler:(CDUnknownBlockType)arg3;
- (id)_startAPIRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 parsingHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (void)_startRequestCheckedWithBlock:(CDUnknownBlockType)arg1;
- (void)_prepareRequest:(id)arg1 withPolicy:(id)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 retryHandler:(CDUnknownBlockType)arg4 cachedResponseHandler:(CDUnknownBlockType)arg5 startHandler:(CDUnknownBlockType)arg6 bytesSentHandler:(CDUnknownBlockType)arg7 responseReceivedHandler:(CDUnknownBlockType)arg8 bytesReceivedHandler:(CDUnknownBlockType)arg9 successHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11;
- (void)cancelAllRequestsWithCancellationIdentifier:(id)arg1;
- (id)startOffProcessRequest:(id)arg1 policy:(id)arg2 requestInfo:(id)arg3;
- (id)startRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (id)APIHeadersAsCookies;
- (id)requestBuilderWithHTTPMethod:(unsigned long long)arg1 path:(id)arg2;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 completionQueue:(id)arg3 cacheHandler:(CDUnknownBlockType)arg4 parsingHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)initWithUserPK:(id)arg1 networker:(id)arg2 cookieManager:(id)arg3 authHeaderManager:(id)arg4 deviceHeaderManager:(id)arg5 pigeonSessionIdProvider:(id)arg6 loggingStoreEnabled:(_Bool)arg7 userDefaults:(id)arg8 sessionUserDefaults:(id)arg9 routingHeaderHelper:(id)arg10;
- (id)initWithUserPK:(id)arg1 networker:(id)arg2 cookieManager:(id)arg3 authHeaderManager:(id)arg4 deviceHeaderManager:(id)arg5 pigeonSessionIdProvider:(id)arg6 loggingStoreEnabled:(_Bool)arg7 sessionUserDefaults:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

