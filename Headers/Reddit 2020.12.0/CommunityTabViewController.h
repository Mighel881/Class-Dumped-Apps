//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PagedTabViewController.h"

#import "REDSearchBarDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class CommunitiesViewController, CustomFeedsListViewController, NSArray, NSString, REDSearchBar, RedditService, SearchBarTransition;

@interface CommunityTabViewController : PagedTabViewController <REDSearchBarDelegate, UIViewControllerTransitioningDelegate, RUIThemeUpdateCallbackProtocol>
{
    RedditService *_service;
    CommunitiesViewController *_communitiesController;
    CustomFeedsListViewController *_customFeedsViewController;
    REDSearchBar *_searchBar;
    SearchBarTransition *_searchBarTransition;
    NSArray *_recentSubreddits;
}

@property(copy, nonatomic) NSArray *recentSubreddits; // @synthesize recentSubreddits=_recentSubreddits;
@property(retain, nonatomic) SearchBarTransition *searchBarTransition; // @synthesize searchBarTransition=_searchBarTransition;
@property(retain, nonatomic) REDSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) CustomFeedsListViewController *customFeedsViewController; // @synthesize customFeedsViewController=_customFeedsViewController;
@property(retain, nonatomic) CommunitiesViewController *communitiesController; // @synthesize communitiesController=_communitiesController;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)analyticsPageType;
- (void)themeDidChange:(id)arg1;
- (void)setFocusToSearchBar;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)setupTabBarItem;
- (id)majorContentView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
