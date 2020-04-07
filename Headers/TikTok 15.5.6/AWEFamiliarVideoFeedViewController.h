//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoFeedViewController.h"

#import "AWEFamiliarViewControllerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEViewControllerRefreshable-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEFamiliarDataController, AWEFamiliarNavView, AWEUITextLoadingView, NSString;

@interface AWEFamiliarVideoFeedViewController : AWEVideoFeedViewController <BTDRouterViewControllerProtocol, AWEViewControllerRefreshable, AWEUserMessage, AWEFamiliarViewControllerProtocol>
{
    _Bool _isTapTabRefreshStatus;
    _Bool _isEmptyStatus;
    _Bool _hasInitialFetched;
    _Bool _isNavStick;
    _Bool _isFingerDragging;
    _Bool _isUsingFingerScrolling;
    _Bool _isTabDisappeared;
    _Bool _shouldPreventTrackStayTime;
    _Bool _shouldPreventStartStayTime;
    NSString *_refreshMethod;
    AWEFamiliarDataController *_familiarDataController;
    AWEUITextLoadingView *_loadingView;
    AWEFamiliarNavView *_navView;
    double _navCenterPosY;
    double _scrollStartPosY;
}

+ (void)load;
@property(nonatomic) _Bool shouldPreventStartStayTime; // @synthesize shouldPreventStartStayTime=_shouldPreventStartStayTime;
@property(nonatomic) _Bool shouldPreventTrackStayTime; // @synthesize shouldPreventTrackStayTime=_shouldPreventTrackStayTime;
@property(nonatomic) _Bool isTabDisappeared; // @synthesize isTabDisappeared=_isTabDisappeared;
@property(nonatomic) _Bool isUsingFingerScrolling; // @synthesize isUsingFingerScrolling=_isUsingFingerScrolling;
@property(nonatomic) _Bool isFingerDragging; // @synthesize isFingerDragging=_isFingerDragging;
@property(nonatomic) _Bool isNavStick; // @synthesize isNavStick=_isNavStick;
@property(nonatomic) double scrollStartPosY; // @synthesize scrollStartPosY=_scrollStartPosY;
@property(nonatomic) double navCenterPosY; // @synthesize navCenterPosY=_navCenterPosY;
@property(retain, nonatomic) AWEFamiliarNavView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) AWEUITextLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEFamiliarDataController *familiarDataController; // @synthesize familiarDataController=_familiarDataController;
@property(nonatomic) _Bool hasInitialFetched; // @synthesize hasInitialFetched=_hasInitialFetched;
@property(nonatomic) _Bool isEmptyStatus; // @synthesize isEmptyStatus=_isEmptyStatus;
@property(copy, nonatomic) NSString *refreshMethod; // @synthesize refreshMethod=_refreshMethod;
@property(nonatomic) _Bool isTapTabRefreshStatus; // @synthesize isTapTabRefreshStatus=_isTapTabRefreshStatus;
- (void).cxx_destruct;
- (void)enterFindFriend;
- (void)enterPrivacyDetail;
- (void)updateUserStatusWithBlock:(CDUnknownBlockType)arg1 isAlias:(_Bool)arg2 userID:(id)arg3;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)p_track2TabAppear;
- (void)_trackStayTime;
- (void)_startStayTime;
- (void)trackPageRefreshResult:(_Bool)arg1 method:(id)arg2;
- (void)trackPageRefreshMethod:(id)arg1;
- (id)dataController;
- (id)referString;
- (long long)displayItemSectionInAwemes:(long long)arg1;
- (long long)awemeIndexInDisplayItems:(long long)arg1;
- (double)videoFeedTopMargin;
- (_Bool)isSingleTapEnterDetail;
- (void)handleWillShowFullScreenVideoFeed;
- (void)trackStayTimeFromTransitioin;
- (void)startStayTimeFromTransitioin;
- (void)didEndShowing;
- (void)didStarShowing;
- (void)setNavViewAlpha:(double)arg1;
- (void)resetNavView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)reloadDataSourceWithEmptyHintWithError:(id)arg1;
- (void)_onReloadDataSourceWithEmptyHintWithError:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (_Bool)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWhenYellowDotShowingWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollToTopRefresh:(CDUnknownBlockType)arg1;
- (_Bool)shouldTopRefresh;
- (void)topTabRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onRefreshDataWithError:(id)arg1;
- (void)_refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshDataList;
- (void)initialFetch;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showSuccessShareVideoNoticeBar:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)receiveDislikeNotification:(id)arg1;
- (void)tabBarDidChangeNotification:(id)arg1;
- (void)didChangedLanguage;
- (void)configNotifications;
- (void)resetFooter;
- (void)dealWithYellowDot;
- (void)p_trackPushIfNeed;
- (void)configUI;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
