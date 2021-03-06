//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCFeatureComponent.h"

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCGameComponentMessageProtocol-Protocol.h"
#import "ACCRecordButtonComponentMessageProtocol-Protocol.h"
#import "ACCRecordCloseComponentMessageProtocol-Protocol.h"
#import "ACCRecordFlowComponentProtocol-Protocol.h"
#import "ACCRecordProgressBarComponentMessageProtocol-Protocol.h"

@class ACCAnimatedButton, ACCButton, ACCFilterViewModel, ACCRecorderFlowViewModel, NSString;
@protocol ACCBeautyFeatureComponentProtocol, ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCPreviewComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordCountdownComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordToolBarComponentProtocol, ACCRecordTrackComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordFlowComponent : ACCFeatureComponent <ACCRecordFlowComponentProtocol, ACCRecordCloseComponentMessageProtocol, ACCRecordProgressBarComponentMessageProtocol, ACCCaptureComponentMessageProtocol, ACCRecordButtonComponentMessageProtocol, ACCGameComponentMessageProtocol>
{
    _Bool _exporting;
    _Bool _hasRemovedSegmentOnce;
    id <ACCComponentBusProtocol> _componentBus;
    ACCButton *_completeButton;
    ACCAnimatedButton *_deleteButton;
    id <ACCStickerComponentProtocol> _stickerComponent;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCRecordButtonComponentProtocol> _recordButtonComponent;
    id <ACCPreviewComponentProtocol> _previewComponent;
    id <ACCRecordProgressBarComponentProtocol> _progressBarComponent;
    id <ACCCaptureComponentProtocol> _captureComponent;
    id <ACCRecordTrackComponentProtocol> _trackComponent;
    id <ACCBeautyFeatureComponentProtocol> _beautyFeatureComponent;
    id <ACCRecordCountdownComponentProtocol> _countdownComponent;
    id <ACCRecordToolBarComponentProtocol> _toolBarComponent;
    ACCRecorderFlowViewModel *_viewModel;
}

@property(nonatomic) __weak ACCRecorderFlowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool hasRemovedSegmentOnce; // @synthesize hasRemovedSegmentOnce=_hasRemovedSegmentOnce;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBarComponent; // @synthesize toolBarComponent=_toolBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordCountdownComponentProtocol> countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) __weak id <ACCBeautyFeatureComponentProtocol> beautyFeatureComponent; // @synthesize beautyFeatureComponent=_beautyFeatureComponent;
@property(readonly, nonatomic) __weak id <ACCRecordTrackComponentProtocol> trackComponent; // @synthesize trackComponent=_trackComponent;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> captureComponent; // @synthesize captureComponent=_captureComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBarComponent; // @synthesize progressBarComponent=_progressBarComponent;
@property(readonly, nonatomic) __weak id <ACCPreviewComponentProtocol> previewComponent; // @synthesize previewComponent=_previewComponent;
@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordButtonComponent; // @synthesize recordButtonComponent=_recordButtonComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(nonatomic, getter=isExporting) _Bool exporting; // @synthesize exporting=_exporting;
@property(retain, nonatomic) ACCAnimatedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) ACCButton *completeButton; // @synthesize completeButton=_completeButton;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)recorderController;
- (void)msg_didbackToRecordFromGame;
- (void)msg_didConfirmEnterGame:(_Bool)arg1;
- (void)msg_resetGame;
- (void)msg_willStartGame;
- (void)msg_didFinishTakePicture;
- (void)msg_startTakePicture;
- (void)msg_didFinishCountDown;
- (void)msg_startRecord;
- (void)msg_camera:(id)arg1 pauseRecordWithError:(id)arg2;
- (void)jumpToNextViewController;
- (void)recordAudioRelatedInfo;
- (void)didFinishRecording;
- (void)exportVideo;
- (void)stopRecord;
- (void)stopRecordAndExportVideo;
- (void)stopRecordAndPossiblyExportVideo;
- (void)resyncReactPlayerTime;
- (void)resyncDuetPlayerTime;
- (void)p_deleteLastSegmentFrames;
- (void)p_deleteAllSegmentsFrames;
- (void)p_deleteAllSegments;
- (void)removeLastVideoFragmentInfo;
- (void)removeLastSegment;
- (void)clickDeleteBtn:(id)arg1;
- (void)clickCompleteBtn:(id)arg1;
- (_Bool)allowCompleteOf:(double)arg1;
- (void)msg_didUpdateCurrentDuration:(double)arg1;
- (void)msg_didConfirmReshoot:(_Bool)arg1;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
@property(readonly, nonatomic) __weak ACCFilterViewModel *filterViewModel;
- (void)appendReactFragmentInfoIfNeeded;
- (void)fillChallengeNameForFragmentInfo;
- (void)fillBeautifyInfoForFragmentInfo:(id)arg1;
- (void)appendVideoFragmentInfo;
- (void)updateCompleteButtonWithSelected:(_Bool)arg1;
- (void)updateCompleteButton;
- (id)autoInjectComponentDictionaryOftoolBarComponent;
- (id)autoInjectComponentDictionaryOfcountdownComponent;
- (id)autoInjectComponentDictionaryOfbeautyFeatureComponent;
- (id)autoInjectComponentDictionaryOftrackComponent;
- (id)autoInjectComponentDictionaryOfcaptureComponent;
- (id)autoInjectComponentDictionaryOfprogressBarComponent;
- (id)autoInjectComponentDictionaryOfpreviewComponent;
- (id)autoInjectComponentDictionaryOfrecordButtonComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;
- (id)autoInjectComponentDictionaryOfstickerComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

