//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDeletionMessage-Protocol.h"
#import "AWEAwesomeSplashManagerMessage-Protocol.h"
#import "AWEFeedTabItemViewControllerProtocol-Protocol.h"
#import "AWEFeedTableViewControllerProtocol-Protocol.h"
#import "AWEFeedViewControllerSwitchProtocol-Protocol.h"
#import "AWELiveTopViewManagerMessage-Protocol.h"
#import "AWELiveVideoFeedUpdateMessage-Protocol.h"
#import "AWEPublishTaskMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEWebViewLoadTaskMessage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAnimatedButton, AWEAwemeModel, AWEFStorySkylightCatchView, AWEFStoryViewController, AWEFeedAdController, AWEFeedContainerViewController, AWEFeedSkylightLiveView, AWEFeedToastView, AWEFriendSkylightViewController, AWEListDataController, AWEMainConcernLoginView, AWEPublishProgressView, AWEUILoadingView, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, UIImageView, UIPanGestureRecognizer, UIScrollView, UITableView, UITableViewCell, UIView;
@protocol AWEFeedTableViewCellProtocol, AWEFeedTableViewControllerDelegate, AWEFollowEmptyHintViewControllerProtocol, AWELiveSkylightViewControllerProtocol, AWERelationBubbleViewProtocol, AWEWebViewLoadTaskMessage;

@interface AWEFeedTableViewController : UIViewController <AWEUserMessage, AWEAwemeDeletionMessage, UITableViewDelegate, UITableViewDataSource, AWEAwesomeSplashManagerMessage, AWELiveTopViewManagerMessage, AWEPublishTaskMessage, AWEWebViewLoadTaskMessage, AWELiveVideoFeedUpdateMessage, UIGestureRecognizerDelegate, AWEFeedTabItemViewControllerProtocol, AWEFeedViewControllerSwitchProtocol, AWEFeedTableViewControllerProtocol>
{
    _Bool _isSkylightUnfolded;
    _Bool _hasFirstFetched;
    _Bool _isViewAppearing;
    _Bool _pureMode;
    _Bool _scrollEnabled;
    _Bool _needPreFetch;
    _Bool _hasRefreshedFlag;
    _Bool _needRefreshRecommendData;
    _Bool _reuseUnreachedDataForCurrentRefresh;
    _Bool _isFirstTime;
    _Bool _hasShowLastView;
    _Bool _hasShowLastViewForFamiliar;
    _Bool _hasCheckLandingToast;
    _Bool _isScrolling;
    _Bool _hasInsertFeedInterest;
    _Bool _shouldShowLoadingView;
    _Bool _didReceiveAutoPlayNotification;
    _Bool _hadEnterPushAlert;
    _Bool _invalidEnterTrackerInfo;
    _Bool _shouldIgnoreSkylightUnfolded;
    _Bool _isInAlgoFreePeriod;
    _Bool _isHotsoonAuthrizeRelation;
    _Bool _isConcernRefreshing;
    _Bool _storySkylightUnfolded;
    UITableView *_tableView;
    AWEListDataController *_dataController;
    long long _type;
    CDUnknownBlockType _pureModeBlock;
    NSObject<AWEFeedTableViewControllerDelegate> *_delegate;
    CDUnknownBlockType _refreshLiveCountBlock;
    CDUnknownBlockType _skylightStateChangedBlock;
    CDUnknownBlockType _didEndDisplayAwemeModel;
    NSString *_requestMethod;
    NSDictionary *_enterTrackerInfo;
    AWEFeedContainerViewController *_containerViewController;
    AWEFeedAdController *_adController;
    long long _playState;
    long long _currentPlayIndex;
    long long _videoIndex;
    long long _willPlayIndex;
    long long _didEndPlayIndex;
    unsigned long long _maxReachedIndex;
    UIViewController<AWEFollowEmptyHintViewControllerProtocol> *_emptyHintViewController;
    UIScrollView *_emptyScrollView;
    AWEMainConcernLoginView *_loginView;
    AWEPublishProgressView *_progressView;
    double _startTimestamp;
    CDUnknownBlockType _animatedRefreshCompletion;
    NSString *_referString;
    double _feedRequestTime;
    AWEUILoadingView *_loadingView;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_currentCell;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_willDisplayCell;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_willDisplayPreloadedCell;
    AWEAnimatedButton *_cancelAutoPlayButton;
    UIView *_tabbarSnapshotView;
    AWEAwemeModel *_slideToProfileModel;
    double _cellPreloadDelay;
    long long _scheduledPreloadIndex;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_preloadedCell;
    UIView<AWERelationBubbleViewProtocol> *_vcdTopBubble;
    UIViewController<AWELiveSkylightViewControllerProtocol> *_liveSkylightViewController;
    AWEFeedSkylightLiveView *_skylightLiveView;
    UIView *_skylightCatchView;
    UIPanGestureRecognizer *_skylightPanGestureRecognizer;
    UIView *_skylightTabbarView;
    id <AWEWebViewLoadTaskMessage> _loadingWebView;
    AWEFeedToastView *_concernToastView;
    double _lastContentOffset;
    NSMutableArray *_preloadCacheArray;
    NSMutableDictionary *_preloadCacheParam;
    NSDate *_recommendCardShowTime;
    UIImageView *_coverImageView;
    AWEFriendSkylightViewController *_friendSkylightViewController;
    CDUnknownBlockType _showSearchBubbleBlock;
    AWEFStoryViewController *_storyVC;
    UIView *_storySkylightTabbarView;
    AWEFStorySkylightCatchView *_storyCatchView;
    UIPanGestureRecognizer *_storyGestureRecognizer;
    long long _storySkylightLastDisplayTime;
}

+ (id)labelForType:(long long)arg1;
@property(nonatomic) long long storySkylightLastDisplayTime; // @synthesize storySkylightLastDisplayTime=_storySkylightLastDisplayTime;
@property(nonatomic) _Bool storySkylightUnfolded; // @synthesize storySkylightUnfolded=_storySkylightUnfolded;
@property(retain, nonatomic) UIPanGestureRecognizer *storyGestureRecognizer; // @synthesize storyGestureRecognizer=_storyGestureRecognizer;
@property(retain, nonatomic) AWEFStorySkylightCatchView *storyCatchView; // @synthesize storyCatchView=_storyCatchView;
@property(retain, nonatomic) UIView *storySkylightTabbarView; // @synthesize storySkylightTabbarView=_storySkylightTabbarView;
@property(retain, nonatomic) AWEFStoryViewController *storyVC; // @synthesize storyVC=_storyVC;
@property(nonatomic) _Bool isConcernRefreshing; // @synthesize isConcernRefreshing=_isConcernRefreshing;
@property(copy, nonatomic) CDUnknownBlockType showSearchBubbleBlock; // @synthesize showSearchBubbleBlock=_showSearchBubbleBlock;
@property(retain, nonatomic) AWEFriendSkylightViewController *friendSkylightViewController; // @synthesize friendSkylightViewController=_friendSkylightViewController;
@property(nonatomic) _Bool isHotsoonAuthrizeRelation; // @synthesize isHotsoonAuthrizeRelation=_isHotsoonAuthrizeRelation;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool isInAlgoFreePeriod; // @synthesize isInAlgoFreePeriod=_isInAlgoFreePeriod;
@property(retain, nonatomic) NSDate *recommendCardShowTime; // @synthesize recommendCardShowTime=_recommendCardShowTime;
@property(retain, nonatomic) NSMutableDictionary *preloadCacheParam; // @synthesize preloadCacheParam=_preloadCacheParam;
@property(retain, nonatomic) NSMutableArray *preloadCacheArray; // @synthesize preloadCacheArray=_preloadCacheArray;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) AWEFeedToastView *concernToastView; // @synthesize concernToastView=_concernToastView;
@property(retain, nonatomic) id <AWEWebViewLoadTaskMessage> loadingWebView; // @synthesize loadingWebView=_loadingWebView;
@property(nonatomic) _Bool shouldIgnoreSkylightUnfolded; // @synthesize shouldIgnoreSkylightUnfolded=_shouldIgnoreSkylightUnfolded;
@property(nonatomic) _Bool invalidEnterTrackerInfo; // @synthesize invalidEnterTrackerInfo=_invalidEnterTrackerInfo;
@property(retain, nonatomic) UIView *skylightTabbarView; // @synthesize skylightTabbarView=_skylightTabbarView;
@property(retain, nonatomic) UIPanGestureRecognizer *skylightPanGestureRecognizer; // @synthesize skylightPanGestureRecognizer=_skylightPanGestureRecognizer;
@property(retain, nonatomic) UIView *skylightCatchView; // @synthesize skylightCatchView=_skylightCatchView;
@property(retain, nonatomic) AWEFeedSkylightLiveView *skylightLiveView; // @synthesize skylightLiveView=_skylightLiveView;
@property(retain, nonatomic) UIViewController<AWELiveSkylightViewControllerProtocol> *liveSkylightViewController; // @synthesize liveSkylightViewController=_liveSkylightViewController;
@property(retain, nonatomic) UIView<AWERelationBubbleViewProtocol> *vcdTopBubble; // @synthesize vcdTopBubble=_vcdTopBubble;
@property(retain, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *preloadedCell; // @synthesize preloadedCell=_preloadedCell;
@property(nonatomic) long long scheduledPreloadIndex; // @synthesize scheduledPreloadIndex=_scheduledPreloadIndex;
@property(nonatomic) double cellPreloadDelay; // @synthesize cellPreloadDelay=_cellPreloadDelay;
@property(nonatomic) _Bool hadEnterPushAlert; // @synthesize hadEnterPushAlert=_hadEnterPushAlert;
@property(retain, nonatomic) AWEAwemeModel *slideToProfileModel; // @synthesize slideToProfileModel=_slideToProfileModel;
@property(nonatomic) _Bool didReceiveAutoPlayNotification; // @synthesize didReceiveAutoPlayNotification=_didReceiveAutoPlayNotification;
@property(retain, nonatomic) UIView *tabbarSnapshotView; // @synthesize tabbarSnapshotView=_tabbarSnapshotView;
@property(retain, nonatomic) AWEAnimatedButton *cancelAutoPlayButton; // @synthesize cancelAutoPlayButton=_cancelAutoPlayButton;
@property(nonatomic) __weak UITableViewCell<AWEFeedTableViewCellProtocol> *willDisplayPreloadedCell; // @synthesize willDisplayPreloadedCell=_willDisplayPreloadedCell;
@property(nonatomic) __weak UITableViewCell<AWEFeedTableViewCellProtocol> *willDisplayCell; // @synthesize willDisplayCell=_willDisplayCell;
@property(nonatomic) __weak UITableViewCell<AWEFeedTableViewCellProtocol> *currentCell; // @synthesize currentCell=_currentCell;
@property(nonatomic) _Bool shouldShowLoadingView; // @synthesize shouldShowLoadingView=_shouldShowLoadingView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool hasInsertFeedInterest; // @synthesize hasInsertFeedInterest=_hasInsertFeedInterest;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool hasCheckLandingToast; // @synthesize hasCheckLandingToast=_hasCheckLandingToast;
@property(nonatomic) _Bool hasShowLastViewForFamiliar; // @synthesize hasShowLastViewForFamiliar=_hasShowLastViewForFamiliar;
@property(nonatomic) _Bool hasShowLastView; // @synthesize hasShowLastView=_hasShowLastView;
@property(nonatomic) _Bool isFirstTime; // @synthesize isFirstTime=_isFirstTime;
@property(nonatomic) _Bool reuseUnreachedDataForCurrentRefresh; // @synthesize reuseUnreachedDataForCurrentRefresh=_reuseUnreachedDataForCurrentRefresh;
@property(nonatomic) _Bool needRefreshRecommendData; // @synthesize needRefreshRecommendData=_needRefreshRecommendData;
@property(nonatomic) _Bool hasRefreshedFlag; // @synthesize hasRefreshedFlag=_hasRefreshedFlag;
@property(nonatomic) double feedRequestTime; // @synthesize feedRequestTime=_feedRequestTime;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) CDUnknownBlockType animatedRefreshCompletion; // @synthesize animatedRefreshCompletion=_animatedRefreshCompletion;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) AWEPublishProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AWEMainConcernLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UIScrollView *emptyScrollView; // @synthesize emptyScrollView=_emptyScrollView;
@property(retain, nonatomic) UIViewController<AWEFollowEmptyHintViewControllerProtocol> *emptyHintViewController; // @synthesize emptyHintViewController=_emptyHintViewController;
@property(nonatomic) _Bool needPreFetch; // @synthesize needPreFetch=_needPreFetch;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool pureMode; // @synthesize pureMode=_pureMode;
@property(nonatomic) unsigned long long maxReachedIndex; // @synthesize maxReachedIndex=_maxReachedIndex;
@property(nonatomic) long long didEndPlayIndex; // @synthesize didEndPlayIndex=_didEndPlayIndex;
@property(nonatomic) long long willPlayIndex; // @synthesize willPlayIndex=_willPlayIndex;
@property(nonatomic) long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(nonatomic) long long currentPlayIndex; // @synthesize currentPlayIndex=_currentPlayIndex;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) AWEFeedAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak AWEFeedContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(copy, nonatomic) NSDictionary *enterTrackerInfo; // @synthesize enterTrackerInfo=_enterTrackerInfo;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(nonatomic) _Bool hasFirstFetched; // @synthesize hasFirstFetched=_hasFirstFetched;
@property(nonatomic) _Bool isSkylightUnfolded; // @synthesize isSkylightUnfolded=_isSkylightUnfolded;
@property(copy, nonatomic) CDUnknownBlockType didEndDisplayAwemeModel; // @synthesize didEndDisplayAwemeModel=_didEndDisplayAwemeModel;
@property(copy, nonatomic) CDUnknownBlockType skylightStateChangedBlock; // @synthesize skylightStateChangedBlock=_skylightStateChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshLiveCountBlock; // @synthesize refreshLiveCountBlock=_refreshLiveCountBlock;
@property(nonatomic) __weak NSObject<AWEFeedTableViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType pureModeBlock; // @synthesize pureModeBlock=_pureModeBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) AWEListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)expandableLiveEntranceABEnable;
- (id)createExpandableLiveEntranceViewController;
- (void)updateLiveListOfVideoFeedWithData:(id)arg1;
- (void)tabBarControllerDidChangeSelectedIndexNotification:(id)arg1;
- (void)handleVCDAlertOrBubble;
- (void)closeFriendSkylight:(_Bool)arg1;
- (void)openFriendSkylight:(_Bool)arg1;
- (void)setupFeedFriendSkylightEntrenceIfNeeded;
- (_Bool)isFeedSkylightAccessible;
- (_Bool)isForyouFeedFriendSkylightEntrence;
- (void)setUpAdController;
- (void)setLiveStreamingPureMode:(_Bool)arg1;
- (void)closeLiveSkylightWithAnimated:(_Bool)arg1;
- (void)openLiveSkylightWithAnimated:(_Bool)arg1;
- (void)dismissSkylightLiveViewWithAnimated:(_Bool)arg1;
- (void)showSkylightLiveView:(_Bool)arg1;
- (void)setAccessoriesHidden:(_Bool)arg1;
- (void)setNeedsSetPureMode:(_Bool)arg1;
- (void)tapSkylightLiveView:(id)arg1;
- (void)triggleCloseSkylightGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)slientRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshRadicialConcernWithLiveExsit:(_Bool)arg1 isLiveShown:(_Bool)arg2 isSilent:(_Bool)arg3 isInitFetch:(_Bool)arg4;
- (void)refreshRadicialConcernWithLiveExsit:(_Bool)arg1 isLiveShown:(_Bool)arg2 isSilent:(_Bool)arg3;
- (void)fetchDouYinFollowingData:(_Bool)arg1 completed:(CDUnknownBlockType)arg2;
- (void)fetchConcernData:(_Bool)arg1 videoCompletion:(CDUnknownBlockType)arg2;
- (void)setupRadicalEvolutionFollowFeedLiveEntrenceIfNeeded;
- (_Bool)isRadicalEvolutionFullScreenConcernLiveEntrence;
- (_Bool)isRadicalEvolutionFollowFeedLiveEntrence;
- (_Bool)isRadicalEvolutionMainConcern;
- (_Bool)isFamiliarFullscreen;
- (_Bool)shouldShowUploadView;
- (void)dismissCircularShareGuideFromCell:(id)arg1;
- (void)clearDuplicateItemsFromFollow;
- (void)liveTopViewSkip:(id)arg1;
- (void)liveTopViewGot:(id)arg1;
- (void)insertPushVideosWithGids:(id)arg1;
- (void)awesomeSplashSkip:(id)arg1;
- (void)awesomeSplashGot:(id)arg1;
- (void)setTabbarSnapshotForAutoPlayAnimation:(id)arg1;
- (void)dismissAutoPlayViewWithAnimation:(_Bool)arg1;
- (void)showAutoPlayViewWithAnimation:(_Bool)arg1;
- (void)cancelAutoPlay;
- (void)cancelAutoPlayFromNotification;
- (_Bool)isScrolledAutomatically;
- (void)didReceiveAutoPlayNotification:(id)arg1;
- (_Bool)awesst_isVideoPlayViewController;
- (id)awesst_additionalTrackerParams;
- (id)awesst_enterFrom;
- (void)VCDHandleAuthorizeSuccess;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)adWebViewDidFinishLoad;
- (void)adWebViewWillDisappear;
- (void)adWebViewDidFailLoad:(id)arg1;
- (void)adWebViewStartLoad;
- (void)didReceiveMemoryWarning;
- (void)preloadCoverImageWithIndexPath:(id)arg1;
- (void)insertAwemeWithUploadSuccess:(id)arg1;
- (void)task:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)task:(id)arg1 didAppendWithInfo:(id)arg2;
- (_Bool)p_needRefresh;
- (_Bool)p_showVCDAuthorizedText;
- (_Bool)p_showVCDAuthorizedView;
- (_Bool)p_hotsoonAccountUnauthorize;
- (void)p_splashViewDidDisappear:(id)arg1;
- (void)insertFeedInterestSelection;
- (void)tryFetchFeedInterestSelection;
- (void)didReceiveAWEAwemeFeedInterestManagerSelectionNotification:(id)arg1;
- (void)didReceiveAWEAwemeFeedInterestManagerSkipLimitNotification:(id)arg1;
- (void)didReceiveAWEPlayVideoViewControllerVideoRequestResponseNotification:(id)arg1;
- (void)didReceiveAwemeBaseViewControllerClickPlayNotification:(id)arg1;
- (void)playDiscoverHotSearchGuideAnimation:(id)arg1;
- (void)prefetchFeedListForAutoPaging:(id)arg1;
- (void)newUserJourneyLoadMoreFeed;
- (void)newUserJourneyUpdateFeed;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)handleConnectionChanged:(id)arg1;
- (void)videoTopStatusChanged:(id)arg1;
- (void)_removeNotifications;
- (void)_addNotifications;
- (void)_triggerToRefreshForcible:(_Bool)arg1;
- (void)_triggerToRefreshIfNeeded;
- (void)deleteAwemeWithIDs:(id)arg1;
- (void)_removeAwemesWithDeletedIndexPaths:(id)arg1 deletedItems:(id)arg2;
- (void)removeAwemesWithUserIDs:(id)arg1;
- (void)removeAwemeWithUserID:(id)arg1;
- (void)_onFollowStatusChanged:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)resetFeedCount;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)p_trackFollowTabEnterEvent;
- (void)p_trackFollowCardSlideUp:(id)arg1;
- (void)p_showConcernLandingToastIfNeeded;
- (void)p_showFamiliarLastViewIfNeeded;
- (void)p_showConcernLastViewIfNeeded;
- (void)handleCommentShrinkVideo:(id)arg1;
- (void)onAwemeUnInterestNotification:(id)arg1;
- (void)_doVideoPrefetchCacheSizeTrack:(id)arg1;
- (void)__doVideoPrefetch:(long long)arg1;
- (void)_cancelVideoPrefetch;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)videoVoteFinished;
- (void)videoDownloadFinished:(id)arg1;
- (void)saveAwemeImpressionID;
- (void)_coldLaunchPushAlertInFeed;
- (void)_onScrollDidEnd;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)prefetchFeedListIfNeeded:(long long)arg1;
- (void)setNeedsTrackLiveAdWithOpenURL:(id)arg1;
- (void)saveConcernCards;
- (void)showSearchBubbleWithModel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)cellHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updatePureModeForCell:(id)arg1 withModel:(id)arg2;
- (void)configureCell:(id)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (id)dequeueAndConfigureCellForRowWithModel:(id)arg1 atIndexPath:(id)arg2;
- (id)cellReuseIdentifierForRowWithModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_getModelSafelyForRow:(long long)arg1;
- (id)fetchPreloadedCellForRowWithModel:(id)arg1 atIndexPath:(id)arg2;
- (void)preloadNextCellIfNeeded;
- (void)cancelCellPreloading;
- (void)scheduleCellPreloading;
- (_Bool)isCellPreloadingEnabled;
- (id)feedController;
- (void)_hideBadNetworkingState;
- (void)_showBadNetworkingState;
- (long long)_numberOfRows;
- (void)_onReloadDataSource;
- (void)_addRefreshHeaderAndFooter;
- (id)currentReferString;
- (void)setRefreshMethod:(id)arg1;
- (void)trackRequestResponseWithList:(id)arg1 error:(id)arg2;
- (void)logFeedListLoadedTimeWithList:(id)arg1 error:(id)arg2;
- (void)_loadmoreAnimation;
- (void)_loadMore;
- (void)_refreshDataController:(CDUnknownBlockType)arg1;
- (void)_refresh:(_Bool)arg1;
- (void)_refreshWithoutAnimation;
- (_Bool)checkForPreloadFeedWithType:(long long)arg1;
- (void)_initialFetch;
- (void)reloadWithCurrentIndex:(long long)arg1;
- (long long)currentIndex;
- (id)currentAwemeID;
@property(readonly, nonatomic) AWEAwemeModel *currentAweme;
- (_Bool)isLikeUserPanelShowing;
- (_Bool)isReportMaskViewShowing;
- (_Bool)inVPAPeriodAndInHotPage;
- (_Bool)isPoliticalMaskViewShowing;
- (_Bool)isCommentPanelShowing;
- (_Bool)isDisplayingProgressView;
- (_Bool)isDisplayingSkylightView;
- (_Bool)canRefresh;
- (_Bool)currentTabIsTop;
- (id)userProfileViewControllerForModel:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)transition_enableCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)transition_didStartTransitionWithContext:(id)arg1;
- (long long)_findFirstItemWithID:(id)arg1;
- (void)onAwemeDeletedWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)onAwemeToNextVideoUnderReportWithObjectID:(id)arg1;
- (void)onAwemeToNextVideo:(id)arg1;
- (void)onAwemeDeleted:(id)arg1;
- (_Bool)enableRefreshByReusingUnreachedData;
- (void)forceRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)animatedRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatedRefreshByReusingUnreachedDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)animatedRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)reload;
- (void)_trackStayTime;
- (void)pause;
- (void)stop;
- (_Bool)ifShowUploadAddressBookGuide;
- (void)playIfActive;
- (_Bool)isActive;
- (void)report;
- (double)currentPlayingTime;
- (void)play;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)loginViewHiddenState;
- (_Bool)emptyScrollViewHiddenState;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(long long)arg1 dataController:(id)arg2;
- (void)trackStorySkylightShowEventIfNeeded;
- (_Bool)storySkylightEntrenceEnable;
- (void)hideStorySkylightWithAnimated:(_Bool)arg1;
- (void)showStorySkylightWithAnimated:(_Bool)arg1 enterFrom:(id)arg2;
- (void)updateStorySkylightWithStoryModel:(id)arg1 isInitFetch:(_Bool)arg2 enterFrom:(id)arg3;
- (void)setupStorySkylightEntrenceIfNeeded;
- (void)refreshStorySkylightEntrenceIfNeeded;
- (void)trackStorySkylightShowEventWithEnterFrom:(id)arg1;
- (void)fetchFollowingData:(_Bool)arg1 completed:(CDUnknownBlockType)arg2;
- (void)fetchI18NStoryData:(_Bool)arg1 completed:(CDUnknownBlockType)arg2;
- (id)followingSegmentedItemContentView;
- (void)hideStoryIndicatorViewWithAnimated:(_Bool)arg1;
- (void)showStoryIndicatorViewWithAnimated:(_Bool)arg1;
- (void)triggleCloseStorySkylightGesture:(id)arg1;
- (void)setupStoryViewController;
- (void)storyCatchViewTapped;
- (void)setupStoryCatchView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
