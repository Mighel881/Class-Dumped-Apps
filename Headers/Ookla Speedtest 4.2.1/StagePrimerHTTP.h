//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/StageDownloadHTTP.h>

@interface StagePrimerHTTP : StageDownloadHTTP
{
    long long _bandwidthCap;
    long long _sampleSize;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long sampleSize; // @synthesize sampleSize=_sampleSize;
@property(nonatomic) long long bandwidthCap; // @synthesize bandwidthCap=_bandwidthCap;
- (void)reportDownloadProgress:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 url:(id)arg2 readings:(id)arg3 sampleSize:(long long)arg4 duration:(double)arg5 threadId:(unsigned char)arg6;

@end

