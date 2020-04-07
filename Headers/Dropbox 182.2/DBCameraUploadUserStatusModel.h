//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCameraUploadUserStatusModelProtocol-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBModelObjectBinding-Protocol.h"

@class DBCameraUploadManager, DBDbxCameraUploadsStatusSnapshot, DBObserverBlockMap, DBObserverHandle, DBUserState, NSNumber, NSString;
@protocol DBAnalyticsLogger;

@interface DBCameraUploadUserStatusModel : NSObject <DBModelObjectBinding, DBLinkableStateObserverProtocol, DBCameraUploadUserStatusModelProtocol>
{
    DBUserState *_userState;
    DBObserverHandle *_cuStatusSnapshotObserverHandle;
    DBObserverHandle *_cuUserCapabilityObserverHandle;
    DBCameraUploadManager *_cameraUploadManager;
    DBObserverBlockMap *_cuStatusChangedObservers;
    DBDbxCameraUploadsStatusSnapshot *_statusSnapshot;
    id <DBAnalyticsLogger> _analyticsLogger;
    _Bool _shouldShowStatusBarInHome;
    _Bool _shouldShowEnableBannerInHome;
    _Bool _shouldShowUpsellBannerInHome;
    _Bool _shouldShowAdminDisabledBannerInHome;
    _Bool _shouldShowStartFromBannerInHome;
    NSString *_modelObjectId;
    NSString *_title;
}

@property(readonly, nonatomic) _Bool shouldShowStartFromBannerInHome; // @synthesize shouldShowStartFromBannerInHome=_shouldShowStartFromBannerInHome;
@property(readonly, nonatomic) _Bool shouldShowAdminDisabledBannerInHome; // @synthesize shouldShowAdminDisabledBannerInHome=_shouldShowAdminDisabledBannerInHome;
@property(readonly, nonatomic) _Bool shouldShowUpsellBannerInHome; // @synthesize shouldShowUpsellBannerInHome=_shouldShowUpsellBannerInHome;
@property(readonly, nonatomic) _Bool shouldShowEnableBannerInHome; // @synthesize shouldShowEnableBannerInHome=_shouldShowEnableBannerInHome;
@property(readonly, nonatomic) _Bool shouldShowStatusBarInHome; // @synthesize shouldShowStatusBarInHome=_shouldShowStatusBarInHome;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *modelObjectId; // @synthesize modelObjectId=_modelObjectId;
- (void).cxx_destruct;
- (void)db_stopObserving;
- (void)loadThumbnailWithLocalId:(id)arg1 withSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)db_refreshCuUserStatusAndNotify;
- (void)db_refreshWithNewSnapshot:(id)arg1;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasMultipleVersionFiles;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) int currentUpload;
@property(readonly, nonatomic) NSNumber *uploadProgress;
@property(readonly, nonatomic) NSNumber *currentUploadFileSize;
@property(readonly, nonatomic) NSString *currentUploadId;
@property(readonly, nonatomic) int numPhotosWithSyncErrors;
@property(readonly, nonatomic) int numQueuedVideoUploads;
@property(readonly, nonatomic) int numUserPendingUploads;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) _Bool shouldShowConfirmTranscodeSettingBannerInHome;
@property(readonly, nonatomic) _Bool userCanEnableCameraUploads;
@property(readonly, nonatomic) _Bool userCanUpgrade;
- (void)dismissCameraUploadStatusIndicator;
- (void)dismissStartFromBanner;
- (void)dismissAdminDisabledBanner;
- (void)dismissCUPromoBanner;
- (id)addObserverWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUserState:(id)arg1 cameraUploadManager:(id)arg2;
- (id)contentViewObjectWithModelContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
