//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMENetworkModel.h"

@class NSString, UIViewController;

@interface HMESettingsDataModel : HMENetworkModel
{
    UIViewController *viewController;
    NSString *_settingsTitle;
    long long _bannerViewStyle;
}

@property(readonly, nonatomic) long long bannerViewStyle; // @synthesize bannerViewStyle=_bannerViewStyle;
@property(readonly, copy, nonatomic) NSString *settingsTitle; // @synthesize settingsTitle=_settingsTitle;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController;
- (void).cxx_destruct;

@end

