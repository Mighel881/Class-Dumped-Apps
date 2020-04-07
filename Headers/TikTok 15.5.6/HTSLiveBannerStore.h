//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveBannerActions-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"

@class HTSEventContext, IESLiveBannerApi, IESLiveBannerListModel, LiveRoomModel, NSArray, NSDictionary, NSString, RACDisposable;
@protocol HTSLiveBannerReactions, HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveEnvironment, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface HTSLiveBannerStore : NSObject <HTSLiveBannerActions, HTSLiveMessageSubscriber>
{
    _Bool _isAnchor;
    _Bool _enablePackupActivityBanner;
    _Bool _didReserveChijiMatch;
    id <HTSLiveBannerReactions> _reactions;
    LiveRoomModel *_room;
    NSArray *_giftPanelBanners;
    IESLiveBannerListModel *_bottomRightBanner;
    unsigned long long _bannerType;
    HTSEventContext *_trackContext;
    IESLiveBannerApi *_api;
    id <IESActionDispatcher> _dispatcher;
    RACDisposable *_disposable;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _liveSettings;
    id <IESLiveEnvironment> _appTarget;
    NSDictionary *_bannerTrackerParams;
}

@property(copy, nonatomic) NSDictionary *bannerTrackerParams; // @synthesize bannerTrackerParams=_bannerTrackerParams;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) IESLiveBannerApi *api; // @synthesize api=_api;
@property(nonatomic) _Bool didReserveChijiMatch; // @synthesize didReserveChijiMatch=_didReserveChijiMatch;
@property(nonatomic) _Bool enablePackupActivityBanner; // @synthesize enablePackupActivityBanner=_enablePackupActivityBanner;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) IESLiveBannerListModel *bottomRightBanner; // @synthesize bottomRightBanner=_bottomRightBanner;
@property(retain, nonatomic) NSArray *giftPanelBanners; // @synthesize giftPanelBanners=_giftPanelBanners;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) __weak id <HTSLiveBannerReactions> reactions; // @synthesize reactions=_reactions;
- (void).cxx_destruct;
- (_Bool)_enablePackupBanner;
- (void)messageReceived:(id)arg1;
- (void)reserveChijiMatch:(_Bool)arg1;
- (void)notifyAutoMatchResult:(_Bool)arg1;
- (void)fetchBanner;
- (void)bannerLoadingSuccess:(id)arg1;
@property(readonly, nonatomic) struct CGSize currentSize;
- (void)setup;
- (id)initWithRoom:(id)arg1 api:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
