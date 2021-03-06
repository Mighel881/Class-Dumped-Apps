//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMERoomPickerViewControllerDelegate-Protocol.h"
#import "HMESpaceNameViewControllerDelegate-Protocol.h"

@class GHCDeviceId, HMEWaitingViewController, NSString, UIViewController;
@protocol HMECoordinatorNavigationDelegate, HMEDeviceData, HMESpaceData;

@interface HMERoomPickerCoordinator : NSObject <HMERoomPickerViewControllerDelegate, HMESpaceNameViewControllerDelegate>
{
    GHCDeviceId *_deviceID;
    id <HMECoordinatorNavigationDelegate> _navigationDelegate;
    UIViewController *_rootViewController;
    NSString *_currentStructureServerID;
    id <HMEDeviceData> _deviceData;
    id <HMESpaceData> _spaceData;
    UIViewController *_modal;
    HMEWaitingViewController *_waitingViewController;
}

@property(retain, nonatomic) HMEWaitingViewController *waitingViewController; // @synthesize waitingViewController=_waitingViewController;
@property(retain, nonatomic) UIViewController *modal; // @synthesize modal=_modal;
@property(readonly, nonatomic) id <HMESpaceData> spaceData; // @synthesize spaceData=_spaceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, copy, nonatomic) NSString *currentStructureServerID; // @synthesize currentStructureServerID=_currentStructureServerID;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <HMECoordinatorNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(copy, nonatomic) GHCDeviceId *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)showSnackBar:(id)arg1;
- (void)createSpaceAndAssignDeviceWithSpaceDisplayName:(id)arg1 spaceTypeID:(id)arg2 from:(id)arg3;
- (void)moveDeviceToExistingSpace:(id)arg1 from:(id)arg2;
- (id)operationFailedText;
- (id)savingInProgressText;
- (id)deviceWithID:(id)arg1;
- (void)spaceNameViewControllerDidCancelChooseSpaceName:(id)arg1;
- (void)spaceNameViewController:(id)arg1 shouldCreateSpaceName:(id)arg2 withSpaceTypeId:(id)arg3;
- (id)preselectedSpace;
- (void)roomPickerViewController:(id)arg1 customizeSpaceOfSpaceType:(id)arg2;
- (_Bool)roomPickerViewController:(id)arg1 shouldCustomizeSpaceNameForSpaceType:(id)arg2;
- (void)roomPickerViewController:(id)arg1 didChooseSpaceType:(id)arg2;
- (void)roomPickerViewController:(id)arg1 didChooseExistingSpace:(id)arg2;
- (void)showRoomPicker;
- (id)initWithStructureID:(id)arg1 spaceData:(id)arg2 deviceData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

