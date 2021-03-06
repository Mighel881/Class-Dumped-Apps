//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchBaseViewController.h"

#import "AWESearchFilterDatasource-Protocol.h"
#import "AWESearchFilterDelegate-Protocol.h"

@class AWESearchFloatingHeaderView, AWESearchMerchandiseManager, NSArray, NSString;

@interface AWESearchMerchandiseViewController : AWESearchBaseViewController <AWESearchFilterDelegate, AWESearchFilterDatasource>
{
    _Bool _isPullToRefresh;
    _Bool _isAscending;
    AWESearchMerchandiseManager *_manager;
    long long _merchandiseSortType;
    NSString *_enterFrom;
    AWESearchFloatingHeaderView *_floatingHeader;
    NSArray *_searchFilterItems;
}

@property(copy, nonatomic) NSArray *searchFilterItems; // @synthesize searchFilterItems=_searchFilterItems;
@property(retain, nonatomic) AWESearchFloatingHeaderView *floatingHeader; // @synthesize floatingHeader=_floatingHeader;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) long long merchandiseSortType; // @synthesize merchandiseSortType=_merchandiseSortType;
@property(nonatomic) _Bool isAscending; // @synthesize isAscending=_isAscending;
@property(nonatomic) _Bool isPullToRefresh; // @synthesize isPullToRefresh=_isPullToRefresh;
@property(retain, nonatomic) AWESearchMerchandiseManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)setAweui_viewControllerState:(unsigned long long)arg1;
- (void)updateFloatingHeaderTop:(double)arg1 animated:(_Bool)arg2;
- (void)loadMoreMerchandise;
- (void)fetchSearchMerchandise;
- (id)tabConfig;
- (void)reset;
- (void)fetchDataWithKeyWord:(id)arg1 enterFrom:(id)arg2 extraLogParams:(id)arg3 isSearchByUserClick:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)filterView:(id)arg1 didFinishedSelectedFilterInSection:(unsigned long long)arg2 status:(_Bool)arg3;
- (void)filterView:(id)arg1 didFinishedSelectedSubItemInSection:(unsigned long long)arg2;
- (void)filterView:(id)arg1 didSelectFilterInSection:(unsigned long long)arg2;
- (id)filterView:(id)arg1 subItemsForFilterInSection:(long long)arg2;
- (id)filterView:(id)arg1 itemForFilterInSection:(long long)arg2;
- (long long)numberOfSectionsInMenuView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)enterMethod;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configureTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

