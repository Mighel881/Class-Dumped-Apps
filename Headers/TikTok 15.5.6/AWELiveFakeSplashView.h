//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWESplashFakeLaunchScreenView, UILabel;

@interface AWELiveFakeSplashView : UIView
{
    AWEAwemeModel *_model;
    UILabel *_skipBtn;
    AWESplashFakeLaunchScreenView *_fakeLaunchScreenView;
}

@property(retain, nonatomic) AWESplashFakeLaunchScreenView *fakeLaunchScreenView; // @synthesize fakeLaunchScreenView=_fakeLaunchScreenView;
@property(retain, nonatomic) UILabel *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)onSkipBtnClicked;
- (void)onSplashScreenClicked;
- (void)catchGesture;
- (void)removeFakeLaunchScreen;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
