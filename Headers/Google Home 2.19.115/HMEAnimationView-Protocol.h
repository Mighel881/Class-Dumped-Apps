//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEAnimationViewAssetsBundle, HMEDynamicAnimationViewAssetsBundle, UIView;
@protocol HMEAnimationView;

@protocol HMEAnimationView <NSObject>
+ (UIView<HMEAnimationView> *)animationViewWithDynamicAssetsBundle:(HMEDynamicAnimationViewAssetsBundle *)arg1;
+ (UIView<HMEAnimationView> *)animationViewWithAssetsBundle:(HMEAnimationViewAssetsBundle *)arg1;
@property(readonly, nonatomic) long long playingState;
- (struct CGSize)intrinsicContentSize;
- (void)cancel;
- (void)stopAnimating;
- (void)finishCurrentAnimation;
- (_Bool)isFailurePlaying;
- (_Bool)isSuccessPlaying;
- (_Bool)isLoopPlaying;
- (_Bool)isIntroPlaying;
- (void)resumePlayingState:(long long)arg1;
- (void)playFailureAnimationWithBlock:(void (^)(void))arg1;
- (void)playSuccessAnimationWithBlock:(void (^)(void))arg1;
- (void)playOnceWithBlock:(void (^)(void))arg1;
- (void)startAnimating;
@end

