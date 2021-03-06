//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCollectionLayoutViewController.h"

#import "HMEFullWidthSectionLayoutDelegate-Protocol.h"
#import "HMESectionedCollectionViewLayoutDelegate-Protocol.h"

@class HMEModel, HMEStatusViewController, NSString;
@protocol HMEDevicePickerViewControllerDelegate;

@interface HMEDevicePickerViewController : HMESetupCollectionLayoutViewController <HMESectionedCollectionViewLayoutDelegate, HMEFullWidthSectionLayoutDelegate>
{
    _Bool _allowsMultipleSelection;
    _Bool _waitForDeviceScan;
    _Bool _visible;
    NSString *_headerTitle;
    id <HMEDevicePickerViewControllerDelegate> _delegate;
    HMEModel *_selectedDevicesModel;
    HMEModel *_unselectedDevicesModel;
    HMEStatusViewController *_statusViewController;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) HMEStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(readonly, nonatomic) _Bool waitForDeviceScan; // @synthesize waitForDeviceScan=_waitForDeviceScan;
@property(readonly, nonatomic) HMEModel *unselectedDevicesModel; // @synthesize unselectedDevicesModel=_unselectedDevicesModel;
@property(readonly, nonatomic) HMEModel *selectedDevicesModel; // @synthesize selectedDevicesModel=_selectedDevicesModel;
@property(nonatomic) __weak id <HMEDevicePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)updateNextButton;
- (_Bool)shouldEnableNextButton;
- (void)didTapNextButton;
- (void)snapshotDevicesFromModel;
- (void)setEmptyView;
- (_Bool)collectionView:(id)arg1 hidesInkViewAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
@property(copy, nonatomic) NSString *unselectedDevicesTitle;
@property(copy, nonatomic) NSString *selectedDevicesTitle;
- (id)devicePickerModel;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateCollectionViewLayout;
- (void)updateHeaderViewTitle;
- (void)updateMultipleSelection;
- (id)initWithDeviceModel:(id)arg1;
- (id)initWithDeviceModel:(id)arg1 waitForDeviceScan:(_Bool)arg2;
- (id)initWithSelectedDeviceModel:(id)arg1 unselectedDeviceModel:(id)arg2;
- (id)initWithSelectedDeviceModel:(id)arg1 unselectedDeviceModel:(id)arg2 waitForDeviceScan:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

