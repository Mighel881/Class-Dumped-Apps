//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIView;

@protocol AWEZoomTransitionInnerContextProvider

@optional
- (_Bool)zoomTransitionForbidShowToVCSnapshot;
- (double)tabbarAnimationDuration;
- (double)animationDuration;
- (_Bool)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (void)zoomTransitionWillStartForView:(UIView *)arg1;
- (_Bool)zoomTransitionWantsTabBarAlphaAnimation;
- (_Bool)zoomTransitionWantsViewMigration;
- (_Bool)zoomTransitionWantsBlackMaskView;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (UIView *)zoomTransitionEndView;
@end
