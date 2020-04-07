//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/MTContextChangeListener-Protocol.h>
#import <MtProtoKit/MTResendMessageServiceDelegate-Protocol.h>
#import <MtProtoKit/MTTimeSyncMessageServiceDelegate-Protocol.h>
#import <MtProtoKit/MTTransportDelegate-Protocol.h>

@class MTApiEnvironment, MTBindingTempAuthKeyContext, MTContext, MTDatacenterAuthInfo, MTDatacenterAuthKey, MTMetaDisposable, MTNetworkUsageCalculationInfo, MTProtoConnectionState, MTSessionInfo, MTTimeFixContext, MTTransport, NSMutableArray, NSNumber, NSString;
@protocol MTProtoDelegate;

@interface MTProto : NSObject <MTContextChangeListener, MTTransportDelegate, MTTimeSyncMessageServiceDelegate, MTResendMessageServiceDelegate>
{
    NSMutableArray *_messageServices;
    MTDatacenterAuthInfo *_authInfo;
    MTSessionInfo *_sessionInfo;
    MTTimeFixContext *_timeFixContext;
    long long _bindingTempAuthKeyId;
    MTBindingTempAuthKeyContext *_bindingTempAuthKeyContext;
    MTTransport *_transport;
    int _mtState;
    _Bool _willRequestTransactionOnNextQueuePass;
    MTNetworkUsageCalculationInfo *_usageCalculationInfo;
    MTProtoConnectionState *_connectionState;
    _Bool _isProbing;
    MTMetaDisposable *_probingDisposable;
    NSNumber *_probingStatus;
    _Bool _shouldStayConnected;
    _Bool _useUnauthorizedMode;
    _Bool _useTempAuthKeys;
    _Bool _media;
    _Bool _enforceMedia;
    _Bool _cdn;
    _Bool _checkForProxyConnectionIssues;
    _Bool _canResetAuthData;
    id <MTProtoDelegate> _delegate;
    MTContext *_context;
    MTApiEnvironment *_apiEnvironment;
    long long _datacenterId;
    MTDatacenterAuthKey *_useExplicitAuthKey;
    CDUnknownBlockType _tempAuthKeyBindingResultUpdated;
    id _requiredAuthToken;
    long long _authTokenMasterDatacenterId;
}

+ (id)managerQueue;
@property(nonatomic) long long authTokenMasterDatacenterId; // @synthesize authTokenMasterDatacenterId=_authTokenMasterDatacenterId;
@property(retain, nonatomic) id requiredAuthToken; // @synthesize requiredAuthToken=_requiredAuthToken;
@property(nonatomic) _Bool canResetAuthData; // @synthesize canResetAuthData=_canResetAuthData;
@property(nonatomic) _Bool checkForProxyConnectionIssues; // @synthesize checkForProxyConnectionIssues=_checkForProxyConnectionIssues;
@property(nonatomic) _Bool cdn; // @synthesize cdn=_cdn;
@property(nonatomic) _Bool enforceMedia; // @synthesize enforceMedia=_enforceMedia;
@property(nonatomic) _Bool media; // @synthesize media=_media;
@property(nonatomic) _Bool useTempAuthKeys; // @synthesize useTempAuthKeys=_useTempAuthKeys;
@property(nonatomic) _Bool useUnauthorizedMode; // @synthesize useUnauthorizedMode=_useUnauthorizedMode;
@property(nonatomic) _Bool shouldStayConnected; // @synthesize shouldStayConnected=_shouldStayConnected;
@property(copy, nonatomic) CDUnknownBlockType tempAuthKeyBindingResultUpdated; // @synthesize tempAuthKeyBindingResultUpdated=_tempAuthKeyBindingResultUpdated;
@property(retain, nonatomic) MTDatacenterAuthKey *useExplicitAuthKey; // @synthesize useExplicitAuthKey=_useExplicitAuthKey;
@property(nonatomic) long long datacenterId; // @synthesize datacenterId=_datacenterId;
@property(readonly, nonatomic) MTApiEnvironment *apiEnvironment; // @synthesize apiEnvironment=_apiEnvironment;
@property(readonly, nonatomic) MTContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <MTProtoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bindToPersistentKey:(id)arg1;
- (void)contextApiEnvironmentUpdated:(id)arg1 apiEnvironment:(id)arg2;
- (void)contextDatacenterPublicKeysUpdated:(id)arg1 datacenterId:(long long)arg2 publicKeys:(id)arg3;
- (void)_messageResendRequestFailed:(long long)arg1;
- (void)timeSyncInfoChanged:(double)arg1 saltList:(id)arg2;
- (void)timeSyncServiceCompleted:(id)arg1 timeDifference:(double)arg2 saltList:(id)arg3;
- (void)contextDatacenterAuthTokenUpdated:(id)arg1 datacenterId:(long long)arg2 authToken:(id)arg3;
- (void)checkTempAuthKeyBinding:(id)arg1;
- (void)contextDatacenterAuthInfoUpdated:(id)arg1 datacenterId:(long long)arg2 authInfo:(id)arg3;
- (void)contextDatacenterTransportSchemesUpdated:(id)arg1 datacenterId:(long long)arg2 shouldReset:(_Bool)arg3;
- (void)_processIncomingMessage:(id)arg1 totalSize:(int)arg2 withTransactionId:(id)arg3 address:(id)arg4;
- (id)_parseIncomingMessages:(id)arg1 dataMessageId:(out long long *)arg2 parseError:(out _Bool *)arg3;
- (id)parseMessage:(id)arg1;
- (id)_decryptIncomingTransportData:(id)arg1 address:(id)arg2;
- (void)handleMissingKey:(id)arg1;
- (void)transportHasIncomingData:(id)arg1 scheme:(id)arg2 data:(id)arg3 transactionId:(id)arg4 requestTransactionAfterProcessing:(_Bool)arg5 decodeResult:(CDUnknownBlockType)arg6;
- (void)transportTransactionsSucceeded:(id)arg1;
- (void)transportUpdatedDataReceiveProgress:(id)arg1 progressToken:(id)arg2 packetLength:(long long)arg3 progress:(float)arg4;
- (void)findReqMsgId:(id)arg1 signature:(int)arg2 reqMsgId:(long long *)arg3 failed:(_Bool *)arg4;
- (void)transportDecodeProgressToken:(id)arg1 scheme:(id)arg2 data:(id)arg3 token:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transportReceivedQuickAck:(id)arg1 quickAckId:(int)arg2;
- (void)allTransactionsMayHaveFailed;
- (void)transportTransactionsMayHaveFailed:(id)arg1 transactionIds:(id)arg2;
- (id)_dataForEncryptedMessage:(id)arg1 sessionInfo:(id)arg2 quickAckId:(int *)arg3 address:(id)arg4 extendedPadding:(_Bool)arg5;
- (id)_manuallyEncryptedMessage:(id)arg1 messageId:(long long)arg2 authKey:(id)arg3;
- (id)paddedData:(id)arg1 extendedPadding:(_Bool)arg2;
- (id)paddedDataV1:(id)arg1;
- (id)_dataForPlainMessage:(id)arg1 extendedPadding:(_Bool)arg2;
- (id)_dataForEncryptedContainerWithMessages:(id)arg1 sessionInfo:(id)arg2 quickAckId:(int *)arg3 address:(id)arg4 extendedPadding:(_Bool)arg5;
- (void)transportReadyForTransaction:(id)arg1 scheme:(id)arg2 transportSpecificTransaction:(id)arg3 forceConfirmations:(_Bool)arg4 transactionReady:(CDUnknownBlockType)arg5;
- (id)incomingMessageDescription:(id)arg1;
- (id)outgoingShortMessageDescription:(id)arg1 messageId:(long long)arg2 messageSeqNo:(int)arg3;
- (id)outgoingMessageDescription:(id)arg1 messageId:(long long)arg2 messageSeqNo:(int)arg3;
- (void)_updateConnectionIssuesStatus:(_Bool)arg1;
- (void)transportConnectionProblemsStatusChanged:(id)arg1 scheme:(id)arg2 hasConnectionProblems:(_Bool)arg3 isProbablyHttp:(_Bool)arg4;
- (void)transportConnectionContextUpdateStateChanged:(id)arg1 isUpdatingConnectionContext:(_Bool)arg2;
- (void)transportConnectionStateChanged:(id)arg1 isConnected:(_Bool)arg2 proxySettings:(id)arg3;
- (void)transportConnectionFailed:(id)arg1 scheme:(id)arg2;
- (void)transportNetworkAvailabilityChanged:(id)arg1 isNetworkAvailable:(_Bool)arg2;
- (_Bool)isPaused;
- (_Bool)isStopped;
- (_Bool)bindingTempAuthKey;
- (_Bool)timeFixOrSaltsMissing;
- (_Bool)canAskForServiceTransactions;
- (_Bool)canAskForTransactions;
- (void)requestSecureTransportReset;
- (void)requestTransportTransaction;
- (void)resendMessageServiceCompleted:(id)arg1;
- (void)requestMessageWithId:(long long)arg1;
- (void)completeTimeSync;
- (void)initiateTimeSync;
- (id)messageServiceQueue;
- (void)removeMessageService:(id)arg1;
- (void)addMessageService:(id)arg1;
- (void)setMtState:(int)arg1;
- (void)requestTimeResync;
- (void)finalizeSession;
- (void)resetSessionInfo;
- (void)resetTransport;
- (void)setTransport:(id)arg1;
- (void)updateConnectionState;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)setUsageCalculationInfo:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 datacenterId:(long long)arg2 usageCalculationInfo:(id)arg3 requiredAuthToken:(id)arg4 authTokenMasterDatacenterId:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
