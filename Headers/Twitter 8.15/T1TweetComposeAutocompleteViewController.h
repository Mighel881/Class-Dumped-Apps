//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ComposeTypeaheadViewControllerDelegate-Protocol.h>
#import <T1Twitter/UISearchBarDelegate-Protocol.h>

@class NSArray, NSString, T1ComposeTypeaheadPrompt, T1ComposeTypeaheadResult, T1ComposeTypeaheadViewController, TFNRoundedSearchBar, TFNTwitterAccount, TFSTwitterScribeContext, UIView;
@protocol T1TweetComposeAutocompleteViewControllerDelegate;

@interface T1TweetComposeAutocompleteViewController : TFNViewController <UISearchBarDelegate, T1ComposeTypeaheadViewControllerDelegate>
{
    _Bool _fullscreenMode;
    _Bool _transitionInProgress;
    long long _autocompleteType;
    T1ComposeTypeaheadResult *_results;
    double _condensedHeight;
    UIView *_searchBarContainer;
    id <T1TweetComposeAutocompleteViewControllerDelegate> _delegate;
    TFSTwitterScribeContext *_scribeContext;
    double _fullScreenProgress;
    TFNRoundedSearchBar *_searchBar;
    UIView *_separator;
    UIView *_topBackground;
    T1ComposeTypeaheadPrompt *_searchPrompt;
    T1ComposeTypeaheadViewController *_autocompleteViewController;
    struct CGPoint _intialTouchPosition;
    struct CGRect _availableFrame;
}

@property(readonly, nonatomic) T1ComposeTypeaheadViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(retain, nonatomic) T1ComposeTypeaheadPrompt *searchPrompt; // @synthesize searchPrompt=_searchPrompt;
@property(retain, nonatomic) UIView *topBackground; // @synthesize topBackground=_topBackground;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) TFNRoundedSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(nonatomic) double fullScreenProgress; // @synthesize fullScreenProgress=_fullScreenProgress;
@property(nonatomic) struct CGPoint intialTouchPosition; // @synthesize intialTouchPosition=_intialTouchPosition;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1TweetComposeAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(nonatomic) _Bool fullscreenMode; // @synthesize fullscreenMode=_fullscreenMode;
@property(nonatomic) double condensedHeight; // @synthesize condensedHeight=_condensedHeight;
@property(nonatomic) struct CGRect availableFrame; // @synthesize availableFrame=_availableFrame;
@property(retain, nonatomic) T1ComposeTypeaheadResult *results; // @synthesize results=_results;
@property(nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
- (void).cxx_destruct;
- (void)_t1_updateDecoratingViews;
- (void)_t1_enterFullscreenMode;
- (void)_t1_animateToProgress:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs;
@property(copy, nonatomic) NSArray *includedMentionUserIDs;
@property(retain, nonatomic) TFNTwitterAccount *account;
- (void)viewWillLayoutSubviews;
- (void)_t1_updateViewsWithProgress:(double)arg1;
- (double)t1_minTableViewHeight;
- (double)t1_maxTableViewHeight;
- (void)_t1_adjustSearchField:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScribeContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
