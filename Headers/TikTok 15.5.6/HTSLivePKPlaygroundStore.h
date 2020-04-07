//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLinkMicPKControlProtocol-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLivePKPlaygroundActions-Protocol.h"

@class HTSLiveLinkMicBattle, HTSLiveLinkMicPKMessageHandler, HTSLiveLinkMicPkStatusEntity, HTSLivePKApi, HTSLivePKContributeEntity, HTSLivePKQualifyingModel, LiveRoomModel, NSString, RACCompoundDisposable, RACSignal, RACSubject;
@protocol HTSLiveDetailRouter, HTSLiveDoubleInteractionContext, HTSLiveInteractionEntranceProvider, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface HTSLivePKPlaygroundStore : NSObject <HTSLinkMicPKControlProtocol, HTSLiveMessageSubscriber, HTSLivePKPlaygroundActions>
{
    _Bool _showQuickStart;
    _Bool _showFinishPKAlert;
    _Bool _showFinishPKTip;
    _Bool _isPKRunning;
    _Bool _didPKStarted;
    _Bool _noPKStarted;
    _Bool _isAnchor;
    _Bool _isOnceMore;
    _Bool _interactionStarted;
    LiveRoomModel *_roomModel;
    HTSLivePKQualifyingModel *_qualifyingModel;
    id <HTSLiveDoubleInteractionContext> _pkContextEntity;
    HTSLiveLinkMicPkStatusEntity *_statusEntity;
    NSString *_pkRuleTipUrl;
    NSString *_toast;
    RACSubject *_punishMsgSignal;
    unsigned long long _role;
    HTSLivePKContributeEntity *_selfContributeEntity;
    HTSLivePKContributeEntity *_otherContributeEntity;
    id <IESActionDispatcher> _dispatcher;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    RACCompoundDisposable *_disposable;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <IESLiveTracker> _tracker;
    id <IESLiveMonitor> _monitor;
    HTSLiveLinkMicPKMessageHandler *_messageHandler;
    HTSLivePKApi *_pkApi;
    RACSubject *_manuallyFinish;
    HTSLiveLinkMicBattle *_pkStartMessage;
    double _pkStartMessageStoreTime;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _settings;
    id <IESLiveEnvironment> _liveEnvironment;
}

@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(nonatomic) double pkStartMessageStoreTime; // @synthesize pkStartMessageStoreTime=_pkStartMessageStoreTime;
@property(retain, nonatomic) HTSLiveLinkMicBattle *pkStartMessage; // @synthesize pkStartMessage=_pkStartMessage;
@property(nonatomic) _Bool interactionStarted; // @synthesize interactionStarted=_interactionStarted;
@property(nonatomic) _Bool isOnceMore; // @synthesize isOnceMore=_isOnceMore;
@property(retain, nonatomic) RACSubject *manuallyFinish; // @synthesize manuallyFinish=_manuallyFinish;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) HTSLivePKApi *pkApi; // @synthesize pkApi=_pkApi;
@property(retain, nonatomic) HTSLiveLinkMicPKMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) HTSLivePKContributeEntity *otherContributeEntity; // @synthesize otherContributeEntity=_otherContributeEntity;
@property(retain, nonatomic) HTSLivePKContributeEntity *selfContributeEntity; // @synthesize selfContributeEntity=_selfContributeEntity;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(nonatomic) _Bool noPKStarted; // @synthesize noPKStarted=_noPKStarted;
@property(nonatomic) _Bool didPKStarted; // @synthesize didPKStarted=_didPKStarted;
@property(nonatomic) _Bool isPKRunning; // @synthesize isPKRunning=_isPKRunning;
@property(retain, nonatomic) RACSubject *punishMsgSignal; // @synthesize punishMsgSignal=_punishMsgSignal;
@property(nonatomic) _Bool showFinishPKTip; // @synthesize showFinishPKTip=_showFinishPKTip;
@property(nonatomic) _Bool showFinishPKAlert; // @synthesize showFinishPKAlert=_showFinishPKAlert;
@property(nonatomic) _Bool showQuickStart; // @synthesize showQuickStart=_showQuickStart;
@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(copy, nonatomic) NSString *pkRuleTipUrl; // @synthesize pkRuleTipUrl=_pkRuleTipUrl;
@property(retain, nonatomic) HTSLiveLinkMicPkStatusEntity *statusEntity; // @synthesize statusEntity=_statusEntity;
@property(nonatomic) __weak id <HTSLiveDoubleInteractionContext> pkContextEntity; // @synthesize pkContextEntity=_pkContextEntity;
@property(nonatomic) __weak HTSLivePKQualifyingModel *qualifyingModel; // @synthesize qualifyingModel=_qualifyingModel;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)monitorEventId:(id)arg1 extra:(id)arg2;
- (void)showFinishPKTipViewIfNeeded;
- (void)loadPKBannerWithChannelId:(id)arg1 battleId:(id)arg2;
- (void)showPKBannerWithMicModel:(id)arg1;
- (void)showPKBannerWithBattleMessage:(id)arg1;
- (void)trackWithEvent:(id)arg1 extra:(id)arg2;
- (void)trackWithEvent:(id)arg1;
- (id)rightUserID;
@property(readonly, nonatomic) _Bool needShowBattleRuleTip;
- (void)udpatePKContributeList:(id)arg1;
- (void)updatePKStatDataWithTimeStamp:(id)arg1;
- (void)openPK;
- (void)startPKWithMessage:(id)arg1;
- (void)onPKPunishMsgReceived:(id)arg1;
- (void)onPKFinished:(id)arg1;
- (void)onReceivePKSetting:(id)arg1;
- (void)onPKModeStart:(id)arg1;
- (void)onPKManuallyFinished:(id)arg1;
- (void)onPKContributorsChanged:(id)arg1;
- (void)onPKQuickStartRejected:(id)arg1;
- (void)onPKRecieveQuickStartRequest:(id)arg1;
- (void)onPKDataChangedWith:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)getFinishCount;
- (void)rejectQuickStart;
- (void)confirmQuickStart;
- (void)askForQuickStart;
- (void)applyOldPunishEffectIfNeeded;
- (void)finishPKManually;
- (void)doFinishProcess;
- (void)finishPK;
- (void)interactionEnded;
- (void)startPKWithTimeStamp:(id)arg1;
- (void)startPK:(unsigned long long)arg1;
@property(readonly, nonatomic) RACSignal *manuallyFinishSignal;
- (void)setup;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
