//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPrivateAccountInfoViewControllerDelegate-Protocol.h"
#import "AWEProfileHeaderViewControllerDelegate-Protocol.h"
#import "AWEProfilePullDownTransitionOutterContextProvider-Protocol.h"
#import "AWESlidingViewControllerDelegate-Protocol.h"
#import "AWEStoryCubeDismissControllerProtocol-Protocol.h"
#import "AWEStoryEntranceOutterTransitionContextProvider-Protocol.h"
#import "AWEStoryMessage-Protocol.h"
#import "AWEUserDetailViewControllerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEUserProfileSlidingScrollViewDelegate-Protocol.h"
#import "AWEUserProfileTabVCDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAdOpenGuideView, AWEAwemeModel, AWEEffectArtistViewController, AWEEmptyRecommendViewController, AWEHitRankNoticeView, AWEHomepageViewController, AWELikeWorkViewController, AWEOriginalSoundTrackViewController, AWEPostWorkViewController, AWEPrivateAccountInfoViewController, AWEPrivatePostWorkViewController, AWEProfileHeaderViewController, AWEProfileRNAndWebContainer, AWEProfileTopVideoHelper, AWEQuickFlashEntranceView, AWESlidingTabbarView, AWEUserDynamicViewController, AWEUserFavoriteViewController, AWEUserHomeShakeButton, AWEUserModel, AWEUserProfileSlidingViewController, AWEUserProfileTabHelper, AWEUserSlidingNavbarButtonView, AWEUserSlidingNavbarLocateItemView, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, NSTimer, UIButton, UIView;
@protocol AWEAdPromptViewManager, AWEYAMSceneRecordProtocol;

@interface AWEUserDetailViewController : UIViewController <UIGestureRecognizerDelegate, AWEUserProfileTabVCDelegate, AWEUserMessage, AWEPrivateAccountInfoViewControllerDelegate, AWESlidingViewControllerDelegate, AWEUserProfileSlidingScrollViewDelegate, AWEStoryEntranceOutterTransitionContextProvider, AWEProfileHeaderViewControllerDelegate, AWEProfilePullDownTransitionOutterContextProvider, AWEStoryMessage, BTDRouterViewControllerProtocol, AWEStoryCubeDismissControllerProtocol, AWEUserDetailViewControllerProtocol>
{
    _Bool _needFollow;
    _Bool _forceFetchUserProfile;
    _Bool _didTrackEntrance;
    _Bool _isAdOpenGuideAnimating;
    _Bool _isAlreadyEndedLive;
    _Bool _alreadyLocateDefaultTab;
    _Bool _needRefreshDataAfterFollowing;
    _Bool _isFirstTimeViewDidLoad;
    _Bool _isViewDidAppear;
    _Bool _isViewDidDisappear;
    _Bool _toTrackDuoshanBannerShowEvent;
    _Bool _isViewFirstAppeared;
    _Bool _disableHeaderFrameChange;
    _Bool _quickFlashEntranceShownByScroll;
    _Bool _animatingForPanGesture;
    _Bool _needRefreshDataAfterEnableShowEmptyRecommendTab;
    _Bool _shouldShowAdLandingWhenViewDidAppear;
    NSString *_userID;
    AWEAwemeModel *_model;
    UIView *_containerView;
    AWESlidingTabbarView *_tabView;
    AWEUserProfileSlidingViewController *_slidingVC;
    AWEPostWorkViewController *_postVC;
    AWEPrivatePostWorkViewController *_privatePostVC;
    AWELikeWorkViewController *_likeVC;
    AWEQuickFlashEntranceView *_quickFlashEntranceView;
    AWEProfileHeaderViewController *_profileHeaderVC;
    AWEOriginalSoundTrackViewController *_ostVC;
    AWEUserDynamicViewController *_dynamicVC;
    AWEUserFavoriteViewController *_favoriteVC;
    AWEEffectArtistViewController *_effectVC;
    AWEHomepageViewController *_brandVC;
    AWEProfileRNAndWebContainer *_aggregationContainer;
    AWEPrivateAccountInfoViewController *_privateAccountInfoVC;
    AWEEmptyRecommendViewController *_emptyRecommendVC;
    AWEAdOpenGuideView *_adOpenGuideView;
    AWEUserProfileTabHelper *_tabHelper;
    NSObject<AWEAdPromptViewManager> *_promptViewManager;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_enterType;
    NSString *_eventType;
    NSString *_relationFrom;
    NSString *_enterFromItemID;
    NSString *_enterFromItemAuthorID;
    NSString *_enterMethod;
    NSString *_enterPosition;
    NSDictionary *_jsLogArgs;
    NSString *_userType;
    NSNumber *_isPhoto;
    NSString *_enterFromRequestID;
    NSNumber *_followeeAwemeCount;
    NSMutableDictionary *_tracker;
    NSDictionary *_logPassback;
    NSString *_searchType;
    NSDictionary *_dicForTracker;
    long long _fromAwemeType;
    NSString *_liveEnterPosition;
    long long _profileType;
    NSString *_userExtValue;
    NSDictionary *_userTrackAttributes;
    NSDictionary *_searchLogPassback;
    long long _prePageType;
    NSString *_recommendReason;
    NSString *_recommendFromType;
    NSString *_recommendReasonEnterFrom;
    NSString *_cardType;
    NSString *_recUserType;
    NSNumber *_isColdLaunch;
    NSString *_recommendEnterFrom;
    long long _fromScene;
    NSNumber *_liveUserType;
    NSString *_liveRoomID;
    NSString *_liveAnchorID;
    AWEUserModel *_user;
    long long _lastContentOffset;
    unsigned long long _lastSelectedSlidingTab;
    UIButton *_backBtn;
    UIButton *_navBackBtn;
    UIView *_backBackgroundView;
    UIButton *_moreFuncBtn;
    UIButton *_navMoreFuncBtn;
    UIView *_moreFuncBackgroundView;
    AWEUserSlidingNavbarButtonView *_slidingButtonView;
    NSString *_userStaytimeLabel;
    long long _preFavoritePermission;
    AWEHitRankNoticeView *_hitRankNoticeView;
    id <AWEYAMSceneRecordProtocol> _scene;
    NSString *_ruleId;
    long long _prevContentOffsetY;
    NSTimer *_timerForBannerInteraction;
    long long _timerCount;
    double _prevGestrueLocationY;
    double _prevGestrueLocationX;
    AWEProfileTopVideoHelper *_topVideoHelper;
    double _slidingVCOriginOffsetY;
    double _topVideoFullScreenOffsetY;
    AWEUserHomeShakeButton *_shakeButton;
    AWEUserSlidingNavbarLocateItemView *_slidingLocateItemView;
    long long _emptyRecommendType;
}

+ (void)__awe__codeRunnerRun_278;
@property(nonatomic) _Bool shouldShowAdLandingWhenViewDidAppear; // @synthesize shouldShowAdLandingWhenViewDidAppear=_shouldShowAdLandingWhenViewDidAppear;
@property(nonatomic) _Bool needRefreshDataAfterEnableShowEmptyRecommendTab; // @synthesize needRefreshDataAfterEnableShowEmptyRecommendTab=_needRefreshDataAfterEnableShowEmptyRecommendTab;
@property(nonatomic) long long emptyRecommendType; // @synthesize emptyRecommendType=_emptyRecommendType;
@property(retain, nonatomic) AWEUserSlidingNavbarLocateItemView *slidingLocateItemView; // @synthesize slidingLocateItemView=_slidingLocateItemView;
@property(retain, nonatomic) AWEUserHomeShakeButton *shakeButton; // @synthesize shakeButton=_shakeButton;
@property(nonatomic) double topVideoFullScreenOffsetY; // @synthesize topVideoFullScreenOffsetY=_topVideoFullScreenOffsetY;
@property(nonatomic) double slidingVCOriginOffsetY; // @synthesize slidingVCOriginOffsetY=_slidingVCOriginOffsetY;
@property(retain, nonatomic) AWEProfileTopVideoHelper *topVideoHelper; // @synthesize topVideoHelper=_topVideoHelper;
@property(nonatomic) _Bool animatingForPanGesture; // @synthesize animatingForPanGesture=_animatingForPanGesture;
@property(nonatomic) double prevGestrueLocationX; // @synthesize prevGestrueLocationX=_prevGestrueLocationX;
@property(nonatomic) double prevGestrueLocationY; // @synthesize prevGestrueLocationY=_prevGestrueLocationY;
@property(nonatomic) _Bool quickFlashEntranceShownByScroll; // @synthesize quickFlashEntranceShownByScroll=_quickFlashEntranceShownByScroll;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *timerForBannerInteraction; // @synthesize timerForBannerInteraction=_timerForBannerInteraction;
@property(nonatomic) _Bool disableHeaderFrameChange; // @synthesize disableHeaderFrameChange=_disableHeaderFrameChange;
@property(nonatomic) long long prevContentOffsetY; // @synthesize prevContentOffsetY=_prevContentOffsetY;
@property(nonatomic) _Bool isViewFirstAppeared; // @synthesize isViewFirstAppeared=_isViewFirstAppeared;
@property(copy, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) id <AWEYAMSceneRecordProtocol> scene; // @synthesize scene=_scene;
@property(retain, nonatomic) AWEHitRankNoticeView *hitRankNoticeView; // @synthesize hitRankNoticeView=_hitRankNoticeView;
@property(nonatomic) long long preFavoritePermission; // @synthesize preFavoritePermission=_preFavoritePermission;
@property(nonatomic) _Bool toTrackDuoshanBannerShowEvent; // @synthesize toTrackDuoshanBannerShowEvent=_toTrackDuoshanBannerShowEvent;
@property(copy, nonatomic) NSString *userStaytimeLabel; // @synthesize userStaytimeLabel=_userStaytimeLabel;
@property(nonatomic) _Bool isViewDidDisappear; // @synthesize isViewDidDisappear=_isViewDidDisappear;
@property(retain, nonatomic) AWEUserSlidingNavbarButtonView *slidingButtonView; // @synthesize slidingButtonView=_slidingButtonView;
@property(retain, nonatomic) UIView *moreFuncBackgroundView; // @synthesize moreFuncBackgroundView=_moreFuncBackgroundView;
@property(retain, nonatomic) UIButton *navMoreFuncBtn; // @synthesize navMoreFuncBtn=_navMoreFuncBtn;
@property(retain, nonatomic) UIButton *moreFuncBtn; // @synthesize moreFuncBtn=_moreFuncBtn;
@property(retain, nonatomic) UIView *backBackgroundView; // @synthesize backBackgroundView=_backBackgroundView;
@property(retain, nonatomic) UIButton *navBackBtn; // @synthesize navBackBtn=_navBackBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) unsigned long long lastSelectedSlidingTab; // @synthesize lastSelectedSlidingTab=_lastSelectedSlidingTab;
@property(nonatomic) _Bool isFirstTimeViewDidLoad; // @synthesize isFirstTimeViewDidLoad=_isFirstTimeViewDidLoad;
@property(nonatomic) _Bool needRefreshDataAfterFollowing; // @synthesize needRefreshDataAfterFollowing=_needRefreshDataAfterFollowing;
@property(nonatomic) _Bool alreadyLocateDefaultTab; // @synthesize alreadyLocateDefaultTab=_alreadyLocateDefaultTab;
@property(nonatomic) _Bool isAlreadyEndedLive; // @synthesize isAlreadyEndedLive=_isAlreadyEndedLive;
@property(nonatomic) _Bool isAdOpenGuideAnimating; // @synthesize isAdOpenGuideAnimating=_isAdOpenGuideAnimating;
@property(nonatomic) long long lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) _Bool didTrackEntrance; // @synthesize didTrackEntrance=_didTrackEntrance;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *liveAnchorID; // @synthesize liveAnchorID=_liveAnchorID;
@property(retain, nonatomic) NSString *liveRoomID; // @synthesize liveRoomID=_liveRoomID;
@property(retain, nonatomic) NSNumber *liveUserType; // @synthesize liveUserType=_liveUserType;
@property(nonatomic) long long fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *recommendEnterFrom; // @synthesize recommendEnterFrom=_recommendEnterFrom;
@property(nonatomic) _Bool forceFetchUserProfile; // @synthesize forceFetchUserProfile=_forceFetchUserProfile;
@property(retain, nonatomic) NSNumber *isColdLaunch; // @synthesize isColdLaunch=_isColdLaunch;
@property(copy, nonatomic) NSString *recUserType; // @synthesize recUserType=_recUserType;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *recommendReasonEnterFrom; // @synthesize recommendReasonEnterFrom=_recommendReasonEnterFrom;
@property(retain, nonatomic) NSString *recommendFromType; // @synthesize recommendFromType=_recommendFromType;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long prePageType; // @synthesize prePageType=_prePageType;
@property(copy, nonatomic) NSDictionary *searchLogPassback; // @synthesize searchLogPassback=_searchLogPassback;
@property(copy, nonatomic) NSDictionary *userTrackAttributes; // @synthesize userTrackAttributes=_userTrackAttributes;
@property(copy, nonatomic) NSString *userExtValue; // @synthesize userExtValue=_userExtValue;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(retain, nonatomic) NSString *liveEnterPosition; // @synthesize liveEnterPosition=_liveEnterPosition;
@property(nonatomic) long long fromAwemeType; // @synthesize fromAwemeType=_fromAwemeType;
@property(copy, nonatomic) NSDictionary *dicForTracker; // @synthesize dicForTracker=_dicForTracker;
@property(nonatomic) _Bool needFollow; // @synthesize needFollow=_needFollow;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) NSMutableDictionary *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSNumber *followeeAwemeCount; // @synthesize followeeAwemeCount=_followeeAwemeCount;
@property(copy, nonatomic) NSString *enterFromRequestID; // @synthesize enterFromRequestID=_enterFromRequestID;
@property(retain, nonatomic) NSNumber *isPhoto; // @synthesize isPhoto=_isPhoto;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSDictionary *jsLogArgs; // @synthesize jsLogArgs=_jsLogArgs;
@property(copy, nonatomic) NSString *enterPosition; // @synthesize enterPosition=_enterPosition;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFromItemAuthorID; // @synthesize enterFromItemAuthorID=_enterFromItemAuthorID;
@property(copy, nonatomic) NSString *enterFromItemID; // @synthesize enterFromItemID=_enterFromItemID;
@property(copy, nonatomic) NSString *relationFrom; // @synthesize relationFrom=_relationFrom;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) NSObject<AWEAdPromptViewManager> *promptViewManager; // @synthesize promptViewManager=_promptViewManager;
@property(retain, nonatomic) AWEUserProfileTabHelper *tabHelper; // @synthesize tabHelper=_tabHelper;
@property(retain, nonatomic) AWEAdOpenGuideView *adOpenGuideView; // @synthesize adOpenGuideView=_adOpenGuideView;
@property(retain, nonatomic) AWEEmptyRecommendViewController *emptyRecommendVC; // @synthesize emptyRecommendVC=_emptyRecommendVC;
@property(retain, nonatomic) AWEPrivateAccountInfoViewController *privateAccountInfoVC; // @synthesize privateAccountInfoVC=_privateAccountInfoVC;
@property(retain, nonatomic) AWEProfileRNAndWebContainer *aggregationContainer; // @synthesize aggregationContainer=_aggregationContainer;
@property(retain, nonatomic) AWEHomepageViewController *brandVC; // @synthesize brandVC=_brandVC;
@property(retain, nonatomic) AWEEffectArtistViewController *effectVC; // @synthesize effectVC=_effectVC;
@property(retain, nonatomic) AWEUserFavoriteViewController *favoriteVC; // @synthesize favoriteVC=_favoriteVC;
@property(retain, nonatomic) AWEUserDynamicViewController *dynamicVC; // @synthesize dynamicVC=_dynamicVC;
@property(retain, nonatomic) AWEOriginalSoundTrackViewController *ostVC; // @synthesize ostVC=_ostVC;
@property(retain, nonatomic) AWEProfileHeaderViewController *profileHeaderVC; // @synthesize profileHeaderVC=_profileHeaderVC;
@property(retain, nonatomic) AWEQuickFlashEntranceView *quickFlashEntranceView; // @synthesize quickFlashEntranceView=_quickFlashEntranceView;
@property(retain, nonatomic) AWELikeWorkViewController *likeVC; // @synthesize likeVC=_likeVC;
@property(retain, nonatomic) AWEPrivatePostWorkViewController *privatePostVC; // @synthesize privatePostVC=_privatePostVC;
@property(retain, nonatomic) AWEPostWorkViewController *postVC; // @synthesize postVC=_postVC;
@property(retain, nonatomic) AWEUserProfileSlidingViewController *slidingVC; // @synthesize slidingVC=_slidingVC;
@property(retain, nonatomic) AWESlidingTabbarView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)unfollowed:(id)arg1;
- (void)followed:(id)arg1;
- (id)getParams;
- (id)awesst_enterFrom;
- (void)p_trackProfileToastType:(long long)arg1;
- (void)followPrivateAccountCheck;
- (void)p_refreshNavibarButtonsAlpha:(double)arg1;
- (void)p_refreshNavibarBottomLineAlpha:(double)arg1;
- (void)p_refreshAlphaOfNavibar:(double)arg1;
- (void)p_trackDuoshanBannerShowIfNeeded;
- (void)p_landingDefaultTabIfNeeded;
- (_Bool)p_showPrivateAccountInfoView;
- (void)p_removeTabViewControllersContents;
- (void)p_fetchUser:(CDUnknownBlockType)arg1;
- (id)p_tabVCForType:(long long)arg1;
- (void)p_fixOtherVCOffset:(double)arg1;
- (void)updateHeaderViewFrameWithOffset:(struct CGPoint)arg1;
- (id)transitionAvatarView;
- (struct CGRect)viewControllerImageViewOriginFrame;
- (id)viewControllerImageView;
- (void)viewControllerDidFinishTransition;
- (void)viewControllerDidCancelTranstion;
- (void)viewControllerWillCancelTransition;
- (void)viewControllerWillBeginTransition;
- (double)headerViewVisibleHeight;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2 transitionType:(long long)arg3;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (void)shouldChangeLanguageNotification:(id)arg1;
- (void)liveAlreadyEndedNotification:(id)arg1;
- (void)removeObservers;
- (void)p_addObervers;
- (void)updateNavBtnAlpha:(double)arg1;
- (void)topVideoDidFinishedLeaveFullScreen;
- (void)topVideoLeaveFullScreenWithAnimation:(_Bool)arg1;
- (void)topVideoWillLeaveFullScreen;
- (void)topVideoDidFinishedEnterFullScreen;
- (void)topVideoEnterFullScreenWithAnimation:(_Bool)arg1 fullScreenTopOffsetY:(double)arg2;
- (void)topVideoWillEnterFullScreen;
- (void)scrollOffsetYLessThanTopVideoEntryOffsetY;
- (void)updateHeaderHeight;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (void)changeSlidingTabWithLocation:(struct CGPoint)arg1;
- (void)constructTranspondProfileCoverArray;
- (void)followBtnClicked;
- (void)updatedTranslationClicked;
- (_Bool)isCurrentUser;
- (void)_createSlidingLocateItemView;
- (_Bool)prefersStatusBarHidden;
- (void)_refreshNavigationSlidingButtonView:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (double)fixTabScrollViewContentOffsetIfNeeded;
- (id)currentScrollView;
- (void)scrollAnimation;
- (void)invalidateTimer;
- (void)startTimerForQuickFlashEntranceWithUserInfo:(id)arg1;
- (_Bool)handleBannerInteraction:(id)arg1;
- (void)showQuickFlashView;
- (void)updateQuickFlashEntranceView:(double)arg1;
- (_Bool)shouldUseDefaultText;
- (void)dismissQuickFlashEntrance:(CDUnknownBlockType)arg1;
- (void)showQuickFlashEntrance:(CDUnknownBlockType)arg1;
- (void)delayToShowQuickFlashEntrance;
- (void)addQuickFlashEntrance;
- (_Bool)enableEnterQuickFlashView;
- (void)trackForQuickFlashViewShow;
- (void)prefetchQuickShopResources;
- (double)userProfileTabHeight;
- (void)updateHeaderViewHeight;
- (void)updateIntroLabelAfterUnfollow;
- (void)_closeAdOpenGuide;
- (void)_showAdOpenGuide;
- (void)p_refreshHeaderViewAlpha;
- (void)_removeOtherLikeLock;
- (void)_addOtherLikeLock;
- (void)_refreshLikeLock;
- (void)p_refreshHeaderViewAfterFetchUser:(id)arg1 shouldRefreshTabView:(_Bool)arg2;
- (void)_removeController:(id)arg1;
- (void)p_addNavigationBar;
- (void)_resetUI;
- (void)p_setupUI;
- (void)trackStaytime;
- (void)startTimingForTrack;
- (void)receivedNewFavoriteCountNotification:(id)arg1;
- (void)handleBridgeBroadcast:(id)arg1;
- (void)handleAppWillResignActive;
- (void)handleAppBecomeActive;
- (void)trackFansPushButtonShow:(id)arg1;
- (void)trackFansPushButtonclicked:(id)arg1;
- (void)trackFansPushToast:(id)arg1;
- (void)shakeButtonClicked:(id)arg1;
- (void)moreBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)animateChildVCs;
- (void)_refreshAdGuideViewWithOffset:(double)arg1;
- (id)userForTabVC;
- (struct CGPoint)contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (double)realHeaderHeight;
- (double)headerHeight;
- (void)userProfileTabViewControllerWillBeginDragging:(id)arg1;
- (void)userProfileTabViewControllerDidEndDragging:(id)arg1;
- (void)userProfileTabVC:(id)arg1 didScroll:(struct CGPoint)arg2;
- (void)privateAccountInfoViewController:(id)arg1 didScroll:(struct CGPoint)arg2;
- (void)didFinishUpdateUnreadAwemeWithUser:(id)arg1;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishUnBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)handlePanGestureForChallenge:(id)arg1;
- (double)normalCoverHeight;
- (id)coverView;
- (id)settingBtn;
- (id)settingView;
- (id)backView;
- (_Bool)transition_shouldStartInteractiveTranstionToVC:(id)arg1;
- (_Bool)transition_enableCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)p_trackEntrance;
- (void)p_trackEntranceIfNeed;
- (void)p_replaceHeaderViewIfNeeded;
- (void)p_showTabView:(_Bool)arg1;
- (void)p_refreshWithUser:(id)arg1 shouldRefreshTab:(_Bool)arg2;
- (void)p_trackShow;
- (void)p_refreshUserData;
- (void)p_refreshWithPreloadUserIfNeeded;
- (void)setPreloadedUser:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)p_endScene;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (long long)pageType;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
