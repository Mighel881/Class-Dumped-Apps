//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadJob-Protocol.h>

@class FBMediaFileStreamListenerAnnouncerWrapper, FBMediaStreamingUploadJobByteSender, FBMediaStreamingUploadJobStatusFetcher, FBMediaStreamingUploadMetricsBuilder, FBMediaUploadContentSource, FBMediaUploadJobDetail, NSString, NSURL;
@protocol FBCancelable, FBMediaUploadEventListener, FBMediaUploadListener, FBMediaUploadProtocolProvider, OS_dispatch_queue;

@interface FBMediaStreamingUploadJob : NSObject <FBMediaUploadJob>
{
    FBMediaUploadJobDetail *_detail;
    FBMediaStreamingUploadJobStatusFetcher *_statusFetcher;
    FBMediaStreamingUploadJobByteSender *_byteSender;
    FBMediaFileStreamListenerAnnouncerWrapper *_streamAnnouncer;
    id <FBMediaUploadProtocolProvider> _protocolProvider;
    id <FBMediaUploadEventListener> _eventListener;
    unsigned long long _byteOffset;
    NSString *_dataCenter;
    _Bool _isDuplicate;
    NSURL *_url;
    id <FBCancelable> _cancelableRequest;
    _Bool _isJobAlreadyCancelled;
    unsigned long long _getFailureCount;
    unsigned long long _postFailureCount;
    unsigned long long _networkCancelCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastBytesTransmitted;
    double _lastUpdatedTime;
    _Bool _enableBandwidthEstimator;
    FBMediaStreamingUploadMetricsBuilder *_metricsBuilder;
    double _startTime;
    unsigned long long _dataLength;
    id <FBMediaUploadListener> _listener;
}

@property(nonatomic) __weak id <FBMediaUploadListener> listener; // @synthesize listener=_listener;
@property(readonly, copy, nonatomic) FBMediaUploadJobDetail *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (void)_announceCancellation;
- (void)_announceFailure:(unsigned long long)arg1 underlyingError:(id)arg2;
- (void)_announceFailure:(unsigned long long)arg1;
- (void)_announceSuccess:(id)arg1;
- (void)_logElapsedTime;
- (void)_byteSenderDidProgress:(double)arg1 complete:(_Bool)arg2;
- (void)_didCancelUpload:(long long)arg1;
- (void)_didFail:(id)arg1;
- (void)_didSucceed:(id)arg1;
- (void)_didNotFetchStatus:(id)arg1;
- (void)_didFetchOffset:(unsigned long long)arg1 dataCenter:(id)arg2 isDuplicate:(_Bool)arg3;
- (void)cancel;
- (void)_uploadBytes;
- (void)_fetchStatus;
- (_Bool)_cacheContentLength;
- (_Bool)_skipStatusFetch;
- (void)upload;
@property(readonly, copy, nonatomic) FBMediaUploadContentSource *contentSource;
@property(readonly, copy, nonatomic) NSString *jobId;
- (id)initWithJobDetail:(id)arg1 listener:(id)arg2 statusFetcher:(id)arg3 eventListener:(id)arg4 byteSender:(id)arg5 streamAnnouncer:(id)arg6 queue:(id)arg7;

@end

