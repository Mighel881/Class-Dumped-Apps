//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESearchMiddleProtocol-Protocol.h"
#import "AWETiktokDiscoverV4ViewControllerProtocol-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AWEDiscoverNavView, AWEHotSearchManager, AWESearchMiddleViewController, AWETiktokDiscoverV4MultiFeedViewController, AWETiktokDiscoverV4TopicViewController, NSString;

@interface AWETiktokDiscoverV4ViewController : UIViewController <BTDRouterViewControllerProtocol, UISearchBarDelegate, AWESearchMiddleProtocol, AWETiktokDiscoverV4ViewControllerProtocol>
{
    _Bool _shouldRefreshDefaultWordManually;
    _Bool _searching;
    AWEDiscoverNavView *_navView;
    AWESearchMiddleViewController *_searchMiddleViewController;
    AWETiktokDiscoverV4TopicViewController *_topicViewController;
    AWETiktokDiscoverV4MultiFeedViewController *_multiFeedViewController;
    AWEHotSearchManager *_hotSearchManager;
    NSString *_opDefaultWord;
    NSString *_opSearchWord;
    NSString *_wordID;
    long long _type;
}

+ (void)__awe__codeRunnerRun_61;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldRefreshDefaultWordManually; // @synthesize shouldRefreshDefaultWordManually=_shouldRefreshDefaultWordManually;
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
@property(copy, nonatomic) NSString *opSearchWord; // @synthesize opSearchWord=_opSearchWord;
@property(copy, nonatomic) NSString *opDefaultWord; // @synthesize opDefaultWord=_opDefaultWord;
@property(retain, nonatomic) AWEHotSearchManager *hotSearchManager; // @synthesize hotSearchManager=_hotSearchManager;
@property(retain, nonatomic) AWETiktokDiscoverV4MultiFeedViewController *multiFeedViewController; // @synthesize multiFeedViewController=_multiFeedViewController;
@property(retain, nonatomic) AWETiktokDiscoverV4TopicViewController *topicViewController; // @synthesize topicViewController=_topicViewController;
@property(retain, nonatomic) AWESearchMiddleViewController *searchMiddleViewController; // @synthesize searchMiddleViewController=_searchMiddleViewController;
@property(retain, nonatomic) AWEDiscoverNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)showSugAnimationWithText:(id)arg1;
- (void)hideSugAnimation;
- (void)hideCancelButtonAnimation;
- (void)showCancelButtonAnimation;
- (void)suggestWordComplementDidTapped:(id)arg1;
- (void)suggestWordDidTapped:(id)arg1;
- (void)hotSearchWordDidTapped:(id)arg1 displayWord:(id)arg2;
- (void)historyWordDidTapped:(id)arg1;
- (void)refreshDefaultWord:(id)arg1 searchWord:(id)arg2 wordID:(id)arg3;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)excuteSearch:(id)arg1 enterFrom:(id)arg2;
- (void)cancelButtonTapped;
- (void)scanButtonTapped;
- (void)updateTranslate;
- (void)refreshAll;
- (void)_setupUI;
- (_Bool)MTHasGuessWord;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)addPageMonitor;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
