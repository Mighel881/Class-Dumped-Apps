//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface AWESearchCitySugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    CDUnknownBlockType _citySelectBlock;
    CDUnknownBlockType _scrollCityBlock;
    UITableView *_tableView;
    NSMutableArray *_sugCities;
}

@property(retain, nonatomic) NSMutableArray *sugCities; // @synthesize sugCities=_sugCities;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType scrollCityBlock; // @synthesize scrollCityBlock=_scrollCityBlock;
@property(copy, nonatomic) CDUnknownBlockType citySelectBlock; // @synthesize citySelectBlock=_citySelectBlock;
- (void).cxx_destruct;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchCitiesToSuggest:(id)arg1 searchText:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
