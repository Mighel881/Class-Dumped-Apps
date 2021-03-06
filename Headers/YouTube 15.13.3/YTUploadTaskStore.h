//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTUserSpecificDataStore.h>

@class GIMMe;

@interface YTUploadTaskStore : YTUserSpecificDataStore
{
    GIMMe *_gimme;
}

+ (id)uploadTasksForEntities:(id)arg1;
+ (id)insertUploadTaskEntityWithAssetURL:(id)arg1 phLocalIdentifier:(id)arg2 uploadType:(int)arg3 videoID:(id)arg4 flowUpload:(_Bool)arg5 photoUpload:(_Bool)arg6 streamingUpload:(_Bool)arg7 skipTranscode:(_Bool)arg8 transcodeURL:(id)arg9 frontendID:(id)arg10 thumbnailURL:(id)arg11 duration:(double)arg12 metadata:(id)arg13 assetSegmentURLs:(id)arg14 editInstructions:(id)arg15 interactiveStickers:(id)arg16 userID:(id)arg17 context:(id)arg18;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2;
+ (id)fetchRequestWithPredicates:(id)arg1 userID:(id)arg2 inContext:(id)arg3;
+ (id)uploadTaskEntityWithVideoID:(id)arg1 userID:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)uploadTaskEntityWithFrontendID:(id)arg1 userID:(id)arg2 context:(id)arg3 error:(id *)arg4;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)fetchUploadTasksWithPredicates:(id)arg1 fetchLimit:(unsigned long long)arg2 sortDescriptors:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchFirstUploadTaskWithPredicates:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)getTaskCountForAllUsersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVideoID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)saveFrontendID:(id)arg1 userID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveFrontendID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveFrontendID:(id)arg1 userID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchUploadTasksWithPredicates:(id)arg1 callabackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveFrontendID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchUploadTasksWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteUploadTaskWithFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteTaskWithFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)retryTaskWithFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markOperationState:(id)arg1 forRetryWithConfig:(id)arg2 frontendID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)markOperationState:(id)arg1 failedWithErrorCode:(long long)arg2 frontendID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)saveIosguardChallengeResponseForFrontendID:(id)arg1 challengeResponse:(id)arg2 challengeKey:(id)arg3 challengeValue:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)markStreamingRecordingCompleteForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markUploadCancelledForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markCancellingForFrontendID:(id)arg1 reason:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markVideoCommittedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markMetadataSavingCompletedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markFeedbackPollingCompletedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markIosGuardChallengeCompletedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markVideoProcessedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markRegistrationCompleteForFrontendID:(id)arg1 videoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markCreateReelItemsCompleteForFrontendID:(id)arg1 playlistIds:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markDraftCreatedForFrontendID:(id)arg1 videoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markBackgroundTransferCompletedForTranscodeURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markTransferCompletedForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markUserConfirmedUploadForFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markReadyToCreateReelItemsForFrontendUploadId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)saveDuration:(double)arg1 thumbnailURL:(id)arg2 editInstructions:(id)arg3 forFrontendID:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)saveMetadata:(id)arg1 forVideoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)saveMetadata:(id)arg1 forFrontendID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)saveVideoStatus:(int)arg1 shortMessage:(id)arg2 longMessage:(id)arg3 forFrontendID:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveVideoStatus:(int)arg1 forFrontendID:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveVideoID:(id)arg1 forFrontendID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)saveUploadLocationURL:(id)arg1 resourceID:(id)arg2 forFrontendID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)saveTranscodeURL:(id)arg1 forFrontendID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)saveUserID:(id)arg1 forFrontendID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchUnconfirmedUploadCreatedBeforeDate:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchUploadTaskForCancellationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForDeletionWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForVideoCommittingWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForMetadataSavingWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTasksForFeedbackPollingWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForIosguardChallengeWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForProcessVideoWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForCreateReelItemsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForDraftCreationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForTransferWithFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchUploadTaskForTransferWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForTranscodingWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskForRegistrationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchUploadTaskWithFrontendID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUploadTaskWithFrontendID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPendingUploadTasksWithOption:(long long)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createUploadTaskToDisplayProcessingWithVideoID:(id)arg1 frontendID:(id)arg2 videoTitle:(id)arg3 thumbnailURL:(id)arg4 duration:(double)arg5 privacy:(int)arg6 responseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (void)createUploadTaskWithAssetURL:(id)arg1 phLocalIdentifier:(id)arg2 uploadType:(int)arg3 videoID:(id)arg4 flowUpload:(_Bool)arg5 photoUpload:(_Bool)arg6 streamingUpload:(_Bool)arg7 skipTranscode:(_Bool)arg8 transcodeURL:(id)arg9 frontendID:(id)arg10 thumbnailURL:(id)arg11 duration:(double)arg12 metadata:(id)arg13 assetSegmentURLs:(id)arg14 editInstructions:(id)arg15 interactiveStickers:(id)arg16 responseBlock:(CDUnknownBlockType)arg17 errorBlock:(CDUnknownBlockType)arg18;
- (void)pendingFlowUploadsWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUploadTaskForRetryWithFrontendID:(id)arg1 processor:(int)arg2 retryConfig:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateUploadTaskWithFrontendID:(id)arg1 updater:(id)arg2 processor:(int)arg3 state:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateUploadTaskWithFrontendID:(id)arg1 updater:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

