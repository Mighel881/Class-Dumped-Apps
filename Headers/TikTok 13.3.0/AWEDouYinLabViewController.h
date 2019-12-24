//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEDouYinLabViewControllerDataManager, NSMutableSet, NSString, UILabel, UITableView, UIView;

@interface AWEDouYinLabViewController : UIViewController <TTTAttributedLabelDelegate, UITableViewDelegate, UITableViewDataSource, BTDRouterViewControllerProtocol>
{
    UITableView *_tableView;
    UIView *_headerView;
    UIView *_emptyTipView;
    UILabel *_emptyTipLabel;
    AWEDouYinLabViewControllerDataManager *_dataManager;
    NSMutableSet *_hasTrackedCellIndexPathSet;
}

+ (void)__awe__codeRunnerRun_39;
@property(retain, nonatomic) NSMutableSet *hasTrackedCellIndexPathSet; // @synthesize hasTrackedCellIndexPathSet=_hasTrackedCellIndexPathSet;
@property(retain, nonatomic) AWEDouYinLabViewControllerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UIView *emptyTipView; // @synthesize emptyTipView=_emptyTipView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)backBtnClick:(id)arg1;
- (id)userProtocolLabelWithUrl:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)settingUI;
- (void)fetchData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
