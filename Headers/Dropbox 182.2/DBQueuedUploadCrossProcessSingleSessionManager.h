//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBURLSessionReconnectEventHandler-Protocol.h>

@class DBURLSessionManager, NSDictionary, NSString;
@protocol DBQueuedUploadCrossProcessSingleSessionManagerDelegate;

@interface DBQueuedUploadCrossProcessSingleSessionManager : NSObject <DBURLSessionReconnectEventHandler>
{
    struct NSMutableDictionary *_pendingReconnectUploads;
    id <DBQueuedUploadCrossProcessSingleSessionManagerDelegate> _delegate;
    DBURLSessionManager *_sessionManager;
    struct NSDictionary *_uploads;
}

+ (unsigned long long)db_uploadReconnectFailureReasonFromReason:(unsigned long long)arg1;
+ (struct NSDictionary *)db_prepareToReconnectUploads:(struct NSDictionary *)arg1;
+ (id)db_sessionManagerWithFactory:(id)arg1 configuration:(id)arg2 reconnectingTasksWithTaskDelegates:(struct NSDictionary *)arg3 reconnectConfigType:(unsigned long long)arg4 backgroundSessionDispatcher:(id)arg5 reconnectEventHandler:(id)arg6;
@property(readonly, nonatomic) NSDictionary *uploads; // @synthesize uploads=_uploads;
@property(readonly, nonatomic) DBURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
- (void).cxx_destruct;
- (void)db_removeUploadWithTaskIdentifier:(unsigned long long)arg1;
- (void)didBecomeInvalidatedWithError:(id)arg1;
- (void)didFailToReconnectTaskWithIdentifier:(unsigned long long)arg1 withDelegate:(id)arg2 reason:(unsigned long long)arg3;
- (void)didReconnectTask:(id)arg1 withDelegate:(id)arg2;
- (id)initWithQueuedUploads:(struct NSDictionary *)arg1 sessionIdentifier:(id)arg2 appGroupIdentifier:(id)arg3 backgroundSessionDispatcher:(id)arg4 sessionManagerFactory:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
