//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEContentLanguageManager, NSArray, NSString, UITableView;

@interface AWEContentPreferViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTDRouterViewControllerProtocol>
{
    UITableView *_tableView;
    NSArray *_contentLanguageDataSource;
    NSArray *_politicalAccountSettingDataSource;
    AWEContentLanguageManager *_contentLanguageManager;
}

+ (void)__awe__codeRunnerRun_42;
@property(retain, nonatomic) AWEContentLanguageManager *contentLanguageManager; // @synthesize contentLanguageManager=_contentLanguageManager;
@property(retain, nonatomic) NSArray *politicalAccountSettingDataSource; // @synthesize politicalAccountSettingDataSource=_politicalAccountSettingDataSource;
@property(retain, nonatomic) NSArray *contentLanguageDataSource; // @synthesize contentLanguageDataSource=_contentLanguageDataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshTableView:(id)arg1;
- (void)dealloc;
- (void)refreshTable;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetPoliticalAccountSettingDataSource;
- (void)resetDataSource;
- (_Bool)p_shouldShowPoliticalAccountContentSection;
- (_Bool)p_shouldShowContentLanguageSection;
- (id)p_contentLanguageDescriptionModel;
- (id)p_sectionModelWithTitle:(id)arg1;
- (void)backBtnClicked;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
