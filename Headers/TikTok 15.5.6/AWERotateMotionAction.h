//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMotionAction.h"

@interface AWERotateMotionAction : AWEMotionAction
{
    _Bool _isRotating;
    long long _lastDirection;
    long long _state;
    long long _remainSamples;
}

@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) long long remainSamples; // @synthesize remainSamples=_remainSamples;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long lastDirection; // @synthesize lastDirection=_lastDirection;
- (id)enterFromString;
- (void)detactRotate;
- (void)motionActionWithRate:(CDStruct_39925896)arg1 updateRate:(double)arg2;
- (void)reset;
- (_Bool)isSurfaceVC;
- (id)init;

@end

