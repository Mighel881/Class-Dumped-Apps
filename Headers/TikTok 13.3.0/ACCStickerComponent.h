//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCPotteryComponentMessageProtocol-Protocol.h"
#import "ACCRecordCloseComponentMessageProtocol-Protocol.h"
#import "ACCRecordConfigPublishComponentMessageProtocol-Protocol.h"
#import "ACCRecordFlowComponentMessageProtocol-Protocol.h"
#import "ACCRecordSelectPropComponentMessage-Protocol.h"
#import "ACCRecordSwitchModeComponentMessageProtocol-Protocol.h"
#import "ACCStickerComponentProtocol-Protocol.h"
#import "AWEMojiEffectMessage-Protocol.h"
#import "AWEStickerDataManagerDelegate-Protocol.h"
#import "AWEStickerFeatureDelegate-Protocol.h"

@class AWE2DTextInputViewController, AWEMusicModel, AWEStickerDataManager, AWEStickerFeatureManager, IESEffectModel, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol ACCAlgorithmCallbackComponentProtocol, ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCFilterComponentProtocol, ACCGameComponentProtocol, ACCPotteryComponentProtocol, ACCRecordARComponentProtocol, ACCRecordConfigPublishComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordSelectMusicComponentProtocol, ACCRecordToolBarComponentProtocol;

@interface ACCStickerComponent : NSObject <AWEStickerDataManagerDelegate, AWEStickerFeatureDelegate, AWEMojiEffectMessage, ACCStickerComponentProtocol, ACCCaptureComponentMessageProtocol, ACCRecordConfigPublishComponentMessageProtocol, ACCRecordSelectPropComponentMessage, ACCRecordCloseComponentMessageProtocol, ACCRecordFlowComponentMessageProtocol, ACCPotteryComponentMessageProtocol, ACCRecordSwitchModeComponentMessageProtocol>
{
    _Bool _lastRedPacketRecognised;
    _Bool _refreshSticker;
    _Bool _beginVideoRecord;
    _Bool _previousDownloadingStickerNowDownloadedAndApply;
    _Bool _isEnterFromLocalARPotterySticker;
    id <ACCComponentBusProtocol> _componentBus;
    AWEStickerFeatureManager *_stickerFeatureManager;
    AWEStickerDataManager *_stickerDataManager;
    IESEffectModel *_currentSticker;
    IESEffectModel *_currentApplyCompleteSticker;
    long long _musicBubbleStatus;
    NSString *_lastAppliedStickerIdentifier;
    NSMutableDictionary *_cacheStickerChallengeNameDict;
    id <ACCRecordRootComponentProtocol> _root;
    id <ACCCaptureComponentProtocol> _capture;
    id <ACCGameComponentProtocol> _game;
    id <ACCPotteryComponentProtocol> _pottery;
    id <ACCRecordARComponentProtocol> _ar;
    id <ACCRecordToolBarComponentProtocol> _toolBar;
    id <ACCAlgorithmCallbackComponentProtocol> _algorithmComponent;
    id <ACCFilterComponentProtocol> _filterComponent;
    id <ACCRecordProgressBarComponentProtocol> _progressBarComponent;
    id <ACCRecordConfigPublishComponentProtocol> _configPublishComponent;
    id <ACCRecordSelectMusicComponentProtocol> _selectMusicComponent;
    UIView *_pixaloopLoadingView;
    double _pixaloopLoadingBeginTime;
    AWE2DTextInputViewController *_awe2DTextInputViewController;
    NSMutableArray *_usedStickers;
    AWEMusicModel *_firstApplyMusic;
    NSMutableArray *_activityTimerange;
}

+ (id)subComponentProtocols;
@property(nonatomic) _Bool isEnterFromLocalARPotterySticker; // @synthesize isEnterFromLocalARPotterySticker=_isEnterFromLocalARPotterySticker;
@property(nonatomic) _Bool previousDownloadingStickerNowDownloadedAndApply; // @synthesize previousDownloadingStickerNowDownloadedAndApply=_previousDownloadingStickerNowDownloadedAndApply;
@property(retain, nonatomic) NSMutableArray *activityTimerange; // @synthesize activityTimerange=_activityTimerange;
@property(nonatomic) _Bool beginVideoRecord; // @synthesize beginVideoRecord=_beginVideoRecord;
@property(retain, nonatomic) AWEMusicModel *firstApplyMusic; // @synthesize firstApplyMusic=_firstApplyMusic;
@property(retain, nonatomic) NSMutableArray *usedStickers; // @synthesize usedStickers=_usedStickers;
@property(nonatomic) _Bool refreshSticker; // @synthesize refreshSticker=_refreshSticker;
@property(retain, nonatomic) AWE2DTextInputViewController *awe2DTextInputViewController; // @synthesize awe2DTextInputViewController=_awe2DTextInputViewController;
@property(nonatomic) double pixaloopLoadingBeginTime; // @synthesize pixaloopLoadingBeginTime=_pixaloopLoadingBeginTime;
@property(retain, nonatomic) UIView *pixaloopLoadingView; // @synthesize pixaloopLoadingView=_pixaloopLoadingView;
@property(nonatomic) _Bool lastRedPacketRecognised; // @synthesize lastRedPacketRecognised=_lastRedPacketRecognised;
@property(readonly, nonatomic) __weak id <ACCRecordSelectMusicComponentProtocol> selectMusicComponent; // @synthesize selectMusicComponent=_selectMusicComponent;
@property(readonly, nonatomic) __weak id <ACCRecordConfigPublishComponentProtocol> configPublishComponent; // @synthesize configPublishComponent=_configPublishComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBarComponent; // @synthesize progressBarComponent=_progressBarComponent;
@property(readonly, nonatomic) __weak id <ACCFilterComponentProtocol> filterComponent; // @synthesize filterComponent=_filterComponent;
@property(readonly, nonatomic) __weak id <ACCAlgorithmCallbackComponentProtocol> algorithmComponent; // @synthesize algorithmComponent=_algorithmComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBar; // @synthesize toolBar=_toolBar;
@property(readonly, nonatomic) __weak id <ACCRecordARComponentProtocol> ar; // @synthesize ar=_ar;
@property(readonly, nonatomic) __weak id <ACCPotteryComponentProtocol> pottery; // @synthesize pottery=_pottery;
@property(readonly, nonatomic) __weak id <ACCGameComponentProtocol> game; // @synthesize game=_game;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> capture; // @synthesize capture=_capture;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> root; // @synthesize root=_root;
@property(retain, nonatomic) NSMutableDictionary *cacheStickerChallengeNameDict; // @synthesize cacheStickerChallengeNameDict=_cacheStickerChallengeNameDict;
@property(retain, nonatomic) NSString *lastAppliedStickerIdentifier; // @synthesize lastAppliedStickerIdentifier=_lastAppliedStickerIdentifier;
@property(nonatomic) long long musicBubbleStatus; // @synthesize musicBubbleStatus=_musicBubbleStatus;
@property(retain, nonatomic) IESEffectModel *currentApplyCompleteSticker; // @synthesize currentApplyCompleteSticker=_currentApplyCompleteSticker;
@property(retain, nonatomic) IESEffectModel *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(retain, nonatomic) AWEStickerDataManager *stickerDataManager; // @synthesize stickerDataManager=_stickerDataManager;
@property(retain, nonatomic) AWEStickerFeatureManager *stickerFeatureManager; // @synthesize stickerFeatureManager=_stickerFeatureManager;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)camera;
- (id)providedPublishModel;
- (id)containerViewController;
- (void)stickerHintViewShowWithEffect:(id)arg1;
- (void)stickerHintViewRemove;
- (void)modernStickerViewControllerTappedCameraButton:(id)arg1;
- (void)modernStickerViewControllerDidShow;
- (void)msg_didChangeToMode:(long long)arg1 fromMode:(long long)arg2;
- (void)msg_didExitPottery;
- (void)msg_didEnterPottery;
- (void)msg_camera:(id)arg1 pauseRecordWithError:(id)arg2;
- (void)msg_camera:(id)arg1 startRecordWithError:(id)arg2;
- (void)msg_videoFragmentInfoDidAppend:(id)arg1;
- (void)trackCommerceStickerInfoIfNeeded;
- (void)msg_didClickCompleteButton;
- (void)msg_didCloseRecordPage;
- (void)msg_didClickStickerSwitchButton;
- (void)msg_didFinishConfigAudio:(id)arg1;
- (void)insertStickers:(id)arg1 forCategory:(id)arg2;
- (void)resetStickerWithCharityID:(id)arg1 forCategory:(id)arg2;
- (id)insertStickersForCategories:(id)arg1;
- (id)resetStickersForCategories:(id)arg1;
- (long long)currentDateInteger;
- (id)publishModel;
- (void)trackCommerceStickerExperienceDuration:(double)arg1;
- (_Bool)shouldTrackExperienceDuration:(id)arg1;
- (void)p_pickForceBindMusic:(id)arg1 musicIsForceBind:(_Bool)arg2 musicError:(id)arg3;
- (_Bool)shouldPickMusicBySelectSource;
- (_Bool)shouldPickForceBindMusic;
- (void)mojiResourceLoadForEffectMD5:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mojiResourceWillApplyForEffectMD5:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configAddFaceDetectToastBlock;
- (void)configStickerStatusBlock;
- (void)msg_createCameraCompleteWithCamera:(id)arg1;
- (void)msg_configCameraMessageBlock:(id)arg1;
- (void)configStrongBeatStickerIfNeeded:(id)arg1;
- (void)configApplyStickerApplyCompletionBlock;
- (void)switchCameraPositionForAR;
- (void)switchCameraPositionWithSticker:(id)arg1;
- (void)configApplyStickerWillapplyStickerBlock;
- (void)showForceBindMusicBubble;
- (void)setStickerViewControllerDismissBlockIfNeeded;
- (void)applyLocalSticker;
- (void)downloadResource:(id)arg1 downloadingChildEffect:(_Bool)arg2 downloadCompleteBlock:(CDUnknownBlockType)arg3;
- (void)downloadStickers;
- (void)dismis2DTextInputViewController;
- (void)show2DTextInputViewControllerWithEffectMessageModel:(id)arg1;
- (void)msg_configCameraExternalAlgorithm:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerDidLoad;
- (void)dealloc;
- (id)autoInjectComponentDictionaryOfselectMusicComponent;
- (id)autoInjectComponentDictionaryOfconfigPublishComponent;
- (id)autoInjectComponentDictionaryOfprogressBarComponent;
- (id)autoInjectComponentDictionaryOffilterComponent;
- (id)autoInjectComponentDictionaryOftoolBar;
- (id)autoInjectComponentDictionaryOfalgorithmComponent;
- (id)autoInjectComponentDictionaryOfar;
- (id)autoInjectComponentDictionaryOfpottery;
- (id)autoInjectComponentDictionaryOfgame;
- (id)autoInjectComponentDictionaryOfcapture;
- (id)autoInjectComponentDictionaryOfroot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end
