//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEStoryEntranceOutterTransitionContextProvider-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEIMNotificationListDataController, NSSet, NSString, UIImageView, UITableView;

@interface AWEIMFansViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEStoryEntranceOutterTransitionContextProvider, AWEUserMessage>
{
    _Bool _hasShownLoading;
    long long _unreadCount;
    NSString *_enterFrom;
    NSString *_ruleId;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    NSSet *_lastVisibleChatSet;
    UIImageView *_clickedAvatarView;
}

@property(retain, nonatomic) UIImageView *clickedAvatarView; // @synthesize clickedAvatarView=_clickedAvatarView;
@property(retain, nonatomic) NSSet *lastVisibleChatSet; // @synthesize lastVisibleChatSet=_lastVisibleChatSet;
@property(nonatomic) _Bool hasShownLoading; // @synthesize hasShownLoading=_hasShownLoading;
@property(retain, nonatomic) AWEIMNotificationListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)p_handleWithUserID:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)didFinishShowOneDayWithUser:(id)arg1 status:(long long)arg2;
- (void)didFinishHideOneDayWithUser:(id)arg1 status:(long long)arg2;
- (id)transitionAvatarView;
- (void)backBtnClicked:(id)arg1;
- (void)p_trackerInnerMessageWithAction:(id)arg1 indexPath:(id)arg2;
- (void)p_enterProfileWith:(id)arg1;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (id)aweui_emptyPageBelowView;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)_dismissEmptyView;
- (void)_showEmptyView;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateLastVisibleSet;
- (void)_endRefreshing;
- (_Bool)cellShowFullScreen;
- (void)_loadMoreDataForFirstLoad:(_Bool)arg1;
- (void)_refreshData;
- (void)_setupUI;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
