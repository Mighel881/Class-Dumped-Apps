//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEHotPointPanelControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView, UIView;
@protocol AWEHotPointPanelControllerDelegate;

@interface AWEHotPointPanelTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEHotPointPanelControllerProtocol>
{
    _Bool _isNearByStyle;
    _Bool _shouldShowRecommendHotWords;
    NSString *_referString;
    NSString *_previousPage;
    id <AWEHotPointPanelControllerDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_hotPointModels;
    NSString *_currentWord;
    long long _currentIndex;
    UIView *_lineView;
    UIView *_headerView;
    UILabel *_risingHotSpotLabel;
    NSArray *_risingHotSpotList;
    long long _currentSection;
}

@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(copy, nonatomic) NSArray *risingHotSpotList; // @synthesize risingHotSpotList=_risingHotSpotList;
@property(retain, nonatomic) UILabel *risingHotSpotLabel; // @synthesize risingHotSpotLabel=_risingHotSpotLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSString *currentWord; // @synthesize currentWord=_currentWord;
@property(copy, nonatomic) NSArray *hotPointModels; // @synthesize hotPointModels=_hotPointModels;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldShowRecommendHotWords; // @synthesize shouldShowRecommendHotWords=_shouldShowRecommendHotWords;
@property(nonatomic) __weak id <AWEHotPointPanelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNearByStyle; // @synthesize isNearByStyle=_isNearByStyle;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;
- (void)trackTrendingWordsForEvent:(id)arg1 searchModel:(id)arg2 indexPath:(id)arg3;
- (void)trackTrendingTopicForEvent:(id)arg1 searchModel:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetTrackedState;
- (id)scrollView;
- (double)viewHeight;
- (void)scrollToKeyword:(id)arg1;
- (void)refreshWithData:(id)arg1 risingHotSpotList:(id)arg2 currentWord:(id)arg3 isDefault:(_Bool)arg4;
- (void)configureUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
