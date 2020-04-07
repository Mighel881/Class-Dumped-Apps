//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMotionGuideRegistry-Protocol.h"
#import "IESLiveRoomInnerFeedContainerService-Protocol.h"

@class HTSEventContext, NSMutableArray, NSNumber, NSString;
@protocol HTSKVStore, HTSLiveRoomCollectionDataObserver, IESLiveEnvironment, IESLiveHTTPClient, IESLiveMotionGuideCoordinator, IESLiveTracker;

@interface IESLiveRoomInnerFeedContainerStore : NSObject <IESLiveMotionGuideRegistry, IESLiveRoomInnerFeedContainerService>
{
    _Bool _hasMoreRoom;
    _Bool _alreadyRequest;
    _Bool _enableScroll;
    id <HTSLiveRoomCollectionDataObserver> dataObserver;
    id <IESLiveEnvironment> _target;
    id <IESLiveHTTPClient> _client;
    id <HTSKVStore> _kvStore;
    id <IESLiveTracker> _tracker;
    id <IESLiveMotionGuideCoordinator> _guideCoordinator;
    NSMutableArray *_roomList;
    NSNumber *_maxTime;
    NSString *_requestFrom;
    NSString *_innerFeedURL;
    HTSEventContext *_eventContext;
    long long _maxReadIndex;
    long long _loadMoreFirstIndex;
    NSString *_frontUnreadExtra;
    NSString *_lastUnreadExtra;
}

@property(retain, nonatomic) NSString *lastUnreadExtra; // @synthesize lastUnreadExtra=_lastUnreadExtra;
@property(retain, nonatomic) NSString *frontUnreadExtra; // @synthesize frontUnreadExtra=_frontUnreadExtra;
@property(nonatomic) long long loadMoreFirstIndex; // @synthesize loadMoreFirstIndex=_loadMoreFirstIndex;
@property(nonatomic) long long maxReadIndex; // @synthesize maxReadIndex=_maxReadIndex;
@property(nonatomic) _Bool enableScroll; // @synthesize enableScroll=_enableScroll;
@property(nonatomic) _Bool alreadyRequest; // @synthesize alreadyRequest=_alreadyRequest;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) NSString *innerFeedURL; // @synthesize innerFeedURL=_innerFeedURL;
@property(retain, nonatomic) NSString *requestFrom; // @synthesize requestFrom=_requestFrom;
@property(retain, nonatomic) NSNumber *maxTime; // @synthesize maxTime=_maxTime;
@property(retain, nonatomic) NSMutableArray *roomList; // @synthesize roomList=_roomList;
@property(retain, nonatomic) id <IESLiveMotionGuideCoordinator> guideCoordinator; // @synthesize guideCoordinator=_guideCoordinator;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(retain, nonatomic) id <IESLiveEnvironment> target; // @synthesize target=_target;
@property(nonatomic) _Bool hasMoreRoom; // @synthesize hasMoreRoom=_hasMoreRoom;
@property(nonatomic) __weak id <HTSLiveRoomCollectionDataObserver> dataObserver; // @synthesize dataObserver;
- (void).cxx_destruct;
- (_Bool)alreadyRequestFinish;
- (id)channelName;
- (_Bool)canSwipeRoomLeft;
- (_Bool)canSwipeRoomVertical;
- (_Bool)_enablePostUnreadRoom;
- (void)_clearData;
- (void)_postUnreadRoomList;
- (id)_addRoomList:(id)arg1;
- (void)_praseJsonData:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (id)_getParams:(_Bool)arg1;
- (void)_refresh:(CDUnknownBlockType)arg1;
- (void)_loadMore:(CDUnknownBlockType)arg1;
- (void)storeEnableScroll:(_Bool)arg1;
- (_Bool)deleteRoom:(id)arg1;
- (void)changeToIndex:(unsigned long long)arg1;
- (void)didCloseRoom:(id)arg1;
- (void)loadMore;
- (_Bool)hasMore;
- (_Bool)canLoadMore;
- (void)refresh;
- (_Bool)canRefresh;
- (void)setRoomList:(id)arg1 enterFrom:(id)arg2 innerFeedURL:(id)arg3 maxTime:(id)arg4 unreadExtra:(id)arg5;
- (void)setOriginRoom:(id)arg1 enterFrom:(id)arg2 innerFeedURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
