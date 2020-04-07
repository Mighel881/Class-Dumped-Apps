//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TIPImageFetchMetricInfo;

@interface TIPImageFetchMetrics : NSObject
{
    struct {
        unsigned int currentSource:4;
        unsigned int isTrackingCurrentSource:1;
        unsigned int wasCancelled:1;
    } _flags;
    unsigned long long _machStartTime;
    unsigned long long _machFirstImageLoadTime;
    unsigned long long _machEndTime;
    TIPImageFetchMetricInfo *_infos[5];
}

- (void).cxx_destruct;
- (id)description;
- (void)finalWasHit:(double)arg1 synchronously:(_Bool)arg2;
- (void)progressiveFrameWasHit:(double)arg1;
- (void)previewWasHit:(double)arg1;
- (void)addNetworkMetrics:(id)arg1 forRequest:(id)arg2 imageType:(id)arg3 imageSizeInBytes:(unsigned long long)arg4 imageDimensions:(struct CGSize)arg5;
- (void)convertNetworkMetricsToResumedNetworkMetrics;
- (void)cancelSource;
- (void)endSource;
- (void)startWithSource:(long long)arg1;
@property(readonly, nonatomic) double firstImageLoadDuration;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) _Bool wasCancelled;
- (id)metricInfoForSource:(long long)arg1;
- (id)initProject;
- (id)init;

@end
