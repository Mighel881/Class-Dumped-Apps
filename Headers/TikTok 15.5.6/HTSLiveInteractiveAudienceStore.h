//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSInteractiveControlProtocol-Protocol.h"
#import "HTSLiveAudienceActions-Protocol.h"
#import "HTSLiveCleanScreenActions-Protocol.h"
#import "HTSLiveInteractiveAudienceActions-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLiveRoomRemoteActions-Protocol.h"

@class HTSInteractStreamCanvas, HTSInteractionStreamAppData, HTSLiveInteractiveAPI, HTSLiveInteractivePayOption, HTSLiveInteractivePayOptionItem, HTSLiveInteractiveUserModel, HTSLiveMessageHandler, HTSLiveRoomAPI, IESLiveUserModel, LiveRoomModel, NSArray, NSData, NSNumber, NSString, RACDisposable, TTSignalUser;
@protocol HTSLiveDetailRouter, HTSLiveInteractionEntranceProvider, HTSLiveMessageDispatchProvider, HTSLiveStreamPlayerProvider, IESActionDispatcher, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface HTSLiveInteractiveAudienceStore : NSObject <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber, HTSLiveInteractiveAudienceActions, HTSInteractiveControlProtocol, HTSLiveAudienceActions, HTSLiveCleanScreenActions>
{
    _Bool _isPlayerReloaded;
    _Bool _allowsGifting;
    _Bool _interactiveModeEnabled;
    _Bool _closeBySelf;
    _Bool _isBeMuted;
    _Bool _hasCommerceGoods;
    _Bool _connected;
    _Bool _isFirstFetch;
    HTSLiveInteractiveAPI *_interactiveAPI;
    LiveRoomModel *_room;
    long long _mode;
    NSNumber *_selfFanTicket;
    NSArray *_waitingList;
    NSArray *_activedList;
    HTSLiveInteractiveUserModel *_activeRoomOwner;
    HTSLiveInteractivePayOption *_payOption;
    HTSLiveInteractivePayOptionItem *_selectPayItem;
    NSString *_accessKey;
    NSString *_rtcAppId;
    NSData *_rtcAppSign;
    unsigned long long _currentVendor;
    HTSInteractionStreamAppData *_appData;
    HTSInteractStreamCanvas *_canvasInfo;
    NSNumber *_waitingStartTime;
    NSNumber *_fetchListTimeStamp;
    NSNumber *_fetchTimeStamp;
    NSNumber *_localStart;
    TTSignalUser *_owner;
    TTSignalUser *_me;
    NSString *_channel;
    NSString *_toast;
    long long _linkMicStatus;
    RACDisposable *_disposable;
    HTSLiveMessageHandler *_messageHandler;
    HTSLiveRoomAPI *_roomAPI;
    id <IESActionDispatcher> _dispatcher;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _settings;
    NSNumber *_anchorLinkMicID;
    NSNumber *_myLinkMicID;
    id <HTSLiveStreamPlayerProvider> _streamPlayer;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveMonitor> _monitor;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <HTSLiveDetailRouter> _router;
    double _linkmicStart;
}

@property(nonatomic) _Bool isFirstFetch; // @synthesize isFirstFetch=_isFirstFetch;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) double linkmicStart; // @synthesize linkmicStart=_linkmicStart;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) __weak id <HTSLiveStreamPlayerProvider> streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) NSNumber *myLinkMicID; // @synthesize myLinkMicID=_myLinkMicID;
@property(retain, nonatomic) NSNumber *anchorLinkMicID; // @synthesize anchorLinkMicID=_anchorLinkMicID;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) HTSLiveRoomAPI *roomAPI; // @synthesize roomAPI=_roomAPI;
@property(retain, nonatomic) HTSLiveMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) _Bool hasCommerceGoods; // @synthesize hasCommerceGoods=_hasCommerceGoods;
@property(nonatomic) _Bool isBeMuted; // @synthesize isBeMuted=_isBeMuted;
@property(nonatomic) long long linkMicStatus; // @synthesize linkMicStatus=_linkMicStatus;
@property(copy, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) TTSignalUser *me; // @synthesize me=_me;
@property(retain, nonatomic) TTSignalUser *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool closeBySelf; // @synthesize closeBySelf=_closeBySelf;
@property(retain, nonatomic) NSNumber *localStart; // @synthesize localStart=_localStart;
@property(retain, nonatomic) NSNumber *fetchTimeStamp; // @synthesize fetchTimeStamp=_fetchTimeStamp;
@property(retain, nonatomic) NSNumber *fetchListTimeStamp; // @synthesize fetchListTimeStamp=_fetchListTimeStamp;
@property(retain, nonatomic) NSNumber *waitingStartTime; // @synthesize waitingStartTime=_waitingStartTime;
@property(retain, nonatomic) HTSInteractStreamCanvas *canvasInfo; // @synthesize canvasInfo=_canvasInfo;
@property(retain, nonatomic) HTSInteractionStreamAppData *appData; // @synthesize appData=_appData;
@property(nonatomic) unsigned long long currentVendor; // @synthesize currentVendor=_currentVendor;
@property(copy, nonatomic) NSData *rtcAppSign; // @synthesize rtcAppSign=_rtcAppSign;
@property(copy, nonatomic) NSString *rtcAppId; // @synthesize rtcAppId=_rtcAppId;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(retain, nonatomic) HTSLiveInteractivePayOptionItem *selectPayItem; // @synthesize selectPayItem=_selectPayItem;
@property(retain, nonatomic) HTSLiveInteractivePayOption *payOption; // @synthesize payOption=_payOption;
@property(retain, nonatomic) HTSLiveInteractiveUserModel *activeRoomOwner; // @synthesize activeRoomOwner=_activeRoomOwner;
@property(retain, nonatomic) NSArray *activedList; // @synthesize activedList=_activedList;
@property(retain, nonatomic) NSArray *waitingList; // @synthesize waitingList=_waitingList;
@property(retain, nonatomic) NSNumber *selfFanTicket; // @synthesize selfFanTicket=_selfFanTicket;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool interactiveModeEnabled; // @synthesize interactiveModeEnabled=_interactiveModeEnabled;
@property(readonly, nonatomic) _Bool allowsGifting; // @synthesize allowsGifting=_allowsGifting;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI; // @synthesize interactiveAPI=_interactiveAPI;
- (void).cxx_destruct;
- (_Bool)enableOptimize;
- (_Bool)useNewMultiAudioStyle;
- (id)typeString:(long long)arg1;
- (void)clean;
- (void)updateRoomInfo;
- (void)classifyInterativeListWith:(id)arg1;
- (void)onMetaInfoReceived:(id)arg1;
- (void)switchCleanScreenMode:(long long)arg1;
- (void)liveWillEnd;
- (void)didUpdateRoom:(id)arg1;
- (void)registerMessageHandlers;
- (void)messageReceived:(id)arg1;
- (void)onNetworkStatusChange:(long long)arg1;
- (void)trackWithEvent:(id)arg1 extra:(id)arg2;
- (void)commerceGoodsDidShow:(_Bool)arg1;
- (void)unMuteGuest:(id)arg1;
- (void)muteGuest:(id)arg1;
- (void)didSelectPayItem:(id)arg1;
- (id)getGuestContributors:(id)arg1;
- (void)stopConnection;
- (void)cancelApplication;
- (void)applyConnectionInMode:(long long)arg1;
- (void)onInteractiveGuestUnMuteWith:(id)arg1;
- (void)onInteractiveGuestMuteWith:(id)arg1;
- (void)onGuestContributorsChangeWith:(id)arg1;
- (void)onAudienceFanTicketChangedWith:(id)arg1;
- (void)onInteractiveListChanged;
- (void)onInteractiveActivedListChanged;
- (void)onInteractiveWaitingListChanged;
- (void)onInteractiveKilled;
- (void)onInteractiveAccepted:(id)arg1 accessKey:(id)arg2 rtcAppId:(id)arg3 rtcAppSign:(id)arg4;
- (void)onInteractiveModeStopped;
- (void)onInteractiveModeStartedWithTimeStamp:(id)arg1;
- (void)endInteractWaiting;
- (void)joinChannel;
- (id)checkPermission;
- (void)removeSelfFromActiveList;
- (void)removeSelfFromWaitingList;
- (void)loadInteractiveList;
@property(readonly, nonatomic) IESLiveUserModel *currentUser;
- (_Bool)hasActivedSession;
- (void)setdown;
- (void)setup;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
