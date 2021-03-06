//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGAdsBottomCTAControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGAnonymousLikesSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDiscoverPeopleConnectionSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDiscoverPeopleSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedStatusViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFindUsersViewDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowListHashtagPreviewSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowListMoreUsersSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowListSortingSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowListSortingSelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowRequestSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFriendStatusChangedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMultipleAccountsUpsellDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMultipleAccountsUpsellMegaphoneSectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPageViewControllerChildViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGReportUserListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSeeAllSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTabControlSegment-Protocol.h>
#import <InstagramAppCoreFramework/IGTitleAndActionSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserActionsListener-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListGroupSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListNetworkDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListSectionControllerFiltersDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListSectionControllerFollowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserListSectionControllerStoryDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGAdsBottomCTAController, IGCTAPresenterContext, IGConnectContactsDismissManager, IGContactsUserStore, IGDiscoverAccountsDismissManager, IGFeedNetworkSource, IGFeedScrollViewAnnouncer, IGFeedStatusView, IGFollowListNavigationPerfComponents, IGFollowListSortingModel, IGFollowListViewControllerConfiguration, IGListAdapter, IGMultipleAccountsUpsellDataSource, IGRefreshControl, IGSearchBar, IGSearchBarConfig, IGStoryViewerPresentationController, IGSuggestedFindUsersViewDataSource, IGSuggestedUserLogger, IGTableLayoutSpec, IGUserListNetworkDataSource, IGUserSession, NSArray, NSMutableArray, NSMutableOrderedSet, NSNumber, NSString, UIBarButtonItem, UICollectionView;
@protocol IGFollowPeopleLoggerProtocol;

@interface IGFollowListViewController : IGViewController <IGFeedStatusViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGSearchBarDelegate, UICollectionViewDelegate, IGFeedScrollViewListener, IGFollowListHashtagPreviewSectionControllerDelegate, IGFollowListMoreUsersSectionControllerDelegate, IGUserListNetworkDataSourceDelegate, IGFeedNetworkSourceDelegate, IGAnonymousLikesSectionControllerDelegate, IGPageViewControllerChildViewController, IGDiscoverPeopleSectionControllerDelegate, IGSeeAllSectionControllerDelegate, IGUserListSectionControllerFollowDelegate, IGUserListSectionControllerStoryDelegate, IGFindUsersViewDataSourceDelegate, IGDiscoverPeopleConnectionSectionControllerDelegate, IGUserActionsListener, IGFollowListSortingSectionControllerDelegate, IGFollowListSortingSelectionViewControllerDelegate, IGReportUserListener, IGFriendStatusChangedListener, IGUserListSectionControllerFiltersDelegate, IGAdsBottomCTAControllerDelegate, IGUserListGroupSectionControllerDelegate, IGTitleAndActionSectionControllerDelegate, IGFollowRequestSectionControllerDelegate, IGMultipleAccountsUpsellDataSourceDelegate, IGMultipleAccountsUpsellMegaphoneSectionDelegate, IGUserListDataSource, IGTabControlSegment>
{
    IGFollowListViewControllerConfiguration *_configuration;
    NSString *_contextPK;
    NSString *_sourceAnalyticsModule;
    double _headerHeight;
    NSString *_contextUsername;
    _Bool _enableLikerListNullState;
    IGStoryViewerPresentationController *_storyViewerController;
    NSNumber *_followingUserCount;
    _Bool _userListEmptyAndUnfiltered;
    IGConnectContactsDismissManager *_connectContactsDismissManager;
    IGDiscoverAccountsDismissManager *_discoverAccountsDismissManager;
    IGAdsBottomCTAController *_bottomCTAController;
    _Bool _reachedUserListEnd;
    NSNumber *_followerUserCount;
    NSNumber *_mutualFollowerUserCount;
    IGFollowListNavigationPerfComponents *_navPerfComponents;
    NSString *_order;
    IGFollowListSortingModel *_sortingModel;
    IGContactsUserStore *_contactsUserStore;
    NSNumber *_showUserRelationshipSheet;
    IGCTAPresenterContext *_ctaPresenterContext;
    _Bool _shouldShowLikeListShimmerLoadingState;
    unsigned long long _unfollowFromSelfFollowingCount;
    NSArray *_allInterestAccounts;
    NSArray *_mostInteractedWithAccounts;
    _Bool _loading;
    _Bool _dataFetchNeeded;
    _Bool _shouldShowSeeAllHeader;
    long long _followListType;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    NSMutableOrderedSet *_userList;
    NSString *_headerDisclaimerText;
    NSMutableArray *_suggestions;
    IGFeedStatusView *_emptyStateView;
    IGRefreshControl *_refreshControl;
    IGUserSession *_userSession;
    NSString *_sessionId;
    id <IGFollowPeopleLoggerProtocol> _followListLogger;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGSearchBar *_searchBar;
    NSString *_searchString;
    IGSearchBarConfig *_searchBarConfig;
    IGUserListNetworkDataSource *_networkDataSource;
    IGSuggestedFindUsersViewDataSource *_suggestedUsersDataSource;
    IGMultipleAccountsUpsellDataSource *_multipleAccountsUpsellDataSource;
    UIBarButtonItem *_loadingButton;
    IGTableLayoutSpec *_tableInterface;
    IGFeedNetworkSource *_asyncFeedNetworkSource;
}

@property(retain, nonatomic) IGFeedNetworkSource *asyncFeedNetworkSource; // @synthesize asyncFeedNetworkSource=_asyncFeedNetworkSource;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(nonatomic) _Bool shouldShowSeeAllHeader; // @synthesize shouldShowSeeAllHeader=_shouldShowSeeAllHeader;
@property(retain, nonatomic) UIBarButtonItem *loadingButton; // @synthesize loadingButton=_loadingButton;
@property(retain, nonatomic) IGMultipleAccountsUpsellDataSource *multipleAccountsUpsellDataSource; // @synthesize multipleAccountsUpsellDataSource=_multipleAccountsUpsellDataSource;
@property(retain, nonatomic) IGSuggestedFindUsersViewDataSource *suggestedUsersDataSource; // @synthesize suggestedUsersDataSource=_suggestedUsersDataSource;
@property(retain, nonatomic) IGUserListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
@property(retain, nonatomic) IGSearchBarConfig *searchBarConfig; // @synthesize searchBarConfig=_searchBarConfig;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) __weak IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> followListLogger; // @synthesize followListLogger=_followListLogger;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSString *headerDisclaimerText; // @synthesize headerDisclaimerText=_headerDisclaimerText;
@property(retain, nonatomic) NSMutableOrderedSet *userList; // @synthesize userList=_userList;
@property(nonatomic) _Bool dataFetchNeeded; // @synthesize dataFetchNeeded=_dataFetchNeeded;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) long long followListType; // @synthesize followListType=_followListType;
- (void).cxx_destruct;
- (id)trackingModel;
- (void)followRequestSectionController:(id)arg1 entrypointTappedAtPosition:(long long)arg2;
- (void)multipleAccountsUpsellDataSource:(id)arg1 didFetchAllInterestAccounts:(id)arg2;
- (void)multipleAccountsUpsellDataSource:(id)arg1 didFetchMostInteractedWithAccounts:(id)arg2;
- (void)multipleAccountsUpsellMegaphoneSectionControllerDidTapDismiss:(id)arg1 upsellType:(long long)arg2;
- (void)multipleAccountsUpsellMegaphoneSectionControllerDidTapNext:(id)arg1 upsellType:(long long)arg2;
- (void)userListSectionController:(id)arg1 followButtonStatusDidChangeForAccount:(id)arg2 withAction:(long long)arg3;
- (void)userListSectionControllerFiltersButtonWasTapped:(id)arg1;
- (void)followListSortingSelectionViewController:(id)arg1 didSelectSortingOption:(id)arg2;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectGroup:(id)arg2;
- (void)followListSectionControllerDidTapCell:(id)arg1;
- (void)userWasReported:(id)arg1;
- (void)didChangePrivacyFollowingAcceptRateLimit;
- (id)_titleForFollowListType;
- (id)analyticsExtras;
- (id)analyticsModule;
- (_Bool)disableNavigationEvent;
- (void)bottomCTAControllerDidShowCTA:(_Bool)arg1 withBottomOffset:(double)arg2;
- (void)bottomCTAControllerDidAddCTAView:(id)arg1 toScrollView:(id)arg2;
- (_Bool)_hasContactPermissions;
- (id)_additionalRequestParams;
- (id)_suggestedUsersDataSourceRequestModule;
- (double)_unusableSpaceForEmptyStateWithSU;
- (id)_emptyFeedModelForSelfFollowersFollowing;
- (id)_emptyFeedModelForLikerList;
- (id)_emptyFeedModelForPendingFollows;
- (_Bool)_shouldShowDiscoverPeopleEntryPoint;
- (_Bool)_shouldShowDiscoverAccountsEntryPoint;
- (_Bool)_shouldShowConnectContactsOptionInSelfFollowing;
- (_Bool)_shouldShowConnectContactsOption;
- (_Bool)_shouldShowEmptyStateInLikerList;
- (_Bool)_shouldShowEmptyStateInPendingFollows;
- (_Bool)_shouldShowSUUnitInFollowList;
- (_Bool)_shouldShowSUUnitInNonSelfFollowersFollowingList;
- (_Bool)_shouldShowSUUnitInSelfFollowersFollowingList;
- (_Bool)_shouldShowEmptyStateInSelfFollowersFollowing;
- (_Bool)_supportsMessageButton;
- (_Bool)_supportsUserRelationshipSheet;
- (id)_suggestionsWithHeader;
- (void)_finishLoading;
- (void)_reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_userListSectionControllerType;
- (void)followListMoreUsersSectionControllerDidTapRow:(id)arg1;
- (void)hashtagPreviewSectionControllerDidTapHashtagRow:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerDidTapDismissButton:(id)arg1 forType:(long long)arg2;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithFailure:(id)arg1;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithSuccess:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)userListSectionControllerDidTapStoryFromReelOwner:(id)arg1 onStoryEntryView:(id)arg2;
- (void)didTapSeeAllSectionController;
- (void)discoverPeopleSectionController:(id)arg1 didTapCustomButtonWithFeatureUserInfo:(id)arg2;
- (void)discoverPeopleSectionController:(id)arg1 didTapDismissWithFeaturedUserInfo:(id)arg2;
- (void)didResignCurrentInPageViewController:(id)arg1;
- (_Bool)isEmpty;
- (void)removeUserFromList:(id)arg1;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)_handleEmptyStateViewTap;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapAnonymousLikesSectionController:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (id)_headerInfoDisplayLabelItemConfig;
- (void)_authorizeAndFetchUsers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFollowListType:(long long)arg1 configuration:(id)arg2 contextPK:(id)arg3 contextUsername:(id)arg4 ctaPresenterContext:(id)arg5 sourceAnalyticsModule:(id)arg6 userSession:(id)arg7 rankByMutualFollowers:(_Bool)arg8 headerHeight:(double)arg9 forcedUserId:(id)arg10 followingUserCount:(id)arg11 followerUserCount:(id)arg12 mutualFollowerUserCount:(id)arg13 order:(id)arg14 enableLikerListNullState:(_Bool)arg15;
- (id)initWithFollowListType:(long long)arg1 configuration:(id)arg2 contextPK:(id)arg3 contextUsername:(id)arg4 ctaPresenterContext:(id)arg5 sourceAnalyticsModule:(id)arg6 userSession:(id)arg7 headerHeight:(double)arg8 followingUserCount:(id)arg9 followerUserCount:(id)arg10 mutualFollowerUserCount:(id)arg11 order:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

