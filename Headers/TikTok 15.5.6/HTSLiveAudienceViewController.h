//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSLiveStreamPlayerDelegate-Protocol.h"
#import "IESLiveAudienceReaction-Protocol.h"
#import "IESLiveVideoPlayerDelegate-Protocol.h"

@class HTSEventContext, HTSLive4LayerContainerView, HTSLiveAudienceStore, HTSLiveDetailRouterImpl, HTSLiveMessageActionCreator, HTSLivePluginLayoutMachine, HTSLiveStreamPlayer, IESLiveBackStore, IESLiveComponentLoader, IESLiveMonitorContext, IESLiveNewPlayerFactory, IESLiveRoomSegue, IESLiveVideoPlayer, NSMutableDictionary, NSString, UIImageView, UIView;
@protocol HTSLiveAppLifeCycleActions, HTSLiveAudienceActions, HTSLiveAudienceViewControllerDelegate, IESLiveAlertFactory, IESLiveAudienceRoomAwareness, IESLiveBackTipRouter, IESLiveCustomObserver, IESLiveDI, IESLiveEnvironment, IESLiveFinishViewFactory, IESLiveLearningService, IESLiveMonitor, IESLivePushService, IESLiveReference, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface HTSLiveAudienceViewController : UIViewController <HTSLiveStreamPlayerDelegate, IESLiveVideoPlayerDelegate, IESLiveAudienceReaction>
{
    _Bool _paused;
    _Bool _closed;
    _Bool _canPause;
    _Bool _clickedClose;
    _Bool _closeActionEnable;
    _Bool _didMonitorEnterRoom;
    _Bool _didMonitorEnterRoomFull;
    _Bool _didEnterRoomSuccess;
    _Bool _didLivePlaySuccess;
    _Bool _statusBarHidden;
    _Bool _hasAppeared;
    IESLiveRoomSegue *_segue;
    HTSLiveAudienceStore *_store;
    id <HTSLiveAudienceViewControllerDelegate> _delegate;
    CDUnknownBlockType _afterLaunch;
    CDUnknownBlockType _afterDidLoad;
    HTSEventContext *_pageContext;
    IESLiveBackStore *_preStore;
    id <IESLiveDI> _roomDI;
    HTSEventContext *_streamContext;
    double _enterRoomTime;
    HTSLive4LayerContainerView *_containerView;
    UIImageView *_mediaCoverView;
    NSMutableDictionary *_observerDict;
    IESLiveNewPlayerFactory *_playerFactory;
    HTSLiveStreamPlayer *_streamPlayer;
    IESLiveVideoPlayer *_videoPlayer;
    id <HTSLiveAudienceActions> _audienceActionCreator;
    id <HTSLiveAppLifeCycleActions> _appLifeCycleActionCreator;
    HTSLiveMessageActionCreator *_messageActionCreator;
    HTSLiveDetailRouterImpl *_router;
    HTSLivePluginLayoutMachine *_pluginLayoutMachine;
    id <IESLiveSettings> _settings;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveMonitor> _monitor;
    id <IESLiveEnvironment> _target;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveFinishViewFactory> _finishControllerFactory;
    id <IESLiveAudienceRoomAwareness> _audienceAwareness;
    id <IESLiveBackTipRouter> _backRouter;
    id <IESLivePushService> _pushService;
    id <IESLiveReference> _reference;
    UIView *_snapshotView;
    IESLiveComponentLoader *_componentLoader;
    long long _originalStyle;
    id <IESLiveLearningService> _learningInfo;
    id <IESLiveCustomObserver> _customObserver;
    struct UIEdgeInsets _screenEdgeInsets;
}

@property(retain, nonatomic) id <IESLiveCustomObserver> customObserver; // @synthesize customObserver=_customObserver;
@property(retain, nonatomic) id <IESLiveLearningService> learningInfo; // @synthesize learningInfo=_learningInfo;
@property(nonatomic) long long originalStyle; // @synthesize originalStyle=_originalStyle;
@property(retain, nonatomic) IESLiveComponentLoader *componentLoader; // @synthesize componentLoader=_componentLoader;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool didLivePlaySuccess; // @synthesize didLivePlaySuccess=_didLivePlaySuccess;
@property(nonatomic) _Bool didEnterRoomSuccess; // @synthesize didEnterRoomSuccess=_didEnterRoomSuccess;
@property(nonatomic) _Bool didMonitorEnterRoomFull; // @synthesize didMonitorEnterRoomFull=_didMonitorEnterRoomFull;
@property(nonatomic) _Bool didMonitorEnterRoom; // @synthesize didMonitorEnterRoom=_didMonitorEnterRoom;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) id <IESLiveReference> reference; // @synthesize reference=_reference;
@property(retain, nonatomic) id <IESLivePushService> pushService; // @synthesize pushService=_pushService;
@property(retain, nonatomic) id <IESLiveBackTipRouter> backRouter; // @synthesize backRouter=_backRouter;
@property(retain, nonatomic) id <IESLiveAudienceRoomAwareness> audienceAwareness; // @synthesize audienceAwareness=_audienceAwareness;
@property(retain, nonatomic) id <IESLiveFinishViewFactory> finishControllerFactory; // @synthesize finishControllerFactory=_finishControllerFactory;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveEnvironment> target; // @synthesize target=_target;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) HTSLivePluginLayoutMachine *pluginLayoutMachine; // @synthesize pluginLayoutMachine=_pluginLayoutMachine;
@property(retain, nonatomic) HTSLiveDetailRouterImpl *router; // @synthesize router=_router;
@property(retain, nonatomic) HTSLiveMessageActionCreator *messageActionCreator; // @synthesize messageActionCreator=_messageActionCreator;
@property(retain, nonatomic) id <HTSLiveAppLifeCycleActions> appLifeCycleActionCreator; // @synthesize appLifeCycleActionCreator=_appLifeCycleActionCreator;
@property(retain, nonatomic) id <HTSLiveAudienceActions> audienceActionCreator; // @synthesize audienceActionCreator=_audienceActionCreator;
@property(nonatomic) _Bool closeActionEnable; // @synthesize closeActionEnable=_closeActionEnable;
@property(retain, nonatomic) IESLiveVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) HTSLiveStreamPlayer *streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) IESLiveNewPlayerFactory *playerFactory; // @synthesize playerFactory=_playerFactory;
@property(nonatomic) struct UIEdgeInsets screenEdgeInsets; // @synthesize screenEdgeInsets=_screenEdgeInsets;
@property(nonatomic) _Bool clickedClose; // @synthesize clickedClose=_clickedClose;
@property(nonatomic) _Bool canPause; // @synthesize canPause=_canPause;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSMutableDictionary *observerDict; // @synthesize observerDict=_observerDict;
@property(retain, nonatomic) UIImageView *mediaCoverView; // @synthesize mediaCoverView=_mediaCoverView;
@property(nonatomic) __weak HTSLive4LayerContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double enterRoomTime; // @synthesize enterRoomTime=_enterRoomTime;
@property(retain, nonatomic) HTSEventContext *streamContext; // @synthesize streamContext=_streamContext;
@property(retain, nonatomic) id <IESLiveDI> roomDI; // @synthesize roomDI=_roomDI;
@property(retain, nonatomic) IESLiveBackStore *preStore; // @synthesize preStore=_preStore;
@property(retain, nonatomic) HTSEventContext *pageContext; // @synthesize pageContext=_pageContext;
@property(copy, nonatomic) CDUnknownBlockType afterDidLoad; // @synthesize afterDidLoad=_afterDidLoad;
@property(copy, nonatomic) CDUnknownBlockType afterLaunch; // @synthesize afterLaunch=_afterLaunch;
@property(nonatomic) __weak id <HTSLiveAudienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HTSLiveAudienceStore *store; // @synthesize store=_store;
@property(retain, nonatomic) IESLiveRoomSegue *segue; // @synthesize segue=_segue;
- (void).cxx_destruct;
- (id)enterRoomTypeString;
- (void)trackerLiveLeave;
- (void)trackerLivePlayIfNeeds;
- (void)trackerSlideLoadingTime:(id)arg1;
- (_Bool)isXiguaGameMediaRoom;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)__unwindToRoom:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)clickCloseButton:(id)arg1;
- (void)clearEventContextInfo;
- (void)enableCloseAction;
- (void)showFinishViewController:(id)arg1;
- (void)didCloseRoomWithType:(unsigned long long)arg1;
- (void)closeRoomWithType:(unsigned long long)arg1;
- (void)prepareForClose;
- (_Bool)askForForceClose;
- (_Bool)askForClose;
- (void)startPlayIfNeeded;
- (void)pauseRoom;
- (void)_roomWillTerminate:(id)arg1;
- (void)_roomDidBecomeActive:(id)arg1;
- (void)_roomDidEnterBackground:(id)arg1;
- (void)_roomWillEnterForeground:(id)arg1;
- (void)videoPlayerDidLoadFirstFrame:(id)arg1;
- (void)trackFirstFrameFail:(id)arg1;
- (void)trackStreamFirstFrameDuration;
- (void)streamPlayerFirstFrameTrack;
- (void)streamPlayer:(id)arg1 didReceiveError:(id)arg2;
- (void)streamPlayerDidReadyToRender:(id)arg1;
- (void)reportEnterRoomFullDuration;
- (void)reportORIGEnterRoom;
- (void)loadVideoPlayer;
- (void)didClickCloseButton;
- (void)closeButtonAction;
- (id)player;
- (id)liveRootViewController;
- (_Bool)pushBack;
- (void)didForceUpdateToOrientation:(long long)arg1;
- (void)enterRoomSucceed;
- (void)enterRoomFailed;
- (id)beenKickedOut;
- (void)enterRoomBeenKickedOut;
- (void)enterRoomPaused;
- (void)enterRoomSelfOnRecord;
- (void)reloadRoomInfo;
- (void)handleCloseWithReason:(unsigned long long)arg1;
- (void)addAudienceStoreObservers;
- (void)removeObservers;
- (void)addObservers;
- (void)_notifyViewDisappear;
- (void)_notifyViewWillDisappear;
- (void)_notifyViewDidAppear;
- (void)_notifyViewWillAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addAppearTracker;
- (id)topViewController;
- (void)addIdleTimerDisableObserver;
- (void)addBackGesture;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)hideMediaCoverView;
- (void)showMediaCoverViewIfNeeded;
- (void)addMediaCoverView;
- (void)loadIdleComponentsIfNeeded;
- (void)loadOtherUIAsync;
- (void)loadRouter;
- (void)loadMessageClient;
- (void)cancelLoadComponents;
- (void)preloadWithRoom:(id)arg1 eventContext:(id)arg2;
- (void)loadNewInstance;
- (void)removeSnapView;
- (void)becomeNewInstanceByReplaceStore:(id)arg1 context:(id)arg2;
- (void)clearEnterRoomStatus;
- (void)prepareForReuse;
- (void)prepareForBack;
- (void)commonInit;
- (void)getPerformace;
- (void)trackEnterVCSuccess;
- (void)viewDidLoad;
- (id)initWithStore:(id)arg1 player:(id)arg2 context:(id)arg3 componentContext:(id)arg4;
- (id)getSnapshotView;
- (void)dealloc;
@property(retain, nonatomic) IESLiveMonitorContext *monitorContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
