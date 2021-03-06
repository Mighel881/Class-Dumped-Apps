//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGChallengeDeltaChangePasswordViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGChallengeDeltaChangePasswordView, NSString;
@protocol IGCheckpointViewControllerProtocol;

@interface IGChallengeDeltaChangePasswordViewController : IGViewController <UIGestureRecognizerDelegate, IGChallengeDeltaChangePasswordViewDelegate>
{
    IGChallengeDeltaChangePasswordView *_deltaChangePasswordView;
    id <IGCheckpointViewControllerProtocol> _coordinator;
}

@property(nonatomic) __weak id <IGCheckpointViewControllerProtocol> coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)_hideKeyboard;
- (void)_didTapBackButton;
- (id)analyticsModule;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)deltaChangePasswordViewDidTapOnSubmitButton:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

