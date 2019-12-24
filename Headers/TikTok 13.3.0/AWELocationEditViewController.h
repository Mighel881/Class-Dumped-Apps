//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWELocationEditResult, AWELocationServicePersistModel, AWEProfileLocationSegment, AWESettingsTableViewCell, NSArray, NSDictionary, NSMutableArray, NSString, UITableView, UITableViewCell;

@interface AWELocationEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _needCurrentLocation;
    _Bool _isInitial;
    _Bool _isFromH5;
    NSArray *_locationSegments;
    AWELocationEditResult *_editResult;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _hideBlock;
    UITableView *_tableView;
    AWESettingsTableViewCell *_hideLocationCell;
    UITableViewCell *_currentLocationHeaderCell;
    AWESettingsTableViewCell *_currentLocationCell;
    UITableViewCell *_otherLocationCell;
    UITableViewCell *_emptyCell;
    NSMutableArray *_cellArray;
    NSArray *_sectionTitles;
    NSDictionary *_sections;
    AWEProfileLocationSegment *_previousSelectedSegment;
    AWELocationServicePersistModel *_placemark;
}

@property(nonatomic) _Bool isFromH5; // @synthesize isFromH5=_isFromH5;
@property(retain, nonatomic) AWELocationServicePersistModel *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) AWEProfileLocationSegment *previousSelectedSegment; // @synthesize previousSelectedSegment=_previousSelectedSegment;
@property(retain, nonatomic) NSDictionary *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UITableViewCell *emptyCell; // @synthesize emptyCell=_emptyCell;
@property(retain, nonatomic) UITableViewCell *otherLocationCell; // @synthesize otherLocationCell=_otherLocationCell;
@property(retain, nonatomic) AWESettingsTableViewCell *currentLocationCell; // @synthesize currentLocationCell=_currentLocationCell;
@property(retain, nonatomic) UITableViewCell *currentLocationHeaderCell; // @synthesize currentLocationHeaderCell=_currentLocationHeaderCell;
@property(retain, nonatomic) AWESettingsTableViewCell *hideLocationCell; // @synthesize hideLocationCell=_hideLocationCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AWELocationEditResult *editResult; // @synthesize editResult=_editResult;
@property(retain, nonatomic) NSArray *locationSegments; // @synthesize locationSegments=_locationSegments;
@property(nonatomic) _Bool isInitial; // @synthesize isInitial=_isInitial;
@property(nonatomic) _Bool needCurrentLocation; // @synthesize needCurrentLocation=_needCurrentLocation;
- (void).cxx_destruct;
- (void)popAllLocationEditViewController;
- (void)clearEditResultWithLocationSegment:(id)arg1;
- (void)configEditResultWithLocationSegment:(id)arg1;
- (void)generateSections;
- (id)getLocationSegmentWithIndexPath:(id)arg1;
- (_Bool)hasLocationPermission;
- (void)configCurrentLocationLabelWithPlacemark:(id)arg1;
- (void)configEditResult:(id)arg1 withPlacemark:(id)arg2;
- (void)getCurrentPlacemarkWitchCompletion:(CDUnknownBlockType)arg1;
- (void)selectHideLocation;
- (void)selectCurrentLocation;
- (void)back;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_setupUI;
- (void)didReceiveMemoryWarning;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initFromH5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
