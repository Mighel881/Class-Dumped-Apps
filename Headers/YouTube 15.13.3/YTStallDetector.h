//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTStallDetector : NSObject
{
    double _threshold;
}

@property(readonly, nonatomic) double threshold; // @synthesize threshold=_threshold;
- (void)addStallObserver:(id)arg1;
- (void)pauseDetection;
- (void)startDetection;
- (id)initWithThreshold:(double)arg1;

@end

