//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBTableViewController.h"

#import "CUBackgroundUploadingTourViewControllerDelegate-Protocol.h"
#import "DBBannerViewAnimationSupporting-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "ZSWTappableLabelTapDelegate-Protocol.h"

@class DBAlertBannerView, DBCameraUploadManager, DBDbxCameraUploadsStatusSnapshot, DBObserverHandle, DBTranscodeOptionTableViewFooterView, DBUserState, NSString, UISwitch;
@protocol DBAnalyticsLogger;

@interface DBCameraUploadSettingsTableViewController : DBTableViewController <UITableViewDelegate, UITableViewDataSource, CUBackgroundUploadingTourViewControllerDelegate, DBLinkableStateObserverProtocol, ZSWTappableLabelTapDelegate, DBBannerViewAnimationSupporting>
{
    UISwitch *_cameraUploadEnabledSwitch;
    UISwitch *_uploadVideosSwitch;
    UISwitch *_uploadUsingCellNetworkSwitch;
    UISwitch *_uploadVideosUsingCellNetworkSwitch;
    UISwitch *_autoUploadUsingLocationSwitch;
    DBTranscodeOptionTableViewFooterView *_transcodeFooter;
    DBCameraUploadManager *_cameraUploadsManager;
    id <DBAnalyticsLogger> _analyticsLogger;
    DBUserState *_userState;
    DBObserverHandle *_cuSnapshotObserver;
    DBDbxCameraUploadsStatusSnapshot *_cuSnapshot;
    DBAlertBannerView *_transcodeBannerView;
    _Bool _isShownAsModal;
}

+ (id)db_settingsViewControllerForUserState:(id)arg1 showAsModal:(_Bool)arg2;
+ (void)presentCameraUploadSettingsWithUserState:(id)arg1 inNavigationController:(id)arg2;
+ (void)presentCameraUploadSettingsAsModalWithUserState:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldAnimateBannerView;
- (void)tappableLabel:(id)arg1 tappedAtIndex:(long long)arg2 withAttributes:(id)arg3;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)db_dateForNewPhotosOnlyText;
- (id)db_cameraUploadStartCellAtIndexPath:(id)arg1;
- (id)db_cameraUploadTranscodeSectionCellAtIndexPath:(id)arg1;
- (void)db_dismissTour:(id)arg1;
- (id)db_cuBackgroundUploadingTourNavigationController;
- (void)cuBackgroundUploadingTourViewControllerDidDismissTour:(id)arg1;
- (int)db_cameraUploadSettingsSectionFromSection:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)db_cameraUploadVideoUploadsEnabledSectionMessage;
- (id)db_camearUploadsEnableSectionMessageWhenNotEnabledForAnyUser;
- (id)db_cameraUploadsEnableSectionMessageWhenEnabledForThisUser;
- (id)db_cameraUploadsEnableSectionMessageWhenEnabledForOtherUser;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)db_didTapDoneButton;
- (void)db_initRightNavigationItem;
- (id)db_footerForTranscodeSection;
- (void)db_selectStartFromRow:(long long)arg1 inSection:(long long)arg2;
- (void)db_selectTranscodeRow:(int)arg1;
- (int)db_getSectionForTranscodeCell;
- (_Bool)db_shouldShowTranscodingSection;
- (_Bool)db_canEnableCameraUploadStartFromSetting;
- (_Bool)db_hasUserChosenTranscodeHeicSetting;
- (void)db_autoUploadUsingLocationSwitchChanged:(id)arg1;
- (void)db_uploadVideosUsingCellNetworkSwitchChanged:(id)arg1;
- (void)db_uploadUsingCellNetworkSwitchChanged:(id)arg1;
- (void)db_uploadVideosSwitchChanged:(id)arg1;
- (void)db_cameraUploadEnabledSwitchChanged:(id)arg1;
- (void)db_deleteUploadOptionSections;
- (void)db_insertUploadOptionSections;
- (void)db_appDidBecomeActive;
- (void)db_backgroundUploadSettingsChanged;
- (void)db_turnOffLocationUploadIfAuthorizationStatusIsDenied;
- (void)viewWillLayoutSubviews;
- (void)db_needTranscodeSettingBannerTapped;
- (void)db_updateBannerView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)db_clearUserState;
- (void)dealloc;
- (id)initWithUserState:(id)arg1 withCameraUploadsManager:(id)arg2 showAsModal:(_Bool)arg3;
- (id)initWithUserState:(id)arg1 withCameraUploadsManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
