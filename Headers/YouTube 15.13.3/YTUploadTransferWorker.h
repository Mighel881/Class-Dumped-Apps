//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseWorker.h>

#import <Module_Framework/YTAsyncWorker-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTUploadInnerTubeProgressObserver-Protocol.h>

@class GIMMe, NSObject, NSString, YTUploadGelLogger, YTUploadTransferController;
@protocol YTUploadConfig, YTWorkerDelegate;

@interface YTUploadTransferWorker : YTBaseWorker <YTHotConfigObserver, YTUploadInnerTubeProgressObserver, YTAsyncWorker>
{
    NSObject<YTUploadConfig> *_uploadConfig;
    _Bool _uploadDuringPlaybackEnabled;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
    YTUploadTransferController *_transferController;
    YTUploadGelLogger *_logger;
}

@property(retain, nonatomic) YTUploadGelLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) YTUploadTransferController *transferController; // @synthesize transferController=_transferController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (void)updatePausedInfo;
- (void)schedulingNeededForFrontendUploadID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hotConfigDidChange:(id)arg1;
- (void)capabilitiesDidChange;
- (_Bool)isWorkingAsynchronously;
- (long long)workerRequirements;
- (_Bool)workerRequirementsCanChangeAtRuntime;
- (void)stopWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTransferController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
