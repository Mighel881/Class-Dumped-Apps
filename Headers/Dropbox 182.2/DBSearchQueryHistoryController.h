//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBSearchQueryHistoryObserverProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DBSearchQueryHistoryDataProvider, DBUserState, NSLayoutConstraint, NSString, UITableView;
@protocol DBSearchQueryHistoryControllerDelegate;

@interface DBSearchQueryHistoryController : UIViewController <UITableViewDelegate, UITableViewDataSource, DBSearchQueryHistoryObserverProtocol, DBLinkableStateObserverProtocol>
{
    NSString *_currentQuery;
    DBUserState *_userState;
    UITableView *_searchQueryHistoryUnderlayTableView;
    DBSearchQueryHistoryDataProvider *_searchQueryHistoryDataProvider;
    id <DBSearchQueryHistoryControllerDelegate> _delegate;
    NSLayoutConstraint *_viewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *viewHeightConstraint; // @synthesize viewHeightConstraint=_viewHeightConstraint;
@property(nonatomic) __weak id <DBSearchQueryHistoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)db_testUnderlayTableView;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearSearchHistoryRequestedByUserState:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(nonatomic, getter=isVisible) _Bool visible;
- (void)updateFrameHeightToContent;
- (void)db_loadSearchQueryHistoryDataAndUpdateView;
- (void)saveCurrentQuery;
- (void)updateToQuery:(id)arg1;
- (id)db_searchQueries;
@property(readonly, nonatomic) _Bool hasDataToShow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)db_setupTableView;
- (void)dealloc;
- (id)initWithUserState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
