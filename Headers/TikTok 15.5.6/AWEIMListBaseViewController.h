//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMBaseListTableViewHeaderDelegate-Protocol.h"
#import "AWEIMSearchViewDelegate-Protocol.h"
#import "AWETableViewSectionIndexDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEIMBaseListTableViewHeader, AWEIMSearchEngine, AWEIMSearchView, NSArray, NSMutableArray, NSString, UIColor, UITableView, UIView;
@protocol AWEIMUserListHideTipFooterProtocol;

@interface AWEIMListBaseViewController : UIViewController <AWETableViewSectionIndexDelegate, AWEIMSearchViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, AWEIMBaseListTableViewHeaderDelegate>
{
    _Bool _isMultiSelectMode;
    _Bool _isAuthorShareNotPublicAweme;
    _Bool _isMultiselect;
    _Bool _hasFetchData;
    NSArray *_multiselectItems;
    NSString *_keyword;
    NSArray *_allContacts;
    NSMutableArray *_selectList;
    UIColor *_bgColor;
    NSArray *_searchList;
    NSArray *_sectionTitles;
    NSArray *_sectionData;
    NSMutableArray *_customSectionTypeList;
    UITableView *_tableView;
    AWEIMBaseListTableViewHeader *_tableViewHeader;
    AWEIMSearchView *_searchView;
    AWEIMSearchEngine *_searchEngine;
    UIView<AWEIMUserListHideTipFooterProtocol> *_footerTipView;
}

@property(retain, nonatomic) UIView<AWEIMUserListHideTipFooterProtocol> *footerTipView; // @synthesize footerTipView=_footerTipView;
@property(retain, nonatomic) AWEIMSearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
@property(retain, nonatomic) AWEIMSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) AWEIMBaseListTableViewHeader *tableViewHeader; // @synthesize tableViewHeader=_tableViewHeader;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *customSectionTypeList; // @synthesize customSectionTypeList=_customSectionTypeList;
@property(retain, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *searchList; // @synthesize searchList=_searchList;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool isMultiselect; // @synthesize isMultiselect=_isMultiselect;
@property(retain, nonatomic) NSMutableArray *selectList; // @synthesize selectList=_selectList;
@property(retain, nonatomic) NSArray *allContacts; // @synthesize allContacts=_allContacts;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSArray *multiselectItems; // @synthesize multiselectItems=_multiselectItems;
@property(nonatomic) _Bool isAuthorShareNotPublicAweme; // @synthesize isAuthorShareNotPublicAweme=_isAuthorShareNotPublicAweme;
@property(nonatomic) _Bool isMultiSelectMode; // @synthesize isMultiSelectMode=_isMultiSelectMode;
- (void).cxx_destruct;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (void)tableView:(id)arg1 didSelectIndexViewAtSection:(unsigned long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)didTappedFeatureCell:(id)arg1;
- (void)removeSelectObject:(id)arg1;
- (void)aweui_emptyPageTapped;
- (unsigned long long)p_sectionTypeForSection:(long long)arg1;
- (id)p_customSectionTypeList;
- (void)p_updateHighlightSectionHeader;
- (long long)p_currentSection;
- (void)updateEmpty;
- (void)reloadIndexView;
- (void)p_search:(id)arg1;
- (void)fetchData;
- (_Bool)isNumberFirst:(id)arg1;
- (void)sortedDataArray:(id)arg1 fromArray:(id)arg2;
- (id)sortedFriendContactsFromArray:(id)arg1;
- (void)prepareDataWithAllContacts:(id)arg1 searchList:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)prepareDataWithRecentContacts:(id)arg1 friendContacts:(id)arg2 allContacts:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)p_setupUI;
- (void)p_setupSearchEngine;
- (id)p_lastSectionTitle;
- (_Bool)disableSelectCellIsSelected;
- (void)didTapCellAtIndexPath:(id)arg1;
- (_Bool)canTapCellAtIndexPath:(id)arg1;
- (_Bool)canSelectCellAtIndexPath:(id)arg1;
- (id)getShareModelAtIndexPath:(id)arg1;
- (id)getUserAtIndexPath:(id)arg1;
- (void)changeToMultiselect:(_Bool)arg1;
- (_Bool)isNeedShowUpdateCountForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasRecentSection;
- (id)functionArray;
- (long long)currentFunctin;
- (void)updateMultiselectCount:(long long)arg1;
- (void)tappedFeature:(id)arg1;
- (void)p_updateLayout;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
