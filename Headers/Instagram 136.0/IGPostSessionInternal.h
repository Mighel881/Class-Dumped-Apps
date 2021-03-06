//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPostSessionType-Protocol.h>
#import <FBSharedFramework/IGPostShareSessionDelegate-Protocol.h>
#import <FBSharedFramework/IGUploadSessionDelegate-Protocol.h>

@class IGImageEncoding, IGPostLoggingContext, IGPostSessionContext, IGPostSessionLogger, IGPostShareAnnouncer, IGPostShareSessionInternal, IGPostUploadAnnouncer, IGPostUploadComposer, IGUploadService, IGUploadSession, IGUserSession, NSArray, NSDate, NSDictionary, NSError, NSString;
@protocol IGAPIClient, IGPostDataProvider, IGPostSessionInternalDelegate, IGUserLauncherSet;

@interface IGPostSessionInternal : NSObject <IGPostShareSessionDelegate, IGUploadSessionDelegate, IGPostSessionType>
{
    NSString *_postId;
    NSArray *_uploadIds;
    IGUserSession *_userSession;
    id <IGAPIClient> _networker;
    IGUploadService *_uploadService;
    NSString *_uploadServicePath;
    long long _resumeCount;
    IGPostLoggingContext *_loggingContext;
    IGPostUploadComposer *_uploadComposer;
    IGUploadSession *_uploadSession;
    IGPostShareSessionInternal *_shareSession;
    NSDate *_postCreationDate;
    NSDictionary *_crossAccountSharingNonces;
    IGPostShareAnnouncer *_shareAnnouncer;
    IGPostUploadAnnouncer *_uploadAnnouncer;
    IGPostSessionLogger *_postSessionLogger;
    NSError *_lastUploadError;
    NSError *_lastShareError;
    id <IGPostSessionInternalDelegate> _delegate;
    id <IGUserLauncherSet> _configurationCoordinator;
    long long _mediaDataType;
    id <IGPostDataProvider> _dataProvider;
    long long _entryPointType;
    IGImageEncoding *_videoCoverImageEncoding;
}

@property(readonly, nonatomic) IGImageEncoding *videoCoverImageEncoding; // @synthesize videoCoverImageEncoding=_videoCoverImageEncoding;
@property(readonly, nonatomic) long long entryPointType; // @synthesize entryPointType=_entryPointType;
@property(readonly, nonatomic) __weak id <IGPostDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) long long mediaDataType; // @synthesize mediaDataType=_mediaDataType;
@property(readonly, copy, nonatomic) id <IGUserLauncherSet> configurationCoordinator; // @synthesize configurationCoordinator=_configurationCoordinator;
@property(nonatomic) __weak id <IGPostSessionInternalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)uploadSession:(id)arg1 didRenderVideoUrl:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didGenerateVideoCoverImageEncoding:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didRenderImageEncoding:(id)arg2 forMediaId:(id)arg3;
- (void)uploadSession:(id)arg1 didUpdateWithContext:(id)arg2;
- (void)uploadSession:(id)arg1 didChangeStatus:(long long)arg2 serverResponse:(id)arg3 error:(id)arg4;
- (void)uploadSession:(id)arg1 didUpdateTotalProgress:(double)arg2;
- (void)postShareSessionInternal:(id)arg1 shareId:(id)arg2 serverResponse:(id)arg3 error:(id)arg4;
- (void)postShareSessionInternal:(id)arg1 didUpdateWithContext:(id)arg2;
- (void)_logCancelForShareId:(id)arg1 userAction:(_Bool)arg2;
- (void)_logFbFlowStart:(id)arg1;
- (_Bool)_shouldMeasureQuality;
- (_Bool)_isCarouselPost;
- (void)_notifySharesOfCurrentStatusWithServerResponse:(id)arg1;
- (void)_notifyContextDidUpdate;
- (void)_processShare;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createShareLoggerWithShareType:(long long)arg1 shareId:(id)arg2 logger:(id)arg3;
- (id)shareForShareId:(id)arg1;
- (id)shares;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)cancelUploadFromUserAction:(_Bool)arg1;
- (void)retry;
- (id)imageEncoding;
- (double)uploadProgress;
- (long long)uploadStatus;
@property(readonly, copy, nonatomic) NSArray *uploadIds;
- (id)postId;
- (void)removeListener:(id)arg1 shareId:(id)arg2;
- (void)addListener:(id)arg1 shareId:(id)arg2;
- (void)retryShareId:(id)arg1 uploadComposition:(id)arg2;
- (void)cancelShareId:(id)arg1 userAction:(_Bool)arg2;
- (id)shareIds;
- (id)anyRenderedVideoUrl;
- (id)lastShareSessionErrorResponseForShareId:(id)arg1;
- (id)configForShareId:(id)arg1;
- (double)progressForShareId:(id)arg1;
- (long long)statusForShareId:(id)arg1;
@property(readonly, copy, nonatomic) IGPostSessionContext *context;
- (id)shareWithConfig:(id)arg1;
- (id)loggingContext;
- (void)retryWithUploadComposition:(id)arg1;
- (void)cancelWithResumable:(_Bool)arg1 userAction:(_Bool)arg2;
- (void)resumeSessionFromContext:(id)arg1 uploadComposition:(id)arg2;
- (_Bool)canResumeFromContext:(id)arg1;
- (void)cancelPendingSession;
- (void)completeUploadRequests;
- (id)uploadCarouselWithAssets:(id)arg1;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadParams:(id)arg2;
- (void)uploadVideoCoverPhotoWithImageEncoding:(id)arg1;
- (void)uploadVideoSource:(id)arg1 renderOptions:(id)arg2 transcodeOptions:(id)arg3 previewImageEncoding:(id)arg4 useFirstFrameForCoverPhoto:(_Bool)arg5 mediaId:(id)arg6 uploadParams:(id)arg7;
- (void)uploadPhotoWithImageEncoding:(id)arg1 previewImageEncoding:(id)arg2 uploadParams:(id)arg3;
- (id)initWithPostId:(id)arg1 userSession:(id)arg2 networker:(id)arg3 uploadService:(id)arg4 uploadServicePath:(id)arg5 postDataProvider:(id)arg6 entryPointType:(long long)arg7 mediaDataType:(long long)arg8 loggingContext:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

