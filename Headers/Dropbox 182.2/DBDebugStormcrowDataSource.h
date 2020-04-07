//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol _TtP33dbx_core_stormcrow_protocol_swift32DBLegacyDebugOverridesRepository_;

@interface DBDebugStormcrowDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    id <_TtP33dbx_core_stormcrow_protocol_swift32DBLegacyDebugOverridesRepository_> _stormcrow;
    CDUnknownBlockType _didUpdateBlock;
    CDUnknownBlockType _didScrollOrTapBlock;
    NSString *_filterString;
    NSArray *_features;
}

+ (void)db_showServerRequestFailedAlertWithDidDismissBlock:(CDUnknownBlockType)arg1;
+ (void)db_refreshStormcrow:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned long long)db_settingsRowFromRowIndex:(long long)arg1;
+ (unsigned long long)db_sectionTypeFromSectionIndex:(long long)arg1;
+ (id)db_featuresFromStormcrow:(id)arg1 filterString:(id)arg2;
- (void).cxx_destruct;
- (CDUnknownBlockType)db_blockActionForUnsettingOverrideForFeature:(id)arg1 didDismissBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)db_blockActionForOverridingFeature:(id)arg1 withVariant:(id)arg2 didDismissBlock:(CDUnknownBlockType)arg3;
- (void)db_showVariantInputAlertForOverridingFeature:(id)arg1 didDismissBlock:(CDUnknownBlockType)arg2;
- (void)db_presentAlertControllerForFeature:(id)arg1 sourceView:(id)arg2 didDismissBlock:(CDUnknownBlockType)arg3;
- (void)db_didSelectFeatureRowInTableView:(id)arg1 indexPath:(id)arg2;
- (void)db_didSelectSettingsRowInTableView:(id)arg1 indexPath:(id)arg2;
- (void)updateFilterString:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)db_featureCellForTableView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)db_didUpdateEnableSwitch:(id)arg1;
- (id)db_currentStormcrowVersionCellForTableView:(id)arg1;
- (id)db_enableCellForTableView:(id)arg1;
- (id)db_refreshCellForTableView:(id)arg1;
- (id)db_settingsCellForTableView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)db_reloadAndInvokeDidUpdate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithStormcrow:(id)arg1 didUpdateBlock:(CDUnknownBlockType)arg2 didScrollOrTapBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
