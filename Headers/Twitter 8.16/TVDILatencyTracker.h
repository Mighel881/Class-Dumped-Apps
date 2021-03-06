//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TAVPlaybackState, TVDILatencyMetrics;

@interface TVDILatencyTracker : NSObject
{
    double _runningTotal;
    double _totalTimeElapsed;
    TAVPlaybackState *_lastKnownState;
    double _minimum;
    double _maximum;
}

@property(nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(nonatomic) double minimum; // @synthesize minimum=_minimum;
@property(retain, nonatomic) TAVPlaybackState *lastKnownState; // @synthesize lastKnownState=_lastKnownState;
@property(nonatomic) double totalTimeElapsed; // @synthesize totalTimeElapsed=_totalTimeElapsed;
@property(nonatomic) double runningTotal; // @synthesize runningTotal=_runningTotal;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TVDILatencyMetrics *metrics;
- (void)updateWithPlaybackState:(id)arg1 clientDate:(id)arg2;
- (id)init;

@end

