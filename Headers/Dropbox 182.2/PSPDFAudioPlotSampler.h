//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURL;
@protocol PSPDFAudioPlotSamplerObserver;

@interface PSPDFAudioPlotSampler : NSObject
{
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isSampling
    double _renderProgress;
    NSURL *_samplingURL;
    id <PSPDFAudioPlotSamplerObserver> _progressObserver;
    NSOperationQueue *_samplingQueue;
}

@property(readonly, nonatomic) NSOperationQueue *samplingQueue; // @synthesize samplingQueue=_samplingQueue;
@property(nonatomic) __weak id <PSPDFAudioPlotSamplerObserver> progressObserver; // @synthesize progressObserver=_progressObserver;
@property(copy, nonatomic) NSURL *samplingURL; // @synthesize samplingURL=_samplingURL;
- (void).cxx_destruct;
- (void)cleanup;
- (void)cancelSampling;
- (void)notifyErrorToObserver:(id)arg1;
- (void)updatePath:(struct CGPath *)arg1 usingSamples:(const vector_3203cf93 *)arg2 totalSampleSize:(unsigned long long)arg3;
- (void)startSamplingForURL:(id)arg1 operationBlock:(id)arg2;
- (void)startSamplingForURL:(id)arg1;
- (id)initWithProgressObserver:(id)arg1;

@end
