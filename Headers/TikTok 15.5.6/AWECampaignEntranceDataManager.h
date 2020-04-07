//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAppAwemeSettingMessage-Protocol.h"
#import "AWECampaignEntranceDataManagerProtocol-Protocol.h"

@class AWEAwemeModel, AWECampaignEntranceModel, AWECampaignFeedPendantModel, AWECampaignLoginBannerModel, AWECampaignPopupWindowModel, AWECampaignProfileActivityModel, AWECampaignProfileTabbarModel, AWESecureArchiveDownloader, NSBundle, NSMutableDictionary, NSString;

@interface AWECampaignEntranceDataManager : NSObject <AWEAppAwemeSettingMessage, AWECampaignEntranceDataManagerProtocol>
{
    _Bool _visitedActivityPageInCurrentLaunch;
    AWECampaignFeedPendantModel *_feedPendantModel;
    AWECampaignProfileTabbarModel *_profileTabbarModel;
    AWECampaignLoginBannerModel *_loginBannerModel;
    AWECampaignPopupWindowModel *_popupWindowModel;
    AWECampaignProfileActivityModel *_profileActivityModel;
    NSMutableDictionary *_imagesToDataDictonary;
    AWECampaignEntranceModel *_entranceModel;
    AWESecureArchiveDownloader *_downloader;
    NSBundle *_remoteResourcesBundle;
    AWEAwemeModel *_currentAweme;
}

+ (id)getCurrentUserKeyWith:(id)arg1;
+ (void)recordFinshVVWithAwemeModel:(id)arg1;
+ (void)showWebPage;
+ (void)dismissRewardNotificationIfNeeded;
+ (_Bool)shouldRewardNotificationShow;
+ (_Bool)isRewardButtonVisiable;
+ (id)fragmentsConfigSetting;
+ (id)campaignSetting;
+ (_Bool)isMatchingCampaignName:(id)arg1;
+ (_Bool)isFragmentCampaignEnabled;
+ (_Bool)showForAll;
+ (id)googleCampaignName;
+ (id)activityID;
+ (_Bool)isNewUser;
+ (_Bool)isCampaignEnabled;
+ (id)sharedInstance;
@property(retain, nonatomic) AWEAwemeModel *currentAweme; // @synthesize currentAweme=_currentAweme;
@property(retain, nonatomic) NSBundle *remoteResourcesBundle; // @synthesize remoteResourcesBundle=_remoteResourcesBundle;
@property(retain, nonatomic) AWESecureArchiveDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) AWECampaignEntranceModel *entranceModel; // @synthesize entranceModel=_entranceModel;
@property(retain, nonatomic) NSMutableDictionary *imagesToDataDictonary; // @synthesize imagesToDataDictonary=_imagesToDataDictonary;
@property(nonatomic) _Bool visitedActivityPageInCurrentLaunch; // @synthesize visitedActivityPageInCurrentLaunch=_visitedActivityPageInCurrentLaunch;
@property(retain, nonatomic) AWECampaignProfileActivityModel *profileActivityModel; // @synthesize profileActivityModel=_profileActivityModel;
@property(retain, nonatomic) AWECampaignPopupWindowModel *popupWindowModel; // @synthesize popupWindowModel=_popupWindowModel;
@property(retain, nonatomic) AWECampaignLoginBannerModel *loginBannerModel; // @synthesize loginBannerModel=_loginBannerModel;
@property(retain, nonatomic) AWECampaignProfileTabbarModel *profileTabbarModel; // @synthesize profileTabbarModel=_profileTabbarModel;
@property(retain, nonatomic) AWECampaignFeedPendantModel *feedPendantModel; // @synthesize feedPendantModel=_feedPendantModel;
- (void).cxx_destruct;
- (id)fragmentsPNGImagesWithPrefix:(id)arg1;
- (id)lottieNamed:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 bundle:(id *)arg3;
- (void)_recordEnteredActivityPageDate:(id)arg1 activityID:(id)arg2;
- (void)feedTableViewControllerWillPlayAweme:(id)arg1;
- (void)handleBroadcastNotification:(id)arg1;
- (id)fragmentsRequiredVideoNumList;
- (id)getCompaignTasks;
- (void)awemeSettingDidChange;
- (void)handleDataWithSetting:(id)arg1;
- (_Bool)enableProfileActivityModel;
- (_Bool)enableProfileTabbarModel;
- (_Bool)enablePopupWindowModel;
- (_Bool)enableLoginBannerModel;
- (_Bool)enableFeedPendantModel;
- (void)upgradeToFullModels;
- (void)setupPartialModels;
- (void)updateImageToModelDic;
- (id)fetchImageModelWithImageName:(id)arg1;
- (void)setupLottieReadyWithResourcePath:(id)arg1;
- (void)downloadFragmentsPNGsIfNeeded;
- (void)downloadLottieJsonFile;
- (void)downloadResource;
- (void)cleanRootFolder;
- (void)setupRootFolder;
- (void)dealloc;
- (void)startObserveCampaignSettings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
