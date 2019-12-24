//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class AWEPresentPullOutAnimator, UIGestureRecognizer, UIViewController;
@protocol AWEPresentPullOutInteractiveDelegate;

@interface AWEPresentPullOutInteractive : UIPercentDrivenInteractiveTransition
{
    _Bool _interactionInProgress;
    _Bool _shouldComplete;
    UIViewController<AWEPresentPullOutInteractiveDelegate> *_toVC;
    AWEPresentPullOutAnimator *_animator;
    double _startVelocity;
    UIGestureRecognizer *_pan;
}

@property(retain, nonatomic) UIGestureRecognizer *pan; // @synthesize pan=_pan;
@property(nonatomic) double startVelocity; // @synthesize startVelocity=_startVelocity;
@property(nonatomic) _Bool shouldComplete; // @synthesize shouldComplete=_shouldComplete;
@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(retain, nonatomic) AWEPresentPullOutAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak UIViewController<AWEPresentPullOutInteractiveDelegate> *toVC; // @synthesize toVC=_toVC;
- (void).cxx_destruct;
- (unsigned long long)directionForPan:(id)arg1;
- (void)finishInteractiveTransition;
- (void)handleGesture:(id)arg1;
- (void)registerGestureto:(id)arg1;
- (id)initWithAnimator:(id)arg1;

@end
