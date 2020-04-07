//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESettingBaseViewModel.h"

@class AWEAccountManager, AWEBindSettingsResponse, NSArray;

@interface AWEAccountBindingViewModel : AWESettingBaseViewModel
{
    NSArray *_sectionDataArray;
    AWEAccountManager *_accountManager;
    AWEBindSettingsResponse *_bindSettings;
}

@property(retain) AWEBindSettingsResponse *bindSettings; // @synthesize bindSettings=_bindSettings;
@property(retain, nonatomic) AWEAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)setSectionDataArray:(id)arg1;
- (void).cxx_destruct;
- (void)_handleError:(id)arg1 isForBind:(_Bool)arg2 platform:(unsigned long long)arg3;
- (void)bindWithThirdPartyPlatformType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2 autoSyncToutiao:(_Bool)arg3;
- (void)enterBindPhoneView;
- (void)tapUnBindedThirdPlatformCell:(unsigned long long)arg1;
- (void)tapBindedThirdPlatformCell:(unsigned long long)arg1;
- (void)thirdBindTappedWithType:(unsigned long long)arg1;
- (_Bool)skipAndShowToastIfNeeded:(unsigned long long)arg1;
- (_Bool)canBindWithPlatform:(unsigned long long)arg1 errorMsg:(id *)arg2;
- (void)trackThirdPlatformClickWithPlatformType:(unsigned long long)arg1;
- (id)_platformTitleWithBindType:(unsigned long long)arg1;
- (id)_platformNameWithBindType:(unsigned long long)arg1;
- (void)handleThirdAccount:(unsigned long long)arg1 isBinded:(_Bool)arg2;
- (void)stopSyncToHuoshan;
- (void)syncToHuoshan;
- (void)configToutiaoSyncItem:(id)arg1 isOn:(_Bool)arg2;
- (void)updateSyncToToutiaoSetting:(_Bool)arg1;
- (void)turnOffSwitch;
- (void)switchHuoshanSync:(_Bool)arg1;
- (void)switchToutiaoSync:(_Bool)arg1;
- (void)tapFlipChatBindingCell;
- (void)tapToutiaoBindingCell;
- (void)tapWeiboBingdingCell;
- (void)tapQQBindingCell;
- (void)tapAppleBindingCell;
- (void)tapWechatBindingCell;
- (id)sectionDataArray;
- (void)trackFlipChatAuthorizeResult:(id)arg1;
- (void)trackFlipChatAuthorizeClick;
- (void)refresh;
- (void)fetchSettings;
- (void)syncUser;
- (void)viewDidLoad;
- (unsigned long long)__AWEAccountUtilsContext__;

@end
