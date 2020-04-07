//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESearchSugTableViewCellDelegate-Protocol.h"
#import "AWESearchSugViewControllerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWESearchAllManager, AWESearchSugManager, NSDictionary, NSString, UITableView;

@interface AWESearchSugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWESearchSugTableViewCellDelegate, AWESearchSugViewControllerProtocol>
{
    _Bool _whiteStyle;
    CDUnknownBlockType _sugTapBlock;
    CDUnknownBlockType _richSugTapBlock;
    CDUnknownBlockType _sugComplementTapBlock;
    unsigned long long _currentTabType;
    NSString *_enterFrom;
    NSDictionary *_logAdditionParams;
    UITableView *_tableView;
    AWESearchSugManager *_manager;
    AWESearchAllManager *_followManager;
}

+ (id)sugTypeWithModel:(id)arg1;
+ (_Bool)canDisplayRichSug:(id)arg1;
@property(retain, nonatomic) AWESearchAllManager *followManager; // @synthesize followManager=_followManager;
@property(retain, nonatomic) AWESearchSugManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSDictionary *logAdditionParams; // @synthesize logAdditionParams=_logAdditionParams;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) unsigned long long currentTabType; // @synthesize currentTabType=_currentTabType;
@property(nonatomic, getter=isWhiteStyle) _Bool whiteStyle; // @synthesize whiteStyle=_whiteStyle;
@property(copy, nonatomic) CDUnknownBlockType sugComplementTapBlock; // @synthesize sugComplementTapBlock=_sugComplementTapBlock;
@property(copy, nonatomic) CDUnknownBlockType richSugTapBlock; // @synthesize richSugTapBlock=_richSugTapBlock;
@property(copy, nonatomic) CDUnknownBlockType sugTapBlock; // @synthesize sugTapBlock=_sugTapBlock;
- (void).cxx_destruct;
- (id)currentQuery;
- (void)trackSearchSugClickEvent:(id)arg1 withIndex:(long long)arg2;
- (void)trackSearchSugShowEvent:(long long)arg1;
- (void)adjustSecondFloorHeaderHeightWhenHistoryWordsChanged;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)updateFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)unfollowUser:(id)arg1 indexPath:(id)arg2;
- (void)followUser:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchSugTableViewCell:(id)arg1 didDeleteSug:(id)arg2;
- (void)searchSugTableViewCell:(id)arg1 didClickComplement:(id)arg2;
- (_Bool)isOnSearchResult;
- (void)hideSearchSugView;
- (void)fetchSugWithQuery:(id)arg1 tabType:(unsigned long long)arg2;
- (void)configureUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
