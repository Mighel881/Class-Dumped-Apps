//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveBlackListActions-Protocol.h"

@class HTSEventContext, HTSLiveUserAPI, IESLiveUserModel, LiveRoomModel, NSMutableArray, NSString, RACDisposable;
@protocol HTSLiveBlackListReactions, IESActionDispatcher, IESLiveTracker, IESLiveUserService;

@interface HTSLiveBlackListStore : NSObject <HTSLiveBlackListActions>
{
    _Bool _isNewStyle;
    NSMutableArray *_dataSource;
    id <HTSLiveBlackListReactions> _reaction;
    LiveRoomModel *_room;
    HTSEventContext *_eventContext;
    IESLiveUserModel *_anchor;
    RACDisposable *_disposable;
    id <IESActionDispatcher> _dispatcher;
    HTSLiveUserAPI *_userApi;
    id <IESLiveUserService> _userService;
    id <IESLiveTracker> _tracker;
}

@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) HTSLiveUserAPI *userApi; // @synthesize userApi=_userApi;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) IESLiveUserModel *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool isNewStyle; // @synthesize isNewStyle=_isNewStyle;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) __weak id <HTSLiveBlackListReactions> reaction; // @synthesize reaction=_reaction;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)unkickOut:(id)arg1;
- (void)removeUserFromBlackList:(unsigned long long)arg1;
- (void)fetchBlackList:(unsigned long long)arg1;
- (void)setup;
- (id)initWithAnchor:(id)arg1 room:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
