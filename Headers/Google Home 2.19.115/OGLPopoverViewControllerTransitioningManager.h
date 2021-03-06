//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIView;
@protocol OGLPopoverPresentationControllerDelegate;

@interface OGLPopoverViewControllerTransitioningManager : NSObject <UIViewControllerTransitioningDelegate>
{
    UIView *_popoverSourceView;
    id <OGLPopoverPresentationControllerDelegate> _presentationControllerDelegate;
}

@property(nonatomic) __weak id <OGLPopoverPresentationControllerDelegate> presentationControllerDelegate; // @synthesize presentationControllerDelegate=_presentationControllerDelegate;
@property(retain, nonatomic) UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

