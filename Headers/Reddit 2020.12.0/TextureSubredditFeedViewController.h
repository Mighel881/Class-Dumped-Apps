//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedViewController.h"

#import "DeeplinkProtocol-Protocol.h"
#import "SubredditFeedAddPostControllerDelegate-Protocol.h"
#import "SubredditFeedViewControllerInterface-Protocol.h"

@class CarouselDelegator, FeedNavigator, FeedPresenter, NSString, NSURL, SortBarView, Subreddit, SubredditFeedAddPostController, UICollectionView, UIScrollView;
@protocol FeedScrollEventObserver, PagedTabControllerParentCallback;

@interface TextureSubredditFeedViewController : FeedViewController <SubredditFeedAddPostControllerDelegate, SubredditFeedViewControllerInterface, DeeplinkProtocol>
{
    SortBarView *_sortBarView;
    unsigned long long _modPermissions;
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    SubredditFeedAddPostController *_subredditFeedAddPostController;
}

@property(retain, nonatomic) SubredditFeedAddPostController *subredditFeedAddPostController; // @synthesize subredditFeedAddPostController=_subredditFeedAddPostController;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
@property(nonatomic) unsigned long long modPermissions; // @synthesize modPermissions=_modPermissions;
@property(retain, nonatomic) SortBarView *sortBarView; // @synthesize sortBarView=_sortBarView;
- (void).cxx_destruct;
- (void)subredditFeedAddPostControllerDidTapAddPost;
- (void)subredditFeedAddPostControllerDidRemoveView;
- (void)displayAddPostViewIfNeeded;
- (void)displayListingContent:(id)arg1 correlationID:(id)arg2;
- (void)displayEmptyWelcomeView;
@property(readonly, nonatomic) NSURL *deeplinkURL;
- (void)nsfwPreferencesDidUpdate:(id)arg1;
- (void)pillContainerNode:(id)arg1 didSelectPill:(id)arg2;
- (void)updateWithIsModMode:(_Bool)arg1;
- (id)screenViewAnalyticsEvent;
- (void)headerBarViewDidTapModModeButton:(id)arg1;
- (void)reloadContentAndUpdateStyling;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)loadPlaceholderPosts;
- (void)configureWithSubreddit:(id)arg1;
@property(readonly, nonatomic) Subreddit *subreddit;
- (id)subredditFeedPresenter;
- (void)viewDidLoad;
- (id)initWithPresenter:(id)arg1 delegator:(id)arg2 navigator:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, nonatomic) CarouselDelegator *carouselDelegator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UICollectionView *feedCollectionView;
@property(readonly, nonatomic) FeedPresenter *feedPresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
@property(readonly, nonatomic) FeedNavigator *navigator;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(nonatomic) __weak id <FeedScrollEventObserver> scrollEventObserver;
@property(readonly) Class superclass;

@end
