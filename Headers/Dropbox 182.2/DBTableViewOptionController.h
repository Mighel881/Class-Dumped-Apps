//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "DBNavigationControllerShouldPop-Protocol.h"

@class DBLoadingView, NSArray, NSString;

@interface DBTableViewOptionController : UITableViewController <DBNavigationControllerShouldPop>
{
    DBLoadingView *_dontLeaveLoadingView;
    _Bool _requestPending;
    NSString *_sectionTitle;
    NSArray *_options;
    long long _selectedOption;
}

+ (id)navigationBarTitle;
@property(nonatomic) long long selectedOption; // @synthesize selectedOption=_selectedOption;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic, getter=isRequestPending) _Bool requestPending; // @synthesize requestPending=_requestPending;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)db_updateAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)db_updateOptionDescription;
- (void)db_updateAccessoryForAllCells;
- (void)didSelectOption:(long long)arg1;
- (_Bool)navigationControllerShouldPop:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)db_clearDontLeaveAlertView;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 sectionTitle:(id)arg2 options:(id)arg3 selected:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
