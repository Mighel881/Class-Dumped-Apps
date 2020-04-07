//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSActiveUserListFragmentDelegate-Protocol.h"
#import "HTSLiveAudienceInteractivePanelDelegate-Protocol.h"
#import "HTSLiveInteractionInstance-Protocol.h"
#import "HTSLiveInteractiveAudienceRequestDelegate-Protocol.h"
#import "HTSLiveLinkmicMediaDelegate-Protocol.h"

@class HTSEventContext, HTSFakedActiveUserListFragment, HTSLiveAudienceInteractivePanel, HTSLiveInteractiveAudienceRequestNavigation, HTSLiveInteractiveAudienceStore, HTSLiveInteractiveContributorsView, HTSLiveLinkmicMediaService, HTSLiveSmallAudienceRequestView, IESLiveMultiAudioAudienceCustomItemView, NSString, NSTimer, UIView;
@protocol HTSLiveCameraEffectProvider, HTSLiveDetailRouter, HTSLiveDiggAction, HTSLiveInteractionStatusDelegate, HTSLiveInteractiveAudienceActions, HTSLiveMessageListActions, HTSLivePluginLayoutMachineProvider, HTSLiveStreamPlayerProvider, HTSLiveToolbarProvider, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveAuthorizationService, IESLiveEnvironment, IESLiveGiftModule, IESLiveMTSwipeUpGuideCoordinator, IESLiveRealStreamingProvider, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveURLSchemaHandler, IESLiveUserService, IESLiveVerifyConfig;

@interface HTSInteractiveAudienceController : UIViewController <HTSLiveAudienceInteractivePanelDelegate, HTSActiveUserListFragmentDelegate, HTSLiveLinkmicMediaDelegate, HTSLiveInteractiveAudienceRequestDelegate, HTSLiveInteractionInstance>
{
    _Bool _hasReloadPlayer;
    id <HTSLiveInteractionStatusDelegate> statusDelegate;
    HTSEventContext *_trackContext;
    id <HTSLiveInteractiveAudienceActions> _dispatcher;
    id <HTSLiveDiggAction> _diggDispatcher;
    id <HTSLiveMessageListActions> _messageListActionCreator;
    id <IESLiveGiftModule> _giftModule;
    UIView *_waitAndApplyContainer;
    HTSLiveInteractiveAudienceStore *_store;
    HTSLiveLinkmicMediaService *_mediaService;
    HTSFakedActiveUserListFragment *_fakedSessionListFragment;
    HTSLiveAudienceInteractivePanel *_audiencePanel;
    HTSLiveInteractiveContributorsView *_guestContributorsView;
    IESLiveMultiAudioAudienceCustomItemView *_itemView;
    NSTimer *_aliveTimer;
    double _connectionStartTime;
    HTSLiveInteractiveAudienceRequestNavigation *_audienceRequestNavi;
    HTSLiveSmallAudienceRequestView *_smallAudienceRequestView;
    id <HTSLiveStreamPlayerProvider> _streamPlayer;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveVerifyConfig> _verifyConfig;
    id <HTSLiveDetailRouter> _router;
    id <HTSLiveViewHierarchyProvider> _hierarchyProvider;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveRealStreamingProvider> _streamProvider;
    id <HTSLiveCameraEffectProvider> _effectProvider;
    id <IESLiveURLSchemaHandler> _schemaURLHandler;
    id <IESLiveAuthorizationService> _authorizationService;
    id <IESLiveMTSwipeUpGuideCoordinator> _mtSwipeUpGuideService;
}

@property(retain, nonatomic) id <IESLiveMTSwipeUpGuideCoordinator> mtSwipeUpGuideService; // @synthesize mtSwipeUpGuideService=_mtSwipeUpGuideService;
@property(retain, nonatomic) id <IESLiveAuthorizationService> authorizationService; // @synthesize authorizationService=_authorizationService;
@property(retain, nonatomic) id <IESLiveURLSchemaHandler> schemaURLHandler; // @synthesize schemaURLHandler=_schemaURLHandler;
@property(retain, nonatomic) id <HTSLiveCameraEffectProvider> effectProvider; // @synthesize effectProvider=_effectProvider;
@property(retain, nonatomic) id <IESLiveRealStreamingProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> hierarchyProvider; // @synthesize hierarchyProvider=_hierarchyProvider;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveVerifyConfig> verifyConfig; // @synthesize verifyConfig=_verifyConfig;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) __weak id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) __weak id <HTSLiveStreamPlayerProvider> streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) HTSLiveSmallAudienceRequestView *smallAudienceRequestView; // @synthesize smallAudienceRequestView=_smallAudienceRequestView;
@property(retain, nonatomic) HTSLiveInteractiveAudienceRequestNavigation *audienceRequestNavi; // @synthesize audienceRequestNavi=_audienceRequestNavi;
@property(nonatomic) double connectionStartTime; // @synthesize connectionStartTime=_connectionStartTime;
@property(retain, nonatomic) NSTimer *aliveTimer; // @synthesize aliveTimer=_aliveTimer;
@property(retain, nonatomic) IESLiveMultiAudioAudienceCustomItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) HTSLiveInteractiveContributorsView *guestContributorsView; // @synthesize guestContributorsView=_guestContributorsView;
@property(retain, nonatomic) HTSLiveAudienceInteractivePanel *audiencePanel; // @synthesize audiencePanel=_audiencePanel;
@property(retain, nonatomic) HTSFakedActiveUserListFragment *fakedSessionListFragment; // @synthesize fakedSessionListFragment=_fakedSessionListFragment;
@property(retain, nonatomic) HTSLiveLinkmicMediaService *mediaService; // @synthesize mediaService=_mediaService;
@property(retain, nonatomic) HTSLiveInteractiveAudienceStore *store; // @synthesize store=_store;
@property(nonatomic) __weak UIView *waitAndApplyContainer; // @synthesize waitAndApplyContainer=_waitAndApplyContainer;
@property(retain, nonatomic) id <IESLiveGiftModule> giftModule; // @synthesize giftModule=_giftModule;
@property(retain, nonatomic) id <HTSLiveMessageListActions> messageListActionCreator; // @synthesize messageListActionCreator=_messageListActionCreator;
@property(nonatomic) __weak id <HTSLiveDiggAction> diggDispatcher; // @synthesize diggDispatcher=_diggDispatcher;
@property(retain, nonatomic) id <HTSLiveInteractiveAudienceActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(nonatomic) __weak id <HTSLiveInteractionStatusDelegate> statusDelegate; // @synthesize statusDelegate;
- (void).cxx_destruct;
- (void)onShowBindMobileAlert;
- (void)onShowUnderAgeAlert;
- (void)trackWithEvent:(id)arg1 extra:(id)arg2;
- (void)trackWithEvent:(id)arg1;
- (_Bool)useNewMultiVideoStyle;
- (void)p_trackConnectionOver;
- (id)ultimateFanTicket;
- (_Bool)canLeave;
- (void)startWithTimeStamp:(id)arg1;
- (void)pr_updateMessageListWidth:(double)arg1;
- (void)showGuestContributorsListView;
- (void)removeInteractiveItem;
- (void)addNewInteractiveItem;
- (void)loadInteractiveItem;
- (_Bool)enableInteractiveItem;
- (void)checkMediaPermission;
- (void)showUserPreView:(id)arg1 trackerLabel:(id)arg2;
- (void)hideWaitAndApplyContainer;
- (void)loadAudiencePanel;
- (void)clearSmallRequestView;
- (void)needIdentityAuthentication;
- (void)doApplyProcess;
- (void)doPreApply;
- (void)showTeenAlert;
- (void)didClickStatusButton;
- (void)loadWaitAndApplyContainer;
- (struct CGRect)frameOfWaitingAndApplyButton;
- (void)layoutWaitingAndApplyButton;
- (void)audienceRequestDidFinish;
- (void)mediaService:(id)arg1 UserOffline:(unsigned long long)arg2;
- (void)mediaServiceAudioVolumeChanged:(id)arg1 volumeInfo:(id)arg2;
- (void)mediaServiceUserFrameHasAccur:(id)arg1;
- (void)mediaService:(id)arg1 joinChannelFailed:(id)arg2;
- (void)linkmicDidEnd:(id)arg1;
- (void)linkmicWillEnd:(id)arg1;
- (void)linkmicDidStart:(id)arg1;
- (void)fragment:(id)arg1 configSessionView:(id)arg2;
- (id)activedUserListInFragment:(id)arg1;
- (void)fragmentRequestsLayout:(id)arg1 animated:(_Bool)arg2;
- (void)updateContributeListOfUser:(id)arg1;
- (void)fragment:(id)arg1 didClickUserView:(id)arg2;
- (void)panelDisconnectButtonClicked:(id)arg1;
- (void)panelConnectButtonClicked:(id)arg1;
- (void)panel:(id)arg1 userPicked:(id)arg2;
- (void)updateGuestContributorsListView:(id)arg1;
- (void)showControlSheet;
- (void)showAudiencePanel;
- (void)showLoginPanel;
- (void)showBeautyLevelView;
- (void)showModeSelecter;
- (void)showToast:(id)arg1;
- (void)stopInteractiveConnectionWithAlert:(_Bool)arg1;
- (void)startInteractiveConnection:(id)arg1 appID:(id)arg2 zegoAppKey:(id)arg3 vendor:(unsigned long long)arg4;
- (void)relayoutActiveListView;
- (void)updateActiveListView;
- (void)updateWaitingListView;
- (void)resumeLayout;
- (void)updateLayoutOnInteraction;
- (void)stopInteractiveMode;
- (void)startInteractiveMode;
- (void)permissionChecked;
- (void)authenticationNofity:(id)arg1;
- (void)stopAndQuit;
- (void)askForStopConnectionAction:(CDUnknownBlockType)arg1;
- (void)showToastWhenInterationEndedOnisSelfDisconnect:(_Bool)arg1;
- (void)showAlertWhenInteractionEndedWith:(id)arg1 isSelfDisconnect:(_Bool)arg2;
- (void)startAliveTimer;
- (void)stopAliveTimer;
- (id)createSDKConfig;
- (void)bindStore:(id)arg1;
- (void)changeWaitStatus;
- (void)loadMediaService;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRoomModel:(id)arg1;
- (void)dealloc;
- (void)showNoMediaPermissionAlert:(id)arg1 settingUrl:(id)arg2;
- (void)checkAudioPermission:(CDUnknownBlockType)arg1;
- (void)checkVideoPermission:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
