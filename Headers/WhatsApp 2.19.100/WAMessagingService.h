//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WABackgroundConnectionAvailableNotifier, WAChatStorage, WAExactTimer, WAMediaUploaderMain, WAMutableDictionary, WAPersistentKeyValueStore, WASignalManager, XMPPConnectionMain;

@interface WAMessagingService : NSObject
{
    WAMutableDictionary *_chatJIDToSendQueue;
    NSMutableDictionary *_retryMessagePool;
    WABackgroundConnectionAvailableNotifier *_bgNotifier;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_chatConnectionIdentifier;
    NSString *_uploadAttemptIdentifier;
    _Bool _connectionReady;
    WAExactTimer *_messageTimeoutTimer;
    unsigned long long _messagesAckedCounter;
    WAChatStorage *_chatStorage;
    XMPPConnectionMain *_xmppConnection;
    WASignalManager *_signalManager;
    WAMediaUploaderMain *_mediaUploader;
    WAPersistentKeyValueStore *_keyValueStore;
}

+ (id)persistentTaskKeyForParentMessageID:(id)arg1 participantJID:(id)arg2;
+ (_Bool)uploadTaskIsSmall:(id)arg1;
+ (_Bool)nextSendTaskBatchable:(id)arg1 withLastSendTask:(id)arg2;
@property(readonly, nonatomic) WAPersistentKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) WAMediaUploaderMain *mediaUploader; // @synthesize mediaUploader=_mediaUploader;
@property(readonly, nonatomic) WASignalManager *signalManager; // @synthesize signalManager=_signalManager;
@property(readonly, nonatomic) XMPPConnectionMain *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
- (void).cxx_destruct;
- (void)updateUploadAttemptIdentifierAndRetryFailedUploads:(id)arg1;
- (void)loadDeferredObjects;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (void)reportFieldStatsForSentMessageAttempt:(id)arg1 result:(long long)arg2 terminal:(_Bool)arg3 retryCount:(unsigned long long)arg4;
- (void)updateMessageSendDateForMessages:(id)arg1;
- (_Bool)hasPendingSendTask;
- (void)startMessageTimeoutTimerIfNeeded;
- (void)updateBackgroundExecutionStateIfNeeded;
- (void)resendAllMessages;
- (void)encryptAndSendMessageTask:(id)arg1 participantJID:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canSendMessages;
- (_Bool)didFinishUploadForMessage:(id)arg1 withError:(id)arg2 terminal:(_Bool)arg3;
- (void)didFinishUploadForMessage:(id)arg1;
- (void)didCancelUploadForMessage:(id)arg1;
- (id)didReceiveServerAckForMessageID:(id)arg1 participantJID:(id)arg2 negativeAck:(_Bool)arg3;
- (void)asyncLoadSavedRetryMessageTasks;
- (void)completeRetryMessageTaskWithMessageID:(id)arg1 participantJID:(id)arg2;
- (void)addToInMemoryCollectionAndSendRetryMessage:(id)arg1 participantJID:(id)arg2 retryCount:(unsigned long long)arg3;
- (void)retryMessageWithID:(id)arg1 participantJID:(id)arg2 recipientRegistrationID:(id)arg3 retryCount:(unsigned long long)arg4;
- (void)loadPendingMessages;
- (void)bumpSendQueueWithChatJID:(id)arg1;
- (_Bool)completePendingMessageTaskWithMessageID:(id)arg1 sendSuccess:(_Bool)arg2 returnedMessage:(id *)arg3;
- (_Bool)completePendingMessageTaskWithMessageID:(id)arg1 sendSuccess:(_Bool)arg2;
- (void)failPendingMessageTaskWithMessageID:(id)arg1 message:(id)arg2 reason:(long long)arg3;
- (void)insertAndStartQueueForTask:(id)arg1;
- (void)cancelSendForMessage:(id)arg1;
- (void)retryUploadForMessage:(id)arg1;
- (void)sendMessageGroup:(id)arg1;
- (void)sendMessageWithInProgressUpload:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)handleBackgroundSessionEventCompletionHandler:(CDUnknownBlockType)arg1;
- (void)asyncLoadPendingMessages;
- (id)initWithChatStorage:(id)arg1 xmppConnection:(id)arg2 signalManager:(id)arg3 mediaUploader:(id)arg4 keyValueStore:(id)arg5;

@end
