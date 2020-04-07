//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveMessageListActions-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLiveRoomRemoteActions-Protocol.h"
#import "IESLiveHTTPMessageActions-Protocol.h"

@class HTSEventContext, HTSLiveMessageListFilter, HTSLiveMessageListNode, HTSLiveMessageListNodeFactory, HTSLiveMessageListNodeFactoryNew, HTSLiveMessageListThread, IESLiveComponentContext, LiveRoomModel, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, RACDisposable;
@protocol HTSKVStore, HTSLiveMessageDispatchProvider, HTSLiveMessageListReactions, IESActionDispatcher, IESLiveEnvironment, IESLiveSettings, IESLiveTracker, IESLiveUserService, OS_dispatch_queue, OS_dispatch_source;

@interface HTSLiveMessageListStore : NSObject <HTSLiveMessageListActions, HTSLiveMessageSubscriber, IESLiveHTTPMessageActions, HTSLiveRoomRemoteActions>
{
    _Bool _hideMessageListView;
    _Bool _disableAnimation;
    _Bool _reachLowMemmoryThreshold;
    _Bool _hasNewStickToBottomNode;
    _Bool _hasNewCommonMessageNode;
    _Bool _hasNeedDeleteMessageNode;
    _Bool _updating;
    _Bool _enableUpdateDataSource;
    _Bool _didStopRefresh;
    _Bool _isHotLiveRoom;
    _Bool _enableFoldEnterMessage;
    _Bool _enableUseNewRefreshSpeed;
    _Bool _isFirstBatchMessage;
    _Bool _enableStickMessageToTop;
    id <HTSLiveMessageListReactions> _reactions;
    LiveRoomModel *_room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
    HTSLiveMessageListNode *_stickToBottomNode;
    NSArray *_messages;
    NSArray *_addedIndexPathes;
    NSArray *_exceededIndexPathes;
    long long _unreadMessageCount;
    long long _orientation;
    HTSLiveMessageListFilter *_messageFilter;
    HTSLiveMessageListNodeFactory *_messageNodeFactory;
    HTSLiveMessageListNodeFactoryNew *_fancyMessageNodeFactory;
    RACDisposable *_disposable;
    id <IESActionDispatcher> _dispatcher;
    NSMutableArray *_buffer;
    NSObject<OS_dispatch_source> *_timer;
    double _lastStickToBottomNodeUpdateTime;
    HTSLiveMessageListNode *_lastStickToBottomNode;
    long long _refreshCount;
    NSMutableArray *_penddingDeleteNodes;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _settings;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveEnvironment> _liveEnv;
    long long _scene;
    double _lastRefreshDataSourceTimestamp;
    long long _hotLiveRoomJudgeCount;
    long long _hotLiveRoomCurrentCount;
    NSObject<OS_dispatch_queue> *_messageProcessQueue;
    HTSLiveMessageListThread *_messageProcessThread;
    long long _enterMessageInListCount;
    long long _updateCountForEnterMessage;
    double _lastFoldEnterNodeUpdateTime;
    NSDictionary *_refreshConfigDic;
    NSNumber *_currentUserID;
    NSMutableArray *_currentUserBuffer;
    id <HTSKVStore> _kvStore;
}

@property(nonatomic) _Bool enableStickMessageToTop; // @synthesize enableStickMessageToTop=_enableStickMessageToTop;
@property(nonatomic) _Bool isFirstBatchMessage; // @synthesize isFirstBatchMessage=_isFirstBatchMessage;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) NSMutableArray *currentUserBuffer; // @synthesize currentUserBuffer=_currentUserBuffer;
@property(retain, nonatomic) NSNumber *currentUserID; // @synthesize currentUserID=_currentUserID;
@property(nonatomic) _Bool enableUseNewRefreshSpeed; // @synthesize enableUseNewRefreshSpeed=_enableUseNewRefreshSpeed;
@property(retain, nonatomic) NSDictionary *refreshConfigDic; // @synthesize refreshConfigDic=_refreshConfigDic;
@property(nonatomic) double lastFoldEnterNodeUpdateTime; // @synthesize lastFoldEnterNodeUpdateTime=_lastFoldEnterNodeUpdateTime;
@property(nonatomic) long long updateCountForEnterMessage; // @synthesize updateCountForEnterMessage=_updateCountForEnterMessage;
@property(nonatomic) long long enterMessageInListCount; // @synthesize enterMessageInListCount=_enterMessageInListCount;
@property(nonatomic) _Bool enableFoldEnterMessage; // @synthesize enableFoldEnterMessage=_enableFoldEnterMessage;
@property(retain, nonatomic) HTSLiveMessageListThread *messageProcessThread; // @synthesize messageProcessThread=_messageProcessThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue; // @synthesize messageProcessQueue=_messageProcessQueue;
@property(nonatomic) long long hotLiveRoomCurrentCount; // @synthesize hotLiveRoomCurrentCount=_hotLiveRoomCurrentCount;
@property(nonatomic) long long hotLiveRoomJudgeCount; // @synthesize hotLiveRoomJudgeCount=_hotLiveRoomJudgeCount;
@property(nonatomic) _Bool isHotLiveRoom; // @synthesize isHotLiveRoom=_isHotLiveRoom;
@property(nonatomic) _Bool didStopRefresh; // @synthesize didStopRefresh=_didStopRefresh;
@property(nonatomic) double lastRefreshDataSourceTimestamp; // @synthesize lastRefreshDataSourceTimestamp=_lastRefreshDataSourceTimestamp;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnv; // @synthesize liveEnv=_liveEnv;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSMutableArray *penddingDeleteNodes; // @synthesize penddingDeleteNodes=_penddingDeleteNodes;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(retain, nonatomic) HTSLiveMessageListNode *lastStickToBottomNode; // @synthesize lastStickToBottomNode=_lastStickToBottomNode;
@property(nonatomic) double lastStickToBottomNodeUpdateTime; // @synthesize lastStickToBottomNodeUpdateTime=_lastStickToBottomNodeUpdateTime;
@property(nonatomic) _Bool enableUpdateDataSource; // @synthesize enableUpdateDataSource=_enableUpdateDataSource;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) HTSLiveMessageListNodeFactoryNew *fancyMessageNodeFactory; // @synthesize fancyMessageNodeFactory=_fancyMessageNodeFactory;
@property(retain, nonatomic) HTSLiveMessageListNodeFactory *messageNodeFactory; // @synthesize messageNodeFactory=_messageNodeFactory;
@property(retain, nonatomic) HTSLiveMessageListFilter *messageFilter; // @synthesize messageFilter=_messageFilter;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool hasNeedDeleteMessageNode; // @synthesize hasNeedDeleteMessageNode=_hasNeedDeleteMessageNode;
@property(nonatomic) _Bool hasNewCommonMessageNode; // @synthesize hasNewCommonMessageNode=_hasNewCommonMessageNode;
@property(nonatomic) _Bool hasNewStickToBottomNode; // @synthesize hasNewStickToBottomNode=_hasNewStickToBottomNode;
@property(nonatomic) _Bool reachLowMemmoryThreshold; // @synthesize reachLowMemmoryThreshold=_reachLowMemmoryThreshold;
@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(nonatomic) _Bool hideMessageListView; // @synthesize hideMessageListView=_hideMessageListView;
@property(nonatomic) long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(retain, nonatomic) NSArray *exceededIndexPathes; // @synthesize exceededIndexPathes=_exceededIndexPathes;
@property(retain, nonatomic) NSArray *addedIndexPathes; // @synthesize addedIndexPathes=_addedIndexPathes;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) HTSLiveMessageListNode *stickToBottomNode; // @synthesize stickToBottomNode=_stickToBottomNode;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) __weak id <HTSLiveMessageListReactions> reactions; // @synthesize reactions=_reactions;
- (void).cxx_destruct;
- (_Bool)isMyMessage:(id)arg1;
- (_Bool)isUserSide:(id)arg1;
- (_Bool)enableFansClubMessageFold:(id)arg1;
- (_Bool)enableShareMessageFold:(id)arg1;
- (_Bool)enableFollowMessageFold:(id)arg1;
- (_Bool)enableGiftMessageFold:(id)arg1;
- (_Bool)isSpecialNode:(id)arg1;
- (_Bool)p_isCurrentUser:(id)arg1;
- (double)p_refreshNewMessageTime;
- (double)p_refreshMinumInterval;
- (long long)p_refreshNewMessageMaxCount;
- (_Bool)p_enableUseNewRefreshSpeed;
- (_Bool)p_enableUseCurrentBuffer:(id)arg1;
- (_Bool)_enableFoldBy:(long long)arg1;
- (_Bool)_disableFoldByNodeFoldType:(id)arg1;
- (void)startUniqueThread;
- (void)didBecomeHotLiveRoom:(_Bool)arg1;
- (void)checkIfDisableCommentWithRoom:(id)arg1;
- (void)didEnterLiveRoom:(id)arg1;
- (void)didUpdateRoom:(id)arg1;
- (void)beautyPanelShow:(_Bool)arg1;
- (void)onShowLiveCommentKeyBoard:(_Bool)arg1;
- (void)clearMessageList;
- (void)startRefreshMessageList;
- (void)stopRefreshMessageList;
- (_Bool)isNobleEnterNode:(id)arg1;
- (void)disableAnimationIfNeeded;
- (void)checkMemoryUsageIfNeeded;
- (void)deleteNodes:(id)arg1;
- (void)updateMessageListIfNeed;
@property(readonly, nonatomic) double currentListWidth;
- (double)designatedMessageListWidth;
- (void)reloadMessages:(CDUnknownBlockType)arg1;
- (void)setupTimer;
- (void)nativeGiftEndWith:(id)arg1;
- (void)removeMessageListNode:(id)arg1;
- (void)changeOrientation:(long long)arg1;
- (void)removeMessageListNodes:(id)arg1;
- (void)dispatchMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableUpdateDataSource:(_Bool)arg1;
- (void)disableUpdate;
- (void)enableUpdate;
- (void)setupTopGradient;
- (void)resetMessageListWidth;
- (void)updateMessageListWidth:(double)arg1;
- (void)clearUnreadCount;
- (void)tapUnreadView;
- (void)refreshMessageDataSourceForSpecialScene;
- (void)refreshMessageDataSource;
- (_Bool)didFirstMessageOverTime;
- (void)recordCurrentTime;
- (void)update;
- (void)_stickNewNodeToBottom:(id)arg1 currentTime:(double)arg2;
- (void)updateStickToBottomMessage:(id)arg1;
- (void)successCreatedNode:(id)arg1;
- (_Bool)isForceLocalLogicEnabled;
- (void)handleDeleteMessage:(id)arg1;
- (void)filterMessage:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)setup;
- (id)initWith:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
