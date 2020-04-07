//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESMMCamera, LOTAnimationView, NSTimer;
@protocol AWEVideoRecoderProtocol><ACCApplyBeautyProtocol;

@interface ACCDuetLayoutGuideView : UIView
{
    _Bool _hasAnimationOnce;
    UIView *_containerView;
    UIView *_firstBlackView;
    UIView *_secondBlackView;
    unsigned long long _guideType;
    LOTAnimationView *_guideAnimationView;
    IESMMCamera<AWEVideoRecoderProtocol><ACCApplyBeautyProtocol> *_camera;
    NSTimer *_durationTimer;
}

+ (id)guideTypeStoreKeyForType:(unsigned long long)arg1;
+ (unsigned long long)guideTypeFromGuideIndex:(long long)arg1;
+ (id)showDuetLayoutGuideViewIfNeededWithContainerView:(id)arg1 guideIndex:(long long)arg2 camera:(id)arg3;
@property(nonatomic) _Bool hasAnimationOnce; // @synthesize hasAnimationOnce=_hasAnimationOnce;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(nonatomic) __weak IESMMCamera<AWEVideoRecoderProtocol><ACCApplyBeautyProtocol> *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) LOTAnimationView *guideAnimationView; // @synthesize guideAnimationView=_guideAnimationView;
@property(nonatomic) unsigned long long guideType; // @synthesize guideType=_guideType;
@property(retain, nonatomic) UIView *secondBlackView; // @synthesize secondBlackView=_secondBlackView;
@property(retain, nonatomic) UIView *firstBlackView; // @synthesize firstBlackView=_firstBlackView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)invalidateDurationTimer;
- (void)fireMovingCameraTimer;
- (struct CGPoint)startPoint;
- (void)dismiss;
- (void)doAnimations;
- (void)show;
- (void)setupUIForThreeScreen;
- (void)setupUIForUpDownScreen;
- (void)setupUI;
- (id)initWithContainerView:(id)arg1 guideType:(unsigned long long)arg2;

@end
