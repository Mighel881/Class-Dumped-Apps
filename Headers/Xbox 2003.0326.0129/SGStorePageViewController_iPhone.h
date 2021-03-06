//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGStorePageViewController.h"

#import "XBXFilterControlDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel, UIView, XBXFilterControl, XBXLocalizedLabel;

@interface SGStorePageViewController_iPhone : SGStorePageViewController <XBXFilterControlDelegate>
{
    XBXFilterControl *_filterControl;
    NSLayoutConstraint *_filterControlHeightConstraint;
    UILabel *_subscriptionStatusLabel;
    NSLayoutConstraint *_filterTopToStatusConstraint;
    UIView *_gamePassBanner;
    XBXLocalizedLabel *_bannerTitle;
    XBXLocalizedLabel *_bannerBody;
    UIButton *_bannerButton;
    NSLayoutConstraint *_subscriptionStatusTopToBannerConstraint;
    NSLayoutConstraint *_subscriptionStatusTopToHeaderConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *subscriptionStatusTopToHeaderConstraint; // @synthesize subscriptionStatusTopToHeaderConstraint=_subscriptionStatusTopToHeaderConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subscriptionStatusTopToBannerConstraint; // @synthesize subscriptionStatusTopToBannerConstraint=_subscriptionStatusTopToBannerConstraint;
@property(retain, nonatomic) UIButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property(retain, nonatomic) XBXLocalizedLabel *bannerBody; // @synthesize bannerBody=_bannerBody;
@property(retain, nonatomic) XBXLocalizedLabel *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain, nonatomic) UIView *gamePassBanner; // @synthesize gamePassBanner=_gamePassBanner;
@property(retain, nonatomic) NSLayoutConstraint *filterTopToStatusConstraint; // @synthesize filterTopToStatusConstraint=_filterTopToStatusConstraint;
@property(retain, nonatomic) UILabel *subscriptionStatusLabel; // @synthesize subscriptionStatusLabel=_subscriptionStatusLabel;
@property(retain, nonatomic) NSLayoutConstraint *filterControlHeightConstraint; // @synthesize filterControlHeightConstraint=_filterControlHeightConstraint;
@property(nonatomic) __weak XBXFilterControl *filterControl; // @synthesize filterControl=_filterControl;
- (void).cxx_destruct;
- (void)onGamePassBannerClicked:(id)arg1;
- (void)filterControl:(id)arg1 selectedOption:(id)arg2;
- (void)onViewModelSelectedFilterOptionChanged;
- (void)onViewModelFilterOptionsChanged;
- (void)unObserveViewModelPropertiesChanges;
- (void)observeViewModelPropertiesChanges;
- (void)updateSubscriptionStatusLabel;
- (void)onDestroy;
- (void)onPivotDeactivated;
- (void)onPivotActivated;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

