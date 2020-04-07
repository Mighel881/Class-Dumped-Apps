//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PSPDFKitUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <PSPDFKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIView;
@protocol PSPDFViewControllerFullscreenTransitioning;

@interface PSPDFFullscreenTransitionViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    struct CGRect _embeddedFrame;
    struct CGAffineTransform _embeddedContentTransform;
    unsigned long long _embeddedAutoresizingMask;
    UIView *_embeddedSuperview;
    _Bool _panGestureEnabled;
    long long _state;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _panGestureTreshold;
    id <PSPDFViewControllerFullscreenTransitioning> _transition;
}

@property(readonly, nonatomic) __weak id <PSPDFViewControllerFullscreenTransitioning> transition; // @synthesize transition=_transition;
@property(nonatomic) double panGestureTreshold; // @synthesize panGestureTreshold=_panGestureTreshold;
@property(nonatomic, getter=isPanDismissalEnabled) _Bool panGestureEnabled; // @synthesize panGestureEnabled=_panGestureEnabled;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)callDidTransitionToFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)callWillTransitionToFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)callDidEndFullscreenGesture:(_Bool)arg1;
- (void)callDidBeginFullscreenGesture;
- (void)panGestureRecognizerDidEnd:(id)arg1;
- (void)updateBackgroundViewWithPanGestureRecognizer:(id)arg1;
- (void)updateContentViewWithPanGestureRecognizer:(id)arg1;
- (void)panGestureRecognizerDidChange:(id)arg1;
- (void)panGestureRecognizerDidBegin:(id)arg1;
- (void)gestureRecognizerDidPan:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)transitionToEmbeddedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transitionToFullscreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)initWithFullscreenTransitioning:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
