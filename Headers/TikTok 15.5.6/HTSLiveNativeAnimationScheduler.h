//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol HTSLiveAnimationView;

@interface HTSLiveNativeAnimationScheduler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _enableSwipeToDimiss;
    _Bool _animating;
    _Bool _invalid;
    UIView *_playground;
    NSMutableArray *_animations;
    UIView<HTSLiveAnimationView> *_currentAnimationView;
}

@property(nonatomic) __weak UIView<HTSLiveAnimationView> *currentAnimationView; // @synthesize currentAnimationView=_currentAnimationView;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(nonatomic) __weak UIView *playground; // @synthesize playground=_playground;
@property(nonatomic) _Bool enableSwipeToDimiss; // @synthesize enableSwipeToDimiss=_enableSwipeToDimiss;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)swipeGestureRecognizeAction:(id)arg1;
- (void)addSwipeGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer:(id)arg1;
- (void)makeImp:(id)arg1 interactiveWithAnimation:(id)arg2;
- (id)impForAnimation:(id)arg1;
- (void)excuteAnimation:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)startNextAnimationIfNeeded;
- (void)shiftAnimation:(_Bool)arg1;
- (void)pushAnimation:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)dispatch:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)cancelCurrentAnimation;
- (void)purge;
- (void)stopAnimations;
- (id)initWithPlayground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
