//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSSet, UIColor, UINavigationController, UIViewController;

@interface UIView (PSPDFThemeHooks)
+ (void)pspdf_performWithoutAnimation:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
+ (void)pspdf_animateWithDuration:(double)arg1 delay:(double)arg2 springy:(_Bool)arg3 springDamping:(double)arg4 initialVelocity:(double)arg5 options:(unsigned long long)arg6 animations:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)pspdf_animateWithDuration:(double)arg1 delay:(double)arg2 springy:(_Bool)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)pspdf_smoothAnimate:(_Bool)arg1 withOptions:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pspdf_smoothAnimate:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)pspdf_springAnimate:(_Bool)arg1 withOptions:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pspdf_springAnimate:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)pspdf_animate:(_Bool)arg1 withOptions:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pspdf_animate:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)pspdf_selectedTintColorMatchingBar:(id)arg1;
+ (id)pspdf_effectiveBackgroundColorOfBar:(id)arg1;
- (id)pspdf_themeAction:(CDUnknownBlockType)arg1 selector:(SEL)arg2;
- (id)pspdf_activateConstraintsMatchingLayoutGuide:(id)arg1 top:(double)arg2 bottom:(double)arg3 leading:(double)arg4 trailing:(double)arg5;
- (id)pspdf_activateConstraintsMatchingLayoutGuide:(id)arg1;
- (id)pspdf_activateConstraintsMatchingView:(id)arg1 top:(double)arg2 bottom:(double)arg3 leading:(double)arg4 trailing:(double)arg5;
- (id)pspdf_activateConstraintsMatchingView:(id)arg1;
- (void)pspdf_hugAndTugContent;
- (void)pspdf_addManagedSubview:(id)arg1;
@property(nonatomic) struct PSPDFViewGeometry pspdf_geometry;
@property(readonly, nonatomic) double pspdf_currentScreenScale;
- (_Bool)pspdf_isInside:(id)arg1;
- (_Bool)pspdf_hasAnySuperviewWithClassInClasses:(id)arg1;
- (void)pspdf_addRecursiveSubviewsToSet:(id)arg1;
@property(readonly, nonatomic) NSSet *pspdf_recursiveSubviews;
- (id)pspdf_closestSubviewWithClassSuffix:(id)arg1;
- (id)pspdf_closestSubviewWithClassPrefix:(id)arg1;
- (id)pspdf_closestSuperviewConformingToProtocol:(id)arg1;
- (id)pspdf_closestSubviewOfClass:(Class)arg1;
- (id)pspdf_closestSubviewOfClass:(Class)arg1 atPoint:(struct CGPoint)arg2;
- (id)pspdf_closestSuperviewOfClass:(Class)arg1;
@property(readonly, nonatomic) UINavigationController *pspdf_closestNavigationController;
- (id)pspdf_closestViewControllerOfClass:(Class)arg1;
@property(readonly, nonatomic) UIViewController *pspdf_closestViewController;
- (void)pspdf_enumerateDescendantsBreadthFirstWithBlock:(CDUnknownBlockType)arg1;
- (void)pspdf_shakeWithOffset:(struct CGPoint)arg1;
- (void)pspdf_removeAnimationsRecursively;
- (void)pspdf_fadeWithDuration:(double)arg1 delay:(double)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pspdf_fadeAnimated:(_Bool)arg1 withActions:(CDUnknownBlockType)arg2;
- (void)pspdf_performBlockIfAppearanceChangedFrom:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)pspdf_performBlockUsingViewTraitCollection:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIColor *pspdf_rawTintColor;
@property(readonly, nonatomic) _Bool pspdf_isVisible;
- (void)pspdf_mirrorViewIfRightToLeft;
@property(readonly, nonatomic) _Bool pspdf_isRightToLeftLayoutDirection;
- (void)pspdf_performWithoutTriggeringSetNeedsLayout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool pspdf_firstResponderIsTextInput;
@property(readonly, nonatomic) UIView *pspdf_firstResponderInsideView;
@end
