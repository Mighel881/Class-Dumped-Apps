//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESearchMiddleProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AWEFeedSearchMiddleNavView, AWESearchMiddleViewController, NSString;

@interface AWEFeedSearchMiddleViewController : UIViewController <UISearchBarDelegate, AWESearchMiddleProtocol>
{
    AWEFeedSearchMiddleNavView *_navView;
    AWESearchMiddleViewController *_searchMiddleViewController;
    NSString *_opDefaultWord;
    NSString *_opSearchWord;
    NSString *_wordID;
    NSString *_enterFrom;
}

@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
@property(copy, nonatomic) NSString *opSearchWord; // @synthesize opSearchWord=_opSearchWord;
@property(copy, nonatomic) NSString *opDefaultWord; // @synthesize opDefaultWord=_opDefaultWord;
@property(retain, nonatomic) AWESearchMiddleViewController *searchMiddleViewController; // @synthesize searchMiddleViewController=_searchMiddleViewController;
@property(retain, nonatomic) AWEFeedSearchMiddleNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (_Bool)isHotSearch;
- (_Bool)isGuessWord;
- (_Bool)isOldHotSearchWord;
- (_Bool)isOldGuessWord;
- (_Bool)isOldIrregularWordStyle;
- (_Bool)isDoubleColumnGuessWord;
- (_Bool)isDoubleColumnHotSearch;
- (void)cancelButtonTapped;
- (void)excuteSearch:(id)arg1 enterFrom:(id)arg2;
- (void)suggestWordComplementDidTapped:(id)arg1;
- (void)suggestWordDidTapped:(id)arg1;
- (void)hotSearchWordDidTapped:(id)arg1 displayWord:(id)arg2;
- (void)historyWordDidTapped:(id)arg1;
- (void)refreshDefaultWord:(id)arg1 searchWord:(id)arg2 wordID:(id)arg3;
- (_Bool)MTHasGuessWord;
- (void)showSugAnimationWithText:(id)arg1;
- (_Bool)showSearchSug;
- (void)hideSugAnimation;
- (void)hideCancelButtonAnimation;
- (void)showCancelButtonAnimation;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEnterFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
