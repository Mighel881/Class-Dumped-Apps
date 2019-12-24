//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWELiveAudienceController, AWELiveBackgroundView, NSString, UIViewController;

@interface AWELiveSkylightBrowserTableViewCell : UITableViewCell
{
    _Bool _isShowLive;
    _Bool _isSlide;
    AWELiveAudienceController *_viewController;
    UIViewController *_parentVC;
    long long _liveIndex;
    NSString *_pageName;
    long long _skylightType;
    AWELiveBackgroundView *_baseView;
}

+ (id)identifier;
@property(retain, nonatomic) AWELiveBackgroundView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) long long skylightType; // @synthesize skylightType=_skylightType;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) long long liveIndex; // @synthesize liveIndex=_liveIndex;
@property(nonatomic) _Bool isSlide; // @synthesize isSlide=_isSlide;
@property(nonatomic) _Bool isShowLive; // @synthesize isShowLive=_isShowLive;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) AWELiveAudienceController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_removeChildVC;
- (void)_addChildVC:(id)arg1;
- (void)_addChildVCwithUserModel:(id)arg1;
- (void)startPlay;
- (void)clear;
- (void)configWithModel:(id)arg1 withParentVC:(id)arg2;
- (void)configWithUserModel:(id)arg1 withParentVC:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
