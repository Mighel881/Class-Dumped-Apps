//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface YTReelCommentsWrapperTransitionCoordinator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_dimmingView;
    _Bool _addDimmingView;
}

@property(nonatomic, getter=shouldAddDimmingView) _Bool addDimmingView; // @synthesize addDimmingView=_addDimmingView;
- (void).cxx_destruct;
- (void)performTransition:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareForTransition:(id)arg1;
- (unsigned long long)animationOptions:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGAffineTransform)offScreenTransformForContext:(id)arg1;
- (id)presentedViewForContext:(id)arg1;
- (_Bool)isPresented:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
