//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAReplicatorLayer.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAAnimationGroup, CALayer, NSString, UIColor;

@interface HMEPulsingRippleLayer : CAReplicatorLayer <CAAnimationDelegate>
{
    UIColor *_rippleColor;
    double _animationDuration;
    double _pulseInterval;
    unsigned long long _rippleLayerCount;
    double _innerRadius;
    CALayer *_effect;
    CAAnimationGroup *_animationGroup;
}

@property(retain, nonatomic) CAAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(readonly, nonatomic) CALayer *effect; // @synthesize effect=_effect;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
@property(nonatomic) unsigned long long rippleLayerCount; // @synthesize rippleLayerCount=_rippleLayerCount;
@property(nonatomic) double pulseInterval; // @synthesize pulseInterval=_pulseInterval;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
- (void).cxx_destruct;
- (void)setupAnimationGroup;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)stop;
- (void)start;
- (void)layoutSublayers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

