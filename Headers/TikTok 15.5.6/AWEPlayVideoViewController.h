//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDisplayViewController-Protocol.h"
#import "AWEAwemePlayVideoControllerProtocol-Protocol.h"
#import "AWEAwemePlayVideoDelegate-Protocol.h"
#import "IESVideoPlayerDelegate-Protocol.h"

@class AWEAwemeModel, AWEVideoBSModel, HTSTimingTracker, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSTimer, UIImageView, UILabel, UIView;
@protocol AWEAwemePlayInteractionDelegate, AWEPlayVideoViewControllerContainerProtocol, AWEPlayVideoViewControllerDelegate, IESVideoPlayerProtocol;

@interface AWEPlayVideoViewController : UIViewController <AWEAwemeDisplayViewController, AWEAwemePlayVideoDelegate, IESVideoPlayerDelegate, AWEAwemePlayVideoControllerProtocol>
{
    _Bool _pauseBySingleClick;
    _Bool _shouldPrepareForDisplay;
    _Bool _forbidUpdatePlayer;
    _Bool _hasReportClickEnter;
    _Bool _isScrolledAutomatically;
    _Bool _isAppear;
    _Bool _hasShownDisconnectToast;
    _Bool _shouldDisableOMSDKTrack;
    _Bool _isFullScreen;
    _Bool _previousKeepAlive;
    _Bool _isPlayFailedShown;
    _Bool _finishLogged;
    _Bool _isReadyForDisplay;
    _Bool _isPlaybackFailed;
    _Bool _alreadyRecordPlayCompletion;
    _Bool _shouldDiscardReport;
    _Bool _blockedWithAlertView;
    _Bool _isPlayerInStall;
    _Bool _shouldPreventTrackPlayTime;
    _Bool _isCDNURLExpired;
    _Bool _coverImageLoaded;
    NSString *_referString;
    CDUnknownBlockType _trackAwemePlayTime;
    id <AWEPlayVideoViewControllerDelegate> _delegate;
    NSNumber *_clickEnter;
    NSString *_originEntryEnterMethod;
    NSString *_pageType;
    NSString *_enterFrom;
    NSString *_ruleId;
    NSDictionary *_logExtraDict;
    NSDictionary *_playVideoQualityExtraInfo;
    AWEAwemeModel *_model;
    long long _loopPlay;
    long long _playType;
    NSString *_cityInfoString;
    NSString *_adEventName;
    id <IESVideoPlayerProtocol> _playerController;
    long long _playState;
    CDUnknownBlockType _playerFinishedPlayingBlock;
    id <AWEAwemePlayInteractionDelegate> _interactionDelegate;
    id <AWEPlayVideoViewControllerContainerProtocol> _container;
    CDUnknownBlockType _playVideo;
    double _defaultSeekToTime;
    NSString *_reactId;
    UIView *_loadingView;
    UIImageView *_coverImageView;
    double _playStartTimestamp;
    double _stallStartTimestamp;
    HTSTimingTracker *_timingTracker;
    AWEVideoBSModel *_bsModel;
    NSNumber *_calcBitrate;
    long long _trategyType;
    unsigned long long _stallCount;
    double _stallTotalDuration;
    UILabel *_debugLabel;
    NSTimer *_volumeSyncTimer;
    double _playStartSystemVolumn;
    long long _previousPlayState;
    NSString *_connectMethod;
    NSString *_enterMethodForTrack;
    NSMutableDictionary *_playIndexDic;
    NSNumber *_coverImageDuration;
}

@property(retain, nonatomic) NSNumber *coverImageDuration; // @synthesize coverImageDuration=_coverImageDuration;
@property(nonatomic) _Bool coverImageLoaded; // @synthesize coverImageLoaded=_coverImageLoaded;
@property(retain, nonatomic) NSMutableDictionary *playIndexDic; // @synthesize playIndexDic=_playIndexDic;
@property(copy, nonatomic) NSString *enterMethodForTrack; // @synthesize enterMethodForTrack=_enterMethodForTrack;
@property(retain, nonatomic) NSString *connectMethod; // @synthesize connectMethod=_connectMethod;
@property(nonatomic) _Bool isCDNURLExpired; // @synthesize isCDNURLExpired=_isCDNURLExpired;
@property(nonatomic) _Bool shouldPreventTrackPlayTime; // @synthesize shouldPreventTrackPlayTime=_shouldPreventTrackPlayTime;
@property(nonatomic) _Bool isPlayerInStall; // @synthesize isPlayerInStall=_isPlayerInStall;
@property(nonatomic) _Bool blockedWithAlertView; // @synthesize blockedWithAlertView=_blockedWithAlertView;
@property(nonatomic) _Bool shouldDiscardReport; // @synthesize shouldDiscardReport=_shouldDiscardReport;
@property(nonatomic) long long previousPlayState; // @synthesize previousPlayState=_previousPlayState;
@property(nonatomic) double playStartSystemVolumn; // @synthesize playStartSystemVolumn=_playStartSystemVolumn;
@property(retain, nonatomic) NSTimer *volumeSyncTimer; // @synthesize volumeSyncTimer=_volumeSyncTimer;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(nonatomic) double stallTotalDuration; // @synthesize stallTotalDuration=_stallTotalDuration;
@property(nonatomic) unsigned long long stallCount; // @synthesize stallCount=_stallCount;
@property(nonatomic) long long trategyType; // @synthesize trategyType=_trategyType;
@property(retain, nonatomic) NSNumber *calcBitrate; // @synthesize calcBitrate=_calcBitrate;
@property(retain, nonatomic) AWEVideoBSModel *bsModel; // @synthesize bsModel=_bsModel;
@property(retain, nonatomic) HTSTimingTracker *timingTracker; // @synthesize timingTracker=_timingTracker;
@property(nonatomic) _Bool alreadyRecordPlayCompletion; // @synthesize alreadyRecordPlayCompletion=_alreadyRecordPlayCompletion;
@property(nonatomic) double stallStartTimestamp; // @synthesize stallStartTimestamp=_stallStartTimestamp;
@property(nonatomic) double playStartTimestamp; // @synthesize playStartTimestamp=_playStartTimestamp;
@property(nonatomic) _Bool isPlaybackFailed; // @synthesize isPlaybackFailed=_isPlaybackFailed;
@property(nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(nonatomic) _Bool finishLogged; // @synthesize finishLogged=_finishLogged;
@property(nonatomic) _Bool isPlayFailedShown; // @synthesize isPlayFailedShown=_isPlayFailedShown;
@property(nonatomic) _Bool previousKeepAlive; // @synthesize previousKeepAlive=_previousKeepAlive;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool shouldDisableOMSDKTrack; // @synthesize shouldDisableOMSDKTrack=_shouldDisableOMSDKTrack;
@property(nonatomic) _Bool hasShownDisconnectToast; // @synthesize hasShownDisconnectToast=_hasShownDisconnectToast;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(copy, nonatomic) NSString *reactId; // @synthesize reactId=_reactId;
@property(nonatomic) double defaultSeekToTime; // @synthesize defaultSeekToTime=_defaultSeekToTime;
@property(copy, nonatomic) CDUnknownBlockType playVideo; // @synthesize playVideo=_playVideo;
@property(nonatomic) __weak id <AWEPlayVideoViewControllerContainerProtocol> container; // @synthesize container=_container;
@property(nonatomic) __weak id <AWEAwemePlayInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) CDUnknownBlockType playerFinishedPlayingBlock; // @synthesize playerFinishedPlayingBlock=_playerFinishedPlayingBlock;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> playerController; // @synthesize playerController=_playerController;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(nonatomic) _Bool isScrolledAutomatically; // @synthesize isScrolledAutomatically=_isScrolledAutomatically;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(nonatomic) long long loopPlay; // @synthesize loopPlay=_loopPlay;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSDictionary *playVideoQualityExtraInfo; // @synthesize playVideoQualityExtraInfo=_playVideoQualityExtraInfo;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(copy, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *originEntryEnterMethod; // @synthesize originEntryEnterMethod=_originEntryEnterMethod;
@property(nonatomic) _Bool hasReportClickEnter; // @synthesize hasReportClickEnter=_hasReportClickEnter;
@property(retain, nonatomic) NSNumber *clickEnter; // @synthesize clickEnter=_clickEnter;
@property(nonatomic) __weak id <AWEPlayVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType trackAwemePlayTime; // @synthesize trackAwemePlayTime=_trackAwemePlayTime;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool forbidUpdatePlayer; // @synthesize forbidUpdatePlayer=_forbidUpdatePlayer;
@property(nonatomic) _Bool shouldPrepareForDisplay; // @synthesize shouldPrepareForDisplay=_shouldPrepareForDisplay;
@property(nonatomic) _Bool pauseBySingleClick; // @synthesize pauseBySingleClick=_pauseBySingleClick;
- (void).cxx_destruct;
- (void)dismissSystemVolumeViewForPoorDevice;
- (id)_isCurrentVideoH265;
- (void)clearDetailsWithFirstFrame;
- (_Bool)hadValidDeatilsWithFirstFrame;
- (id)detailsWithFirstImageLoadTime;
- (id)detailsWithFirstFrameLoadTime;
- (double)p_processStartTime;
- (_Bool)p_processInfoForPID:(int)arg1 procInfo:(struct kinfo_proc *)arg2;
- (id)playerNetworkTypeString;
- (id)playerTypeString;
- (id)getPlayModeWithAutoPlayMode;
- (_Bool)isAutoPlaying;
- (id)getPlayExtraFromSubclass;
- (void)player:(id)arg1 noVideoDataToDownloadForURL:(id)arg2;
- (void)player:(id)arg1 didFinishVideoDataDownloadForURL:(id)arg2;
- (void)player:(id)arg1 didChangeStallState:(long long)arg2;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)player:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)player:(id)arg1 playbackFailedForURL:(id)arg2 error:(id)arg3;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)_showVRVideoTipsIfNeeded;
- (id)_getParamsForBSPredict;
- (id)_getVideoPlayAccess;
- (id)_getVideoPlayQualityParams;
- (id)_getBitrateGearNameSet;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (id)userInfoForNotification;
- (void)addPeriodicTimeObserver;
- (long long)playProgressThreshold;
- (id)getVideoLength;
- (void)_appsflyerPlayCountTrackerAllDayInTik;
- (void)_appsflyerPlayCountTrackerADayInTik;
- (void)_googleAndFBPlayCountTrackerAllDay;
- (void)_checkPlayTimeout;
- (void)_cancelPendingPlayTimeoutCheck;
- (id)playURIString;
- (void)restartPlayVideoWithPrepare:(_Bool)arg1;
- (void)restartPlayVideo;
- (void)resumePlayVideo;
- (_Bool)_alertIfNotValid;
- (id)_coverImageName;
- (_Bool)shouldUseTTPlayer;
- (void)setPlayerSeekTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerComponentActionAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double currentPlaybackTime;
- (_Bool)pause;
- (void)_cancelTimingForStalling;
- (void)_cancelTimingForFirstFrame;
- (void)_blockMonitorSummary:(double)arg1;
- (id)internalLogExtraDict;
- (void)_trackPlayTime;
- (_Bool)stop;
- (void)_trackVideoPlayAction;
- (id)getRepostFromAwemeForTrack;
- (id)getRepostItemFromSubclass;
- (void)trackVideoPlaySubTasksWithAttributes:(id)arg1;
- (_Bool)alertIfNotValid;
- (_Bool)videoShouldPlay;
- (_Bool)play;
- (void)reset;
- (id)localVideoURL;
- (long long)scaleModeForVideo;
- (long long)contentModeForDefaultVideoCover;
- (void)addDebugLabelIfNeeded;
- (void)prepareToPlay;
- (void)prepareForDisplay;
- (void)updatePlayerIfNeeded;
- (void)updateCoverImage;
- (void)updateCoverImageStatus;
- (void)trackVideoPauseEvent;
- (void)playWithAnimation;
- (void)pauseWithAnimation;
- (_Bool)isPlaying;
- (_Bool)isActive;
@property(readonly, nonatomic) long long loopTimes;
@property(copy, nonatomic) NSString *currentPlayURL;
- (void)updatePlayerController:(id)arg1 withPlayVideoVC:(id)arg2;
- (void)_addVideoLoadingView;
- (void)resetVolume;
- (void)muteMusicIfNeeded;
- (void)checkIdleTimerDisabledStatus:(_Bool)arg1;
- (void)recreatePlayer;
- (void)addAVAudioSessionObservers;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didReceiveMemoryWarning;
- (void)onNetworkChanged:(id)arg1;
- (void)onAppllicationWillTerminate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
