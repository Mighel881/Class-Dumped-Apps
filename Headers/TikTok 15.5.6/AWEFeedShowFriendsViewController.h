//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFeedShowFriendsHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAliasAlertView, AWEFeedShowFriendsHeaderView, NSMutableArray, NSObject, NSString, UITableView, UIView;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEFeedShowFriendsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEFeedShowFriendsHeaderViewDelegate>
{
    _Bool _needReload;
    _Bool _isSearching;
    _Bool _searchtracked;
    _Bool _clickSearchtracked;
    _Bool _isTyping;
    UIView *_clickedAvatar;
    NSString *_enterFrom;
    NSMutableArray *_friendsList;
    UITableView *_tableView;
    AWEFeedShowFriendsHeaderView *_headerView;
    AWEAliasAlertView *_aliasAlertView;
    NSObject<AWEContactLocalSearchManagerProtocol> *_searchManager;
}

@property(nonatomic) _Bool isTyping; // @synthesize isTyping=_isTyping;
@property(nonatomic) _Bool clickSearchtracked; // @synthesize clickSearchtracked=_clickSearchtracked;
@property(nonatomic) _Bool searchtracked; // @synthesize searchtracked=_searchtracked;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) AWEAliasAlertView *aliasAlertView; // @synthesize aliasAlertView=_aliasAlertView;
@property(retain, nonatomic) AWEFeedShowFriendsHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *friendsList; // @synthesize friendsList=_friendsList;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) __weak UIView *clickedAvatar; // @synthesize clickedAvatar=_clickedAvatar;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)checkEnableShowEditTitle;
- (double)headerViewHeightWhileEditing:(_Bool)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 needReload:(_Bool)arg2;
- (void)searchTextDidChange:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)trackEditRemarks:(id)arg1;
- (void)createEditAliasViewWithUser:(id)arg1 indexPath:(id)arg2;
- (void)dismissAliasAlertView;
- (void)editIconClicked;
- (void)finishIconClicked;
- (void)trackEnterPersonalDetailWithUserID:(id)arg1;
- (id)userIDWithModel:(id)arg1;
- (id)modelForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewDataSource;
- (_Bool)isNumberFirst:(id)arg1;
- (void)sortedDataFromArray:(id)arg1;
- (void)constructFriendsListFromArray:(id)arg1;
- (void)loadMoreFriends;
- (void)fetchFriends;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

