//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface IESLiveHorizontalFansGroupJoinSuccessAnimationView : UIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    CDUnknownBlockType _animationDidFinish;
    UIView *_backgroundView;
    UIView *_userInfoView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_nameSubLabel;
    UIView *_containerView;
    UIView *_animatedSuperView;
    struct CGPoint _animatedEndPoint;
}

@property(nonatomic) __weak UIView *animatedSuperView; // @synthesize animatedSuperView=_animatedSuperView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *nameSubLabel; // @synthesize nameSubLabel=_nameSubLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGPoint animatedEndPoint; // @synthesize animatedEndPoint=_animatedEndPoint;
@property(copy, nonatomic) CDUnknownBlockType animationDidFinish; // @synthesize animationDidFinish=_animationDidFinish;
- (void).cxx_destruct;
- (void)stopAllAnimations;
- (void)animationsDidFinished;
- (void)groupAnimation;
- (void)opacityAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimationWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 animatedSuperView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

