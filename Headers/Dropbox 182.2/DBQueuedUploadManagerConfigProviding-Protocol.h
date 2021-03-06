//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol DBQueuedUploadManagerConfigProviding <NSObject>
@property(readonly, nonatomic) unsigned long long maxConcurrentBackgroundUploads;
@property(readonly, nonatomic) _Bool supportsCrossProcessUploads;
@property(readonly, nonatomic) _Bool supportsConcurrentBackgroundUploads;
@property(readonly, nonatomic) _Bool shouldCheckConnectivity;
@property(readonly, nonatomic) unsigned long long preferredRequestTaskType;
- (void)setupUploadsFromDatabaseInfos:(NSArray *)arg1 URLSessionIdentifier:(NSString *)arg2 sharedContainerIdentifier:(NSString *)arg3 uploadCreator:(DBQueuedUpload * (^)(DBQueuedUploadInfo *, id <DBChunkedUploadOperationsFactory>, DBURLSessionRequestTask *))arg4 completion:(void (^)(id <DBChunkedUploadOperationsFactory>, NSArray *, DBQueuedUploadCrossProcessSessionManager *, NSArray *))arg5;
@end

