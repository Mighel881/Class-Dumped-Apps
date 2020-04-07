//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "AWEPOICollectViewProtocol-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class CAAnimationGroup, CABasicAnimation, NSString, UIImage, UIImageView;

@interface AWEPOICollectView : UIControl <CAAnimationDelegate, AWEPOICollectViewProtocol>
{
    _Bool _isCollected;
    UIImage *_collectImage;
    UIImage *_unCollectImage;
    UIImageView *_imageView;
    CABasicAnimation *_basicAnimation1;
    CABasicAnimation *_basicAnimation2;
    CABasicAnimation *_basicAnimation3;
    CABasicAnimation *_basicAnimation4;
    CAAnimationGroup *_aniGroup1;
    CAAnimationGroup *_aniGroup2;
    CABasicAnimation *_alphaAnimation1;
    CABasicAnimation *_alphaAnimation2;
}

@property(retain, nonatomic) CABasicAnimation *alphaAnimation2; // @synthesize alphaAnimation2=_alphaAnimation2;
@property(retain, nonatomic) CABasicAnimation *alphaAnimation1; // @synthesize alphaAnimation1=_alphaAnimation1;
@property(retain, nonatomic) CAAnimationGroup *aniGroup2; // @synthesize aniGroup2=_aniGroup2;
@property(retain, nonatomic) CAAnimationGroup *aniGroup1; // @synthesize aniGroup1=_aniGroup1;
@property(retain, nonatomic) CABasicAnimation *basicAnimation4; // @synthesize basicAnimation4=_basicAnimation4;
@property(retain, nonatomic) CABasicAnimation *basicAnimation3; // @synthesize basicAnimation3=_basicAnimation3;
@property(retain, nonatomic) CABasicAnimation *basicAnimation2; // @synthesize basicAnimation2=_basicAnimation2;
@property(retain, nonatomic) CABasicAnimation *basicAnimation1; // @synthesize basicAnimation1=_basicAnimation1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *unCollectImage; // @synthesize unCollectImage=_unCollectImage;
@property(retain, nonatomic) UIImage *collectImage; // @synthesize collectImage=_collectImage;
@property(nonatomic) _Bool isCollected; // @synthesize isCollected=_isCollected;
- (void).cxx_destruct;
- (void)removeAllAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginSecondTouchAnimation;
- (void)beginFirstTouchAnimation;
- (void)beginTouchAnimation;
- (void)setCollected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
