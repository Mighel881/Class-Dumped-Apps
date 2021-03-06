//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIPresentationController, UIView, UIViewController;
@protocol MDMTransition;

@protocol MDMTransitionContext
@property(readonly, nonatomic) UIPresentationController *presentationController;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) UIViewController *foreViewController;
@property(readonly, nonatomic) UIViewController *backViewController;
@property(readonly, nonatomic) UIViewController *sourceViewController;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long direction;
- (void)deferToCompletion:(void (^)(void))arg1;
- (void)composeWithTransition:(id <MDMTransition>)arg1;
- (void)transitionDidEnd;
@end

